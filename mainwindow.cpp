#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <math.h>
#include "parts.h"
#include "planets.h"
#include <QDebug>

#define PI 3.14159265
#define G_CONSTANT 9.81

static double basicunderlying = 0;
static double basicresult = 0;

void ClearVariables() {
    basicunderlying = 0;
    basicresult = 0;
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ClearVariables();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_basicdvbutton_clicked()
{
    if ((ui->basicdeltavcombo->currentText()).isEmpty()){
        ui->basicdvresultlineedit->setText("Engine not chosen!");
        return;
    }

    int isp = 0;
    double massStart = ui->mstartlineedit->text().toDouble();
    double massEnd = ui->mendlineedit->text().toDouble();
    bool usingAtmValues = ui->checkBox_atm_or_vac->isChecked();

    int parts_length = sizeof(parts) / sizeof(part_t);
    for(int i = 0; i < parts_length; i++) {
        QString partName = parts[i].partName;
        if(partName == ui->basicdeltavcombo->currentText()) {
            isp = usingAtmValues ? parts[i].isp_atm : parts[i].isp_vac;
            break;
        }
    }
    basicunderlying = log(massStart / massEnd) * isp * G_CONSTANT;
    ui->basicdvresultlineedit->setText(QString::number(basicunderlying));
}

void MainWindow::on_basicdeltavtotalbutton_clicked()
{
    basicresult = basicresult + basicunderlying;
    ui->basicdeltavtotalresult->setText(QString::number(basicresult));
}

void MainWindow::on_basicdvclearbutton_clicked()
{
    ui->basicdeltavtotalresult->setText("");
    ui->basicdvresultlineedit->setText("");
    ui->mstartlineedit->setText("");
    ui->mendlineedit->setText("");
    ui->basicdeltavcombo->setCurrentIndex(0);
}

void MainWindow::on_twrcalculatebutton_clicked()
{
    if(ui->twrbodycombo->currentIndex() == 0) {
        ui->twrresultlineedit->setText("Orbital Body Not Chosen!");
        return;
    }

    double thrust = 0.0;
    bool usingAtmValues = ui->checkBox_twr_atm_or_vac->isChecked();
    double gravity = planets[ui->twrbodycombo->currentIndex() - 1].gravity;
    qDebug() << "Gravity: " << gravity;

    int parts_length = sizeof(parts) / sizeof(part_t);
    for(int i = 0; i < parts_length; i++) {
        QString partName = parts[i].partName;
        if(partName == ui->twrcombo->currentText()) {
            thrust = usingAtmValues ? parts[i].thrust_atm : parts[i].thrust_vac;
            qDebug() << "Using atm Values: " << usingAtmValues;
            break;
        }
    }

    double twr = (ui->twrengineamount->text().toInt() * thrust) / (ui->twrmasslineedit->text().toDouble() * gravity);
    qDebug() << "twr: " << twr;
    ui->twrresultlineedit->setText(QString::number(twr));
}

void MainWindow::on_twrclearbutton_clicked()
{
    ui->twrcombo->setCurrentIndex(0);
    ui->twrbodycombo->setCurrentIndex(0);
    ui->twrengineamount->setText("");
    ui->twrmasslineedit->setText("");
    ui->twrresultlineedit->setText("");
}

void MainWindow::on_orbitalvelocitybutton_clicked()
{
    if (ui->orbitalvelocityheight->text().isEmpty()){
        ui->orbitalvelocityanswer->setText("Orbital height not set!");
        return;
    }

    double Gconstant = (6.67)*(pow (10.0, -11.0));
    double body_mass = 0;
    double orb_height = 0;
    double equatorial_radius = 0;

    int planets_length = sizeof(planets) / sizeof(planet_t);
    for(int i = 0; i < planets_length; i++) {
        QString planetName = planets[i].planetName;
        if(ui->orbitalvelocitycombo->currentText() == planetName) {
            equatorial_radius = planets[i].equatorial_radius;
            body_mass = planets[i].bodymass.bodymassMultiplier * pow(10.0, planets[i].bodymass.base10Power);
            break;
        }
    }

    orb_height = (ui->orbitalvelocityheight->text().toDouble())*1000;
    double orbvelresult = (Gconstant*body_mass)*(1/(orb_height + equatorial_radius));
    orbvelresult = sqrt(orbvelresult);
    ui->orbitalvelocityanswer->setText(QString::number(orbvelresult));
}

void MainWindow::on_orbvelclearbutton_clicked()
{
    ui->orbitalvelocityanswer->setText("");
    ui->orbitalvelocitycombo->setCurrentIndex(0);
    ui->orbitalvelocityheight->setText("");
}

void MainWindow::on_incchangeresultbutton_clicked()
{
    double orbvel = ui->incchangevelocitylineedit->text().toFloat();
    double incs = ui->incstartlineedit->text().toFloat();
    double ince = ui->incendlineedit->text().toFloat();
    if ((ince)>(incs)){
        double incchangeresult = (2*orbvel)*(sin(((ince-incs)/2)*PI/180));
        ui->incchangeresultlineedit->setText(QString::number(incchangeresult));
    }
    else if ((ince) == (incs)){
        double incchangeresult = 0;
        ui->incchangeresultlineedit->setText(QString::number(incchangeresult));
    }
    else if ((ince)<(incs)){
        double incchangeresult = (2*orbvel)*(sin(((ince-incs)/(-2))*PI/180));
        ui->incchangeresultlineedit->setText(QString::number(incchangeresult));
    }
    else{
        ui->incchangeresultlineedit->setText("How the fuck did this happen?");
    }
}

void MainWindow::on_incchangeclearbutton_clicked()
{
    ui->incchangeresultlineedit->setText("");
    ui->incendlineedit->setText("");
    ui->incstartlineedit->setText("");
    ui->incchangevelocitylineedit->setText("");
}

void MainWindow::on_comboBox_geostat_orbit_activated(int index)
{
    double result = 0;
    double mass = 0;
    double gconstant = (6.67)*pow(10.0, (-11.0));
    double equatorial_radius = 0;
    double sidereal_rotational_period = 0;

    int planets_length = sizeof(planets) / sizeof(planet_t);
    for(int i = 0; i < planets_length; i++) {
        QString planetName = planets[i].planetName;
        if(planetName == ui->comboBox_geostat_orbit->currentText()) {
            sidereal_rotational_period = planets[i].sidereal_rotational_period;
            equatorial_radius = planets[i].equatorial_radius;
            mass = planets[i].bodymass.bodymassMultiplier * pow(10.0, planets[i].bodymass.base10Power);
            break;
        }
    }

    result = (pow(sidereal_rotational_period, 2.0) * gconstant * mass) / ( 4 * pow(PI, 2.0));
    result = pow(result, 1/3.0) - equatorial_radius;
    ui->geostatlineedit->setText(QString::number(result/1000));
}
