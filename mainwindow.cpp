#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <math.h>
#define PI 3.14159265

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);    
    basicunderlying = 0;
    basicresult = 0;
    equatorial_radius = 0;
    twrunderlying = 0;
    orbvelresult = 0;    
    incchangeresult = 0;
    orbvel = 0;
    incs = 0;
    ince = 0;
    orbitalperiod = 0;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_basicdvbutton_clicked()
{
    int isp;
    if ((ui->basicdeltavcombo->currentText()).isEmpty()){
        ui->basicdvresultlineedit->setText("Engine not chosen!");
    }
    else if((ui->basicdeltavcombo->currentText()) == "LV-1R(atm)"){
        isp = 260;
        basicunderlying = log ((ui->mstartlineedit->text().toDouble())/(ui->mendlineedit->text().toDouble())) * isp * 9.81;
        ui->basicdvresultlineedit->setText(QString::number(basicunderlying));
    }
    else if((ui->basicdeltavcombo->currentText()) == "LV-1R(vac)"){
        isp = 290;
        basicunderlying = log ((ui->mstartlineedit->text().toDouble())/(ui->mendlineedit->text().toDouble())) * isp * 9.81;
        ui->basicdvresultlineedit->setText(QString::number(basicunderlying));
    }
    else if((ui->basicdeltavcombo->currentText()) == "24-77(atm)"){
        isp = 250;
        basicunderlying = log ((ui->mstartlineedit->text().toDouble())/(ui->mendlineedit->text().toDouble())) * isp * 9.81;
        ui->basicdvresultlineedit->setText(QString::number(basicunderlying));
    }
    else if((ui->basicdeltavcombo->currentText()) == "24-77(vac)"){
        isp = 290;
        basicunderlying = log ((ui->mstartlineedit->text().toDouble())/(ui->mendlineedit->text().toDouble())) * isp * 9.81;
        ui->basicdvresultlineedit->setText(QString::number(basicunderlying));
    }
    else if((ui->basicdeltavcombo->currentText()) == "Mk-55(atm)"){
        isp = 275;
        basicunderlying = log ((ui->mstartlineedit->text().toDouble())/(ui->mendlineedit->text().toDouble())) * isp * 9.81;
        ui->basicdvresultlineedit->setText(QString::number(basicunderlying));
    }
    else if((ui->basicdeltavcombo->currentText()) == "Mk-55(vac)"){
        isp = 305;
        basicunderlying = log ((ui->mstartlineedit->text().toDouble())/(ui->mendlineedit->text().toDouble())) * isp * 9.81;
        ui->basicdvresultlineedit->setText(QString::number(basicunderlying));
    }
    else if((ui->basicdeltavcombo->currentText()) == "O-10(atm)"){
        isp = 120;
        basicunderlying = log ((ui->mstartlineedit->text().toDouble())/(ui->mendlineedit->text().toDouble())) * isp * 9.81;
        ui->basicdvresultlineedit->setText(QString::number(basicunderlying));
    }
    else if((ui->basicdeltavcombo->currentText()) == "O-10(vac)"){
        isp = 250;
        basicunderlying = log ((ui->mstartlineedit->text().toDouble())/(ui->mendlineedit->text().toDouble())) * isp * 9.81;
        ui->basicdvresultlineedit->setText(QString::number(basicunderlying));
    }
    else if((ui->basicdeltavcombo->currentText()) == "LV-1(atm)"){
        isp = 80;
        basicunderlying = log ((ui->mstartlineedit->text().toDouble())/(ui->mendlineedit->text().toDouble())) * isp * 9.81;
        ui->basicdvresultlineedit->setText(QString::number(basicunderlying));
    }
    else if((ui->basicdeltavcombo->currentText()) == "LV-1(vac)"){
        isp = 315;
        basicunderlying = log ((ui->mstartlineedit->text().toDouble())/(ui->mendlineedit->text().toDouble())) * isp * 9.81;
        ui->basicdvresultlineedit->setText(QString::number(basicunderlying));
    }
    else if((ui->basicdeltavcombo->currentText()) == "48-7S(atm)"){
        isp = 270;
        basicunderlying = log ((ui->mstartlineedit->text().toDouble())/(ui->mendlineedit->text().toDouble())) * isp * 9.81;
        ui->basicdvresultlineedit->setText(QString::number(basicunderlying));
    }
    else if((ui->basicdeltavcombo->currentText()) == "48-7S(vac)"){
        isp = 300;
        basicunderlying = log ((ui->mstartlineedit->text().toDouble())/(ui->mendlineedit->text().toDouble())) * isp * 9.81;
        ui->basicdvresultlineedit->setText(QString::number(basicunderlying));
    }
    else if((ui->basicdeltavcombo->currentText()) == "LV-909(atm)"){
        isp = 85;
        basicunderlying = log ((ui->mstartlineedit->text().toDouble())/(ui->mendlineedit->text().toDouble())) * isp * 9.81;
        ui->basicdvresultlineedit->setText(QString::number(basicunderlying));
    }
    else if((ui->basicdeltavcombo->currentText()) == "LV-909(vac)"){
        isp = 345;
        basicunderlying = log ((ui->mstartlineedit->text().toDouble())/(ui->mendlineedit->text().toDouble())) * isp * 9.81;
        ui->basicdvresultlineedit->setText(QString::number(basicunderlying));
    }
    else if((ui->basicdeltavcombo->currentText()) == "LV-T30(atm)"){
        isp = 280;
        basicunderlying = log ((ui->mstartlineedit->text().toDouble())/(ui->mendlineedit->text().toDouble())) * isp * 9.81;
        ui->basicdvresultlineedit->setText(QString::number(basicunderlying));
    }
    else if((ui->basicdeltavcombo->currentText()) == "LV-T30(vac)"){
        isp = 300;
        basicunderlying = log ((ui->mstartlineedit->text().toDouble())/(ui->mendlineedit->text().toDouble())) * isp * 9.81;
        ui->basicdvresultlineedit->setText(QString::number(basicunderlying));
    }
    else if((ui->basicdeltavcombo->currentText()) == "LV-T45(atm)"){
        isp = 270;
        basicunderlying = log ((ui->mstartlineedit->text().toDouble())/(ui->mendlineedit->text().toDouble())) * isp * 9.81;
        ui->basicdvresultlineedit->setText(QString::number(basicunderlying));
    }
    else if((ui->basicdeltavcombo->currentText()) == "LV-T45(vac)"){
        isp = 320;
        basicunderlying = log ((ui->mstartlineedit->text().toDouble())/(ui->mendlineedit->text().toDouble())) * isp * 9.81;
        ui->basicdvresultlineedit->setText(QString::number(basicunderlying));
    }
    else if((ui->basicdeltavcombo->currentText()) == "CR-7(atm)"){
        isp = 275;
        basicunderlying = log ((ui->mstartlineedit->text().toDouble())/(ui->mendlineedit->text().toDouble())) * isp * 9.81;
        ui->basicdvresultlineedit->setText(QString::number(basicunderlying));
    }
    else if((ui->basicdeltavcombo->currentText()) == "CR-7(vac)"){
        isp = 305;
        basicunderlying = log ((ui->mstartlineedit->text().toDouble())/(ui->mendlineedit->text().toDouble())) * isp * 9.81;
        ui->basicdvresultlineedit->setText(QString::number(basicunderlying));
    }
    else if((ui->basicdeltavcombo->currentText()) == "T-1(atm)"){
        isp = 290;
        basicunderlying = log ((ui->mstartlineedit->text().toDouble())/(ui->mendlineedit->text().toDouble())) * isp * 9.81;
        ui->basicdvresultlineedit->setText(QString::number(basicunderlying));
    }
    else if((ui->basicdeltavcombo->currentText()) == "T-1(vac)"){
        isp = 340;
        basicunderlying = log ((ui->mstartlineedit->text().toDouble())/(ui->mendlineedit->text().toDouble())) * isp * 9.81;
        ui->basicdvresultlineedit->setText(QString::number(basicunderlying));
    }
    else if((ui->basicdeltavcombo->currentText()) == "LV-N(atm)"){
        isp = 185;
        basicunderlying = log ((ui->mstartlineedit->text().toDouble())/(ui->mendlineedit->text().toDouble())) * isp * 9.81;
        ui->basicdvresultlineedit->setText(QString::number(basicunderlying));
    }
    else if((ui->basicdeltavcombo->currentText()) == "LLV-N(vac)"){
        isp = 800;
        basicunderlying = log ((ui->mstartlineedit->text().toDouble())/(ui->mendlineedit->text().toDouble())) * isp * 9.81;
        ui->basicdvresultlineedit->setText(QString::number(basicunderlying));
    }
    else if((ui->basicdeltavcombo->currentText()) == "Poodle(atm)"){
        isp = 90;
        basicunderlying = log ((ui->mstartlineedit->text().toDouble())/(ui->mendlineedit->text().toDouble())) * isp * 9.81;
        ui->basicdvresultlineedit->setText(QString::number(basicunderlying));
    }
    else if((ui->basicdeltavcombo->currentText()) == "Poodle(vac)"){
        isp = 350;
        basicunderlying = log ((ui->mstartlineedit->text().toDouble())/(ui->mendlineedit->text().toDouble())) * isp * 9.81;
        ui->basicdvresultlineedit->setText(QString::number(basicunderlying));
    }
    else if((ui->basicdeltavcombo->currentText()) == "Skipper(atm)"){
        isp = 280;
        basicunderlying = log ((ui->mstartlineedit->text().toDouble())/(ui->mendlineedit->text().toDouble())) * isp * 9.81;
        ui->basicdvresultlineedit->setText(QString::number(basicunderlying));
    }
    else if((ui->basicdeltavcombo->currentText()) == "Skipper(vac)"){
        isp = 320;
        basicunderlying = log ((ui->mstartlineedit->text().toDouble())/(ui->mendlineedit->text().toDouble())) * isp * 9.81;
        ui->basicdvresultlineedit->setText(QString::number(basicunderlying));
    }
    else if((ui->basicdeltavcombo->currentText()) == "Mainsail(atm)"){
        isp = 285;
        basicunderlying = log ((ui->mstartlineedit->text().toDouble())/(ui->mendlineedit->text().toDouble())) * isp * 9.81;
        ui->basicdvresultlineedit->setText(QString::number(basicunderlying));
    }
    else if((ui->basicdeltavcombo->currentText()) == "Mainsail(vac)"){
        isp = 310;
        basicunderlying = log ((ui->mstartlineedit->text().toDouble())/(ui->mendlineedit->text().toDouble())) * isp * 9.81;
        ui->basicdvresultlineedit->setText(QString::number(basicunderlying));
    }
    else if((ui->basicdeltavcombo->currentText()) == "LFB KR-1x2(atm)"){
        isp = 280;
        basicunderlying = log ((ui->mstartlineedit->text().toDouble())/(ui->mendlineedit->text().toDouble())) * isp * 9.81;
        ui->basicdvresultlineedit->setText(QString::number(basicunderlying));
    }
    else if((ui->basicdeltavcombo->currentText()) == "LFB KR-1x2(vac)"){
        isp = 300;
        basicunderlying = log ((ui->mstartlineedit->text().toDouble())/(ui->mendlineedit->text().toDouble())) * isp * 9.81;
        ui->basicdvresultlineedit->setText(QString::number(basicunderlying));
    }
    else if((ui->basicdeltavcombo->currentText()) == "KR-2L+(atm)"){
        isp = 255;
        basicunderlying = log ((ui->mstartlineedit->text().toDouble())/(ui->mendlineedit->text().toDouble())) * isp * 9.81;
        ui->basicdvresultlineedit->setText(QString::number(basicunderlying));
    }
    else if((ui->basicdeltavcombo->currentText()) == "KR-2L+(vac)"){
        isp = 340;
        basicunderlying = log ((ui->mstartlineedit->text().toDouble())/(ui->mendlineedit->text().toDouble())) * isp * 9.81;
        ui->basicdvresultlineedit->setText(QString::number(basicunderlying));
    }
    else if((ui->basicdeltavcombo->currentText()) == "S3 KS-25x4(atm)"){
        isp = 295;
        basicunderlying = log ((ui->mstartlineedit->text().toDouble())/(ui->mendlineedit->text().toDouble())) * isp * 9.81;
        ui->basicdvresultlineedit->setText(QString::number(basicunderlying));
    }
    else if((ui->basicdeltavcombo->currentText()) == "S3 KS-25x4(vac)"){
        isp = 315;
        basicunderlying = log ((ui->mstartlineedit->text().toDouble())/(ui->mendlineedit->text().toDouble())) * isp * 9.81;
        ui->basicdvresultlineedit->setText(QString::number(basicunderlying));
    }
    else if((ui->basicdeltavcombo->currentText()) == "J-33 Basic Jet"){
        isp = 9600;
        basicunderlying = log ((ui->mstartlineedit->text().toDouble())/(ui->mendlineedit->text().toDouble())) * isp * 9.81;
        ui->basicdvresultlineedit->setText(QString::number(basicunderlying));
    }
    else if((ui->basicdeltavcombo->currentText()) == "J-X4 Turbo Ramjet"){
        isp = 4000;
        basicunderlying = log ((ui->mstartlineedit->text().toDouble())/(ui->mendlineedit->text().toDouble())) * isp * 9.81;
        ui->basicdvresultlineedit->setText(QString::number(basicunderlying));
    }
    else if((ui->basicdeltavcombo->currentText()) == "CR-7 Jet"){
        isp = 3200;
        basicunderlying = log ((ui->mstartlineedit->text().toDouble())/(ui->mendlineedit->text().toDouble())) * isp * 9.81;
        ui->basicdvresultlineedit->setText(QString::number(basicunderlying));
    }
    else if((ui->basicdeltavcombo->currentText()) == "RT-5(atm)"){
        isp = 140;
        basicunderlying = log ((ui->mstartlineedit->text().toDouble())/(ui->mendlineedit->text().toDouble())) * isp * 9.81;
        ui->basicdvresultlineedit->setText(QString::number(basicunderlying));
    }
    else if((ui->basicdeltavcombo->currentText()) == "RT-5(vac)"){
        isp = 165;
        basicunderlying = log ((ui->mstartlineedit->text().toDouble())/(ui->mendlineedit->text().toDouble())) * isp * 9.81;
        ui->basicdvresultlineedit->setText(QString::number(basicunderlying));
    }
    else if((ui->basicdeltavcombo->currentText()) == "RT-10(atm)"){
        isp = 170;
        basicunderlying = log ((ui->mstartlineedit->text().toDouble())/(ui->mendlineedit->text().toDouble())) * isp * 9.81;
        ui->basicdvresultlineedit->setText(QString::number(basicunderlying));
    }
    else if((ui->basicdeltavcombo->currentText()) == "RT-10(vac)"){
        isp = 195;
        basicunderlying = log ((ui->mstartlineedit->text().toDouble())/(ui->mendlineedit->text().toDouble())) * isp * 9.81;
        ui->basicdvresultlineedit->setText(QString::number(basicunderlying));
    }
    else if((ui->basicdeltavcombo->currentText()) == "BACC(atm)"){
        isp = 175;
        basicunderlying = log ((ui->mstartlineedit->text().toDouble())/(ui->mendlineedit->text().toDouble())) * isp * 9.81;
        ui->basicdvresultlineedit->setText(QString::number(basicunderlying));
    }
    else if((ui->basicdeltavcombo->currentText()) == "BACC(vac)"){
        isp = 210;
        basicunderlying = log ((ui->mstartlineedit->text().toDouble())/(ui->mendlineedit->text().toDouble())) * isp * 9.81;
        ui->basicdvresultlineedit->setText(QString::number(basicunderlying));
    }
    else if((ui->basicdeltavcombo->currentText()) == "S1 SRB-KD25k(atm)"){
        isp = 195;
        basicunderlying = log ((ui->mstartlineedit->text().toDouble())/(ui->mendlineedit->text().toDouble())) * isp * 9.81;
        ui->basicdvresultlineedit->setText(QString::number(basicunderlying));
    }
    else if((ui->basicdeltavcombo->currentText()) == "S1 SRB-KD25k(vac)"){
        isp = 220;
        basicunderlying = log ((ui->mstartlineedit->text().toDouble())/(ui->mendlineedit->text().toDouble())) * isp * 9.81;
        ui->basicdvresultlineedit->setText(QString::number(basicunderlying));
    }
    else if((ui->basicdeltavcombo->currentText()) == "Sepratron I(atm)"){
        isp = 118;
        basicunderlying = log ((ui->mstartlineedit->text().toDouble())/(ui->mendlineedit->text().toDouble())) * isp * 9.81;
        ui->basicdvresultlineedit->setText(QString::number(basicunderlying));
    }
    else if((ui->basicdeltavcombo->currentText()) == "Sepratron I(vac)"){
        isp = 154;
        basicunderlying = log ((ui->mstartlineedit->text().toDouble())/(ui->mendlineedit->text().toDouble())) * isp * 9.81;
        ui->basicdvresultlineedit->setText(QString::number(basicunderlying));
    }
    else if((ui->basicdeltavcombo->currentText()) == "PB-ION(atm)"){
        isp = 100;
        basicunderlying = log ((ui->mstartlineedit->text().toDouble())/(ui->mendlineedit->text().toDouble())) * isp * 9.81;
        ui->basicdvresultlineedit->setText(QString::number(basicunderlying));
    }
    else if((ui->basicdeltavcombo->currentText()) == "PB-ION(vac)"){
        isp = 4200;
        basicunderlying = log ((ui->mstartlineedit->text().toDouble())/(ui->mendlineedit->text().toDouble())) * isp * 9.81;
        ui->basicdvresultlineedit->setText(QString::number(basicunderlying));
    }
    else if((ui->basicdeltavcombo->currentText()) == "RV-105(atm)"){
        isp = 100;
        basicunderlying = log ((ui->mstartlineedit->text().toDouble())/(ui->mendlineedit->text().toDouble())) * isp * 9.81;
        ui->basicdvresultlineedit->setText(QString::number(basicunderlying));
    }
    else if((ui->basicdeltavcombo->currentText()) == "RV-105(vac)"){
        isp = 240;
        basicunderlying = log ((ui->mstartlineedit->text().toDouble())/(ui->mendlineedit->text().toDouble())) * isp * 9.81;
        ui->basicdvresultlineedit->setText(QString::number(basicunderlying));
    }
    else if((ui->basicdeltavcombo->currentText()) == "Place-Anywhere 7(atm)"){
        isp = 100;
        basicunderlying = log ((ui->mstartlineedit->text().toDouble())/(ui->mendlineedit->text().toDouble())) * isp * 9.81;
        ui->basicdvresultlineedit->setText(QString::number(basicunderlying));
    }
    else if((ui->basicdeltavcombo->currentText()) == "Place-Anywhere 7(vac)"){
        isp = 240;
        basicunderlying = log ((ui->mstartlineedit->text().toDouble())/(ui->mendlineedit->text().toDouble())) * isp * 9.81;
        ui->basicdvresultlineedit->setText(QString::number(basicunderlying));
    }
    else if((ui->basicdeltavcombo->currentText()) == "Vernor Engine(atm)"){
        isp = 140;
        basicunderlying = log ((ui->mstartlineedit->text().toDouble())/(ui->mendlineedit->text().toDouble())) * isp * 9.81;
        ui->basicdvresultlineedit->setText(QString::number(basicunderlying));
    }
    else if((ui->basicdeltavcombo->currentText()) == "Vernor Engine(vac)"){
        isp = 260;
        basicunderlying = log ((ui->mstartlineedit->text().toDouble())/(ui->mendlineedit->text().toDouble())) * isp * 9.81;
        ui->basicdvresultlineedit->setText(QString::number(basicunderlying));
    }
    else {
        ui->basicdvresultlineedit->setText("How the fuck did this happen?");
    }
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
    double twr;
    double gconstant;
    switch (ui->twrbodycombo->currentIndex()) {
    case 0:
        ui->twrresultlineedit->setText("Orbital Body Not Chosen!");
        break;
    case 1:
        gconstant = 17.1;
        if ((ui->twrcombo->currentText()).isEmpty()){
            ui->twrresultlineedit->setText("Engine not chosen!");
        }
        else if((ui->twrcombo->currentText()) == "LV-1R(atm)"){
            twr = 1.793;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-1R(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "24-77(atm)"){
            twr = 13.793;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "24-77(vac)"){
            twr = 16.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mk-55(atm)"){
            twr = 108.2;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mk-55(vac)"){
            twr = 120.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "O-10(atm)"){
            twr = 9.6;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "O-10(vac)"){
            twr = 20.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-1(atm)"){
            twr = 0.51;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-1(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "48-7S(atm)"){
            twr = 16.2;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "48-7S(vac)"){
            twr = 18.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-909(atm)"){
            twr = 14.783;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-909(vac)"){
            twr = 60.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T30(atm)"){
            twr = 200.67;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T30(vac)"){
            twr = 215.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T45(atm)"){
            twr = 168.75;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T45(vac)"){
            twr = 200.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "CR-7(atm)"){
            twr = 162.3;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "CR-7(vac)"){
            twr = 180.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "T-1(atm)"){
            twr = 153.53;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "T-1(vac)"){
            twr = 180;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-N(atm)"){
            twr = 13.875;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LLV-N(vac)"){
            twr = 60.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Poodle(atm)"){
            twr = 64.29;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Poodle(vac)"){
            twr = 250.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Skipper(atm)"){
            twr = 568.75;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Skipper(vac)"){
            twr = 650.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mainsail(atm)"){
            twr = 1379.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mainsail(vac)"){
            twr = 1500;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LFB KR-1x2(atm)"){
            twr = 1866.7;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LFB KR-1x2(vac)"){
            twr = 2000.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "KR-2L+(atm)"){
            twr = 1500.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "KR-2L+(vac)"){
            twr = 2000.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S3 KS-25x4(atm)"){
            twr = 3746.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S3 KS-25x4(vac)"){
            twr = 4000.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "J-33 Basic Jet"){
            twr = 80.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "J-X4 Turbo Ramjet"){
            twr = 130.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "CR-7 Jet"){
            twr = 105.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-5(atm)"){
            twr = 162.91;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-5(vac)"){
            twr = 192.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-10(atm)"){
            twr = 197.90;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-10(vac)"){
            twr = 227.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "BACC(atm)"){
            twr = 250.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "BACC(vac)"){
            twr = 300.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S1 SRB-KD25k(atm)"){
            twr = 593.86;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S1 SRB-KD25k(vac)"){
            twr = 670.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Sepratron I(atm)"){
            twr = 13.792;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Sepratron I(vac)"){
            twr = 18.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "PB-ION(atm)"){
            twr = 0.019;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "PB-ION(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RV-105(atm)"){
            twr = 1.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RV-105(vac)"){
            twr = 1.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Place-Anywhere 7(atm)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Place-Anywhere 7(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Vernor Engine(atm)"){
            twr = 12.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Vernor Engine(vac)"){
            twr = 12.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/(ui->twrmasslineedit->text().toDouble())*gconstant;
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else {
            ui->twrresultlineedit->setText("How the fuck did this happen?");
        }
        break;
    case 2:
        gconstant = 2.7;
        if ((ui->twrcombo->currentText()).isEmpty()){
            ui->twrresultlineedit->setText("Engine not chosen!");
        }
        else if((ui->twrcombo->currentText()) == "LV-1R(atm)"){
            twr = 1.793;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-1R(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "24-77(atm)"){
            twr = 13.793;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "24-77(vac)"){
            twr = 16.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mk-55(atm)"){
            twr = 108.2;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mk-55(vac)"){
            twr = 120.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "O-10(atm)"){
            twr = 9.6;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "O-10(vac)"){
            twr = 20.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-1(atm)"){
            twr = 0.51;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-1(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "48-7S(atm)"){
            twr = 16.2;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "48-7S(vac)"){
            twr = 18.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-909(atm)"){
            twr = 14.783;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-909(vac)"){
            twr = 60.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T30(atm)"){
            twr = 200.67;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T30(vac)"){
            twr = 215.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T45(atm)"){
            twr = 168.75;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T45(vac)"){
            twr = 200.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "CR-7(atm)"){
            twr = 162.3;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "CR-7(vac)"){
            twr = 180.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "T-1(atm)"){
            twr = 153.53;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "T-1(vac)"){
            twr = 180;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-N(atm)"){
            twr = 13.875;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LLV-N(vac)"){
            twr = 60.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Poodle(atm)"){
            twr = 64.29;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Poodle(vac)"){
            twr = 250.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Skipper(atm)"){
            twr = 568.75;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Skipper(vac)"){
            twr = 650.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mainsail(atm)"){
            twr = 1379.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mainsail(vac)"){
            twr = 1500;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LFB KR-1x2(atm)"){
            twr = 1866.7;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LFB KR-1x2(vac)"){
            twr = 2000.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "KR-2L+(atm)"){
            twr = 1500.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "KR-2L+(vac)"){
            twr = 2000.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S3 KS-25x4(atm)"){
            twr = 3746.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S3 KS-25x4(vac)"){
            twr = 4000.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "J-33 Basic Jet"){
            twr = 80.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "J-X4 Turbo Ramjet"){
            twr = 130.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "CR-7 Jet"){
            twr = 105.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-5(atm)"){
            twr = 162.91;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-5(vac)"){
            twr = 192.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-10(atm)"){
            twr = 197.90;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-10(vac)"){
            twr = 227.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "BACC(atm)"){
            twr = 250.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "BACC(vac)"){
            twr = 300.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S1 SRB-KD25k(atm)"){
            twr = 593.86;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S1 SRB-KD25k(vac)"){
            twr = 670.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Sepratron I(atm)"){
            twr = 13.792;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Sepratron I(vac)"){
            twr = 18.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "PB-ION(atm)"){
            twr = 0.019;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "PB-ION(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RV-105(atm)"){
            twr = 1.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RV-105(vac)"){
            twr = 1.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Place-Anywhere 7(atm)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Place-Anywhere 7(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Vernor Engine(atm)"){
            twr = 12.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Vernor Engine(vac)"){
            twr = 12.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/(ui->twrmasslineedit->text().toDouble())*gconstant;
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else {
            ui->twrresultlineedit->setText("How the fuck did this happen?");
        }
        break;
    case 3:
        gconstant = 16.7;
        if ((ui->twrcombo->currentText()).isEmpty()){
            ui->twrresultlineedit->setText("Engine not chosen!");
        }
        else if((ui->twrcombo->currentText()) == "LV-1R(atm)"){
            twr = 1.793;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-1R(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "24-77(atm)"){
            twr = 13.793;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "24-77(vac)"){
            twr = 16.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mk-55(atm)"){
            twr = 108.2;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mk-55(vac)"){
            twr = 120.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "O-10(atm)"){
            twr = 9.6;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "O-10(vac)"){
            twr = 20.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-1(atm)"){
            twr = 0.51;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-1(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "48-7S(atm)"){
            twr = 16.2;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "48-7S(vac)"){
            twr = 18.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-909(atm)"){
            twr = 14.783;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-909(vac)"){
            twr = 60.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T30(atm)"){
            twr = 200.67;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T30(vac)"){
            twr = 215.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T45(atm)"){
            twr = 168.75;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T45(vac)"){
            twr = 200.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "CR-7(atm)"){
            twr = 162.3;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "CR-7(vac)"){
            twr = 180.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "T-1(atm)"){
            twr = 153.53;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "T-1(vac)"){
            twr = 180;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-N(atm)"){
            twr = 13.875;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LLV-N(vac)"){
            twr = 60.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Poodle(atm)"){
            twr = 64.29;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Poodle(vac)"){
            twr = 250.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Skipper(atm)"){
            twr = 568.75;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Skipper(vac)"){
            twr = 650.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mainsail(atm)"){
            twr = 1379.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mainsail(vac)"){
            twr = 1500;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LFB KR-1x2(atm)"){
            twr = 1866.7;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LFB KR-1x2(vac)"){
            twr = 2000.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "KR-2L+(atm)"){
            twr = 1500.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "KR-2L+(vac)"){
            twr = 2000.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S3 KS-25x4(atm)"){
            twr = 3746.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S3 KS-25x4(vac)"){
            twr = 4000.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "J-33 Basic Jet"){
            twr = 80.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "J-X4 Turbo Ramjet"){
            twr = 130.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "CR-7 Jet"){
            twr = 105.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-5(atm)"){
            twr = 162.91;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-5(vac)"){
            twr = 192.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-10(atm)"){
            twr = 197.90;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-10(vac)"){
            twr = 227.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "BACC(atm)"){
            twr = 250.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "BACC(vac)"){
            twr = 300.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S1 SRB-KD25k(atm)"){
            twr = 593.86;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S1 SRB-KD25k(vac)"){
            twr = 670.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Sepratron I(atm)"){
            twr = 13.792;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Sepratron I(vac)"){
            twr = 18.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "PB-ION(atm)"){
            twr = 0.019;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "PB-ION(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RV-105(atm)"){
            twr = 1.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RV-105(vac)"){
            twr = 1.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Place-Anywhere 7(atm)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Place-Anywhere 7(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Vernor Engine(atm)"){
            twr = 12.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Vernor Engine(vac)"){
            twr = 12.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/(ui->twrmasslineedit->text().toDouble())*gconstant;
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else {
            ui->twrresultlineedit->setText("How the fuck did this happen?");
        }
        break;
    case 4:
        gconstant = 0.049;
        if ((ui->twrcombo->currentText()).isEmpty()){
            ui->twrresultlineedit->setText("Engine not chosen!");
        }
        else if((ui->twrcombo->currentText()) == "LV-1R(atm)"){
            twr = 1.793;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-1R(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "24-77(atm)"){
            twr = 13.793;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "24-77(vac)"){
            twr = 16.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mk-55(atm)"){
            twr = 108.2;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mk-55(vac)"){
            twr = 120.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "O-10(atm)"){
            twr = 9.6;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "O-10(vac)"){
            twr = 20.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-1(atm)"){
            twr = 0.51;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-1(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "48-7S(atm)"){
            twr = 16.2;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "48-7S(vac)"){
            twr = 18.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-909(atm)"){
            twr = 14.783;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-909(vac)"){
            twr = 60.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T30(atm)"){
            twr = 200.67;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T30(vac)"){
            twr = 215.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T45(atm)"){
            twr = 168.75;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T45(vac)"){
            twr = 200.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "CR-7(atm)"){
            twr = 162.3;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "CR-7(vac)"){
            twr = 180.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "T-1(atm)"){
            twr = 153.53;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "T-1(vac)"){
            twr = 180;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-N(atm)"){
            twr = 13.875;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LLV-N(vac)"){
            twr = 60.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Poodle(atm)"){
            twr = 64.29;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Poodle(vac)"){
            twr = 250.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Skipper(atm)"){
            twr = 568.75;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Skipper(vac)"){
            twr = 650.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mainsail(atm)"){
            twr = 1379.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mainsail(vac)"){
            twr = 1500;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LFB KR-1x2(atm)"){
            twr = 1866.7;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LFB KR-1x2(vac)"){
            twr = 2000.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "KR-2L+(atm)"){
            twr = 1500.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "KR-2L+(vac)"){
            twr = 2000.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S3 KS-25x4(atm)"){
            twr = 3746.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S3 KS-25x4(vac)"){
            twr = 4000.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "J-33 Basic Jet"){
            twr = 80.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "J-X4 Turbo Ramjet"){
            twr = 130.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "CR-7 Jet"){
            twr = 105.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-5(atm)"){
            twr = 162.91;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-5(vac)"){
            twr = 192.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-10(atm)"){
            twr = 197.90;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-10(vac)"){
            twr = 227.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "BACC(atm)"){
            twr = 250.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "BACC(vac)"){
            twr = 300.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S1 SRB-KD25k(atm)"){
            twr = 593.86;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S1 SRB-KD25k(vac)"){
            twr = 670.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Sepratron I(atm)"){
            twr = 13.792;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Sepratron I(vac)"){
            twr = 18.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "PB-ION(atm)"){
            twr = 0.019;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "PB-ION(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RV-105(atm)"){
            twr = 1.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RV-105(vac)"){
            twr = 1.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Place-Anywhere 7(atm)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Place-Anywhere 7(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Vernor Engine(atm)"){
            twr = 12.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Vernor Engine(vac)"){
            twr = 12.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/(ui->twrmasslineedit->text().toDouble())*gconstant;
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else {
            ui->twrresultlineedit->setText("How the fuck did this happen?");
        }
        break;
    case 5:
        gconstant = 9.81;
        if ((ui->twrcombo->currentText()).isEmpty()){
            ui->twrresultlineedit->setText("Engine not chosen!");
        }
        else if((ui->twrcombo->currentText()) == "LV-1R(atm)"){
            twr = 1.793;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-1R(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "24-77(atm)"){
            twr = 13.793;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "24-77(vac)"){
            twr = 16.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mk-55(atm)"){
            twr = 108.2;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mk-55(vac)"){
            twr = 120.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "O-10(atm)"){
            twr = 9.6;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "O-10(vac)"){
            twr = 20.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-1(atm)"){
            twr = 0.51;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-1(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "48-7S(atm)"){
            twr = 16.2;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "48-7S(vac)"){
            twr = 18.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-909(atm)"){
            twr = 14.783;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-909(vac)"){
            twr = 60.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T30(atm)"){
            twr = 200.67;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T30(vac)"){
            twr = 215.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T45(atm)"){
            twr = 168.75;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T45(vac)"){
            twr = 200.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "CR-7(atm)"){
            twr = 162.3;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "CR-7(vac)"){
            twr = 180.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "T-1(atm)"){
            twr = 153.53;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "T-1(vac)"){
            twr = 180;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-N(atm)"){
            twr = 13.875;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LLV-N(vac)"){
            twr = 60.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Poodle(atm)"){
            twr = 64.29;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Poodle(vac)"){
            twr = 250.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Skipper(atm)"){
            twr = 568.75;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Skipper(vac)"){
            twr = 650.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mainsail(atm)"){
            twr = 1379.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mainsail(vac)"){
            twr = 1500;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LFB KR-1x2(atm)"){
            twr = 1866.7;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LFB KR-1x2(vac)"){
            twr = 2000.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "KR-2L+(atm)"){
            twr = 1500.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "KR-2L+(vac)"){
            twr = 2000.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S3 KS-25x4(atm)"){
            twr = 3746.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S3 KS-25x4(vac)"){
            twr = 4000.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "J-33 Basic Jet"){
            twr = 80.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "J-X4 Turbo Ramjet"){
            twr = 130.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "CR-7 Jet"){
            twr = 105.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-5(atm)"){
            twr = 162.91;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-5(vac)"){
            twr = 192.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-10(atm)"){
            twr = 197.90;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-10(vac)"){
            twr = 227.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "BACC(atm)"){
            twr = 250.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "BACC(vac)"){
            twr = 300.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S1 SRB-KD25k(atm)"){
            twr = 593.86;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S1 SRB-KD25k(vac)"){
            twr = 670.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Sepratron I(atm)"){
            twr = 13.792;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Sepratron I(vac)"){
            twr = 18.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "PB-ION(atm)"){
            twr = 0.019;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "PB-ION(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RV-105(atm)"){
            twr = 1.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RV-105(vac)"){
            twr = 1.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Place-Anywhere 7(atm)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Place-Anywhere 7(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Vernor Engine(atm)"){
            twr = 12.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Vernor Engine(vac)"){
            twr = 12.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/(ui->twrmasslineedit->text().toDouble())*gconstant;
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else {
            ui->twrresultlineedit->setText("How the fuck did this happen?");
        }
        break;
    case 6:
        gconstant = 1.63;
        if ((ui->twrcombo->currentText()).isEmpty()){
            ui->twrresultlineedit->setText("Engine not chosen!");
        }
        else if((ui->twrcombo->currentText()) == "LV-1R(atm)"){
            twr = 1.793;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-1R(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "24-77(atm)"){
            twr = 13.793;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "24-77(vac)"){
            twr = 16.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mk-55(atm)"){
            twr = 108.2;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mk-55(vac)"){
            twr = 120.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "O-10(atm)"){
            twr = 9.6;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "O-10(vac)"){
            twr = 20.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-1(atm)"){
            twr = 0.51;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-1(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "48-7S(atm)"){
            twr = 16.2;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "48-7S(vac)"){
            twr = 18.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-909(atm)"){
            twr = 14.783;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-909(vac)"){
            twr = 60.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T30(atm)"){
            twr = 200.67;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T30(vac)"){
            twr = 215.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T45(atm)"){
            twr = 168.75;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T45(vac)"){
            twr = 200.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "CR-7(atm)"){
            twr = 162.3;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "CR-7(vac)"){
            twr = 180.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "T-1(atm)"){
            twr = 153.53;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "T-1(vac)"){
            twr = 180;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-N(atm)"){
            twr = 13.875;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LLV-N(vac)"){
            twr = 60.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Poodle(atm)"){
            twr = 64.29;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Poodle(vac)"){
            twr = 250.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Skipper(atm)"){
            twr = 568.75;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Skipper(vac)"){
            twr = 650.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mainsail(atm)"){
            twr = 1379.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mainsail(vac)"){
            twr = 1500;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LFB KR-1x2(atm)"){
            twr = 1866.7;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LFB KR-1x2(vac)"){
            twr = 2000.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "KR-2L+(atm)"){
            twr = 1500.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "KR-2L+(vac)"){
            twr = 2000.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S3 KS-25x4(atm)"){
            twr = 3746.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S3 KS-25x4(vac)"){
            twr = 4000.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "J-33 Basic Jet"){
            twr = 80.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "J-X4 Turbo Ramjet"){
            twr = 130.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "CR-7 Jet"){
            twr = 105.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-5(atm)"){
            twr = 162.91;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-5(vac)"){
            twr = 192.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-10(atm)"){
            twr = 197.90;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-10(vac)"){
            twr = 227.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "BACC(atm)"){
            twr = 250.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "BACC(vac)"){
            twr = 300.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S1 SRB-KD25k(atm)"){
            twr = 593.86;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S1 SRB-KD25k(vac)"){
            twr = 670.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Sepratron I(atm)"){
            twr = 13.792;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Sepratron I(vac)"){
            twr = 18.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "PB-ION(atm)"){
            twr = 0.019;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "PB-ION(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RV-105(atm)"){
            twr = 1.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RV-105(vac)"){
            twr = 1.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Place-Anywhere 7(atm)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Place-Anywhere 7(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Vernor Engine(atm)"){
            twr = 12.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Vernor Engine(vac)"){
            twr = 12.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/(ui->twrmasslineedit->text().toDouble())*gconstant;
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else {
            ui->twrresultlineedit->setText("How the fuck did this happen?");
        }
        break;
    case 7:
        gconstant = 0.491;
        if ((ui->twrcombo->currentText()).isEmpty()){
            ui->twrresultlineedit->setText("Engine not chosen!");
        }
        else if((ui->twrcombo->currentText()) == "LV-1R(atm)"){
            twr = 1.793;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-1R(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "24-77(atm)"){
            twr = 13.793;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "24-77(vac)"){
            twr = 16.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mk-55(atm)"){
            twr = 108.2;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mk-55(vac)"){
            twr = 120.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "O-10(atm)"){
            twr = 9.6;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "O-10(vac)"){
            twr = 20.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-1(atm)"){
            twr = 0.51;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-1(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "48-7S(atm)"){
            twr = 16.2;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "48-7S(vac)"){
            twr = 18.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-909(atm)"){
            twr = 14.783;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-909(vac)"){
            twr = 60.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T30(atm)"){
            twr = 200.67;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T30(vac)"){
            twr = 215.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T45(atm)"){
            twr = 168.75;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T45(vac)"){
            twr = 200.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "CR-7(atm)"){
            twr = 162.3;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "CR-7(vac)"){
            twr = 180.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "T-1(atm)"){
            twr = 153.53;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "T-1(vac)"){
            twr = 180;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-N(atm)"){
            twr = 13.875;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LLV-N(vac)"){
            twr = 60.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Poodle(atm)"){
            twr = 64.29;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Poodle(vac)"){
            twr = 250.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Skipper(atm)"){
            twr = 568.75;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Skipper(vac)"){
            twr = 650.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mainsail(atm)"){
            twr = 1379.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mainsail(vac)"){
            twr = 1500;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LFB KR-1x2(atm)"){
            twr = 1866.7;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LFB KR-1x2(vac)"){
            twr = 2000.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "KR-2L+(atm)"){
            twr = 1500.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "KR-2L+(vac)"){
            twr = 2000.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S3 KS-25x4(atm)"){
            twr = 3746.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S3 KS-25x4(vac)"){
            twr = 4000.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "J-33 Basic Jet"){
            twr = 80.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "J-X4 Turbo Ramjet"){
            twr = 130.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "CR-7 Jet"){
            twr = 105.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-5(atm)"){
            twr = 162.91;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-5(vac)"){
            twr = 192.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-10(atm)"){
            twr = 197.90;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-10(vac)"){
            twr = 227.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "BACC(atm)"){
            twr = 250.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "BACC(vac)"){
            twr = 300.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S1 SRB-KD25k(atm)"){
            twr = 593.86;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S1 SRB-KD25k(vac)"){
            twr = 670.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Sepratron I(atm)"){
            twr = 13.792;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Sepratron I(vac)"){
            twr = 18.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "PB-ION(atm)"){
            twr = 0.019;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "PB-ION(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RV-105(atm)"){
            twr = 1.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RV-105(vac)"){
            twr = 1.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Place-Anywhere 7(atm)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Place-Anywhere 7(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Vernor Engine(atm)"){
            twr = 12.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Vernor Engine(vac)"){
            twr = 12.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/(ui->twrmasslineedit->text().toDouble())*gconstant;
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else {
            ui->twrresultlineedit->setText("How the fuck did this happen?");
        }
        break;
    case 8:
        gconstant = 2.94;
        if ((ui->twrcombo->currentText()).isEmpty()){
            ui->twrresultlineedit->setText("Engine not chosen!");
        }
        else if((ui->twrcombo->currentText()) == "LV-1R(atm)"){
            twr = 1.793;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-1R(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "24-77(atm)"){
            twr = 13.793;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "24-77(vac)"){
            twr = 16.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mk-55(atm)"){
            twr = 108.2;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mk-55(vac)"){
            twr = 120.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "O-10(atm)"){
            twr = 9.6;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "O-10(vac)"){
            twr = 20.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-1(atm)"){
            twr = 0.51;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-1(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "48-7S(atm)"){
            twr = 16.2;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "48-7S(vac)"){
            twr = 18.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-909(atm)"){
            twr = 14.783;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-909(vac)"){
            twr = 60.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T30(atm)"){
            twr = 200.67;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T30(vac)"){
            twr = 215.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T45(atm)"){
            twr = 168.75;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T45(vac)"){
            twr = 200.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "CR-7(atm)"){
            twr = 162.3;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "CR-7(vac)"){
            twr = 180.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "T-1(atm)"){
            twr = 153.53;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "T-1(vac)"){
            twr = 180;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-N(atm)"){
            twr = 13.875;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LLV-N(vac)"){
            twr = 60.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Poodle(atm)"){
            twr = 64.29;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Poodle(vac)"){
            twr = 250.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Skipper(atm)"){
            twr = 568.75;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Skipper(vac)"){
            twr = 650.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mainsail(atm)"){
            twr = 1379.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mainsail(vac)"){
            twr = 1500;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LFB KR-1x2(atm)"){
            twr = 1866.7;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LFB KR-1x2(vac)"){
            twr = 2000.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "KR-2L+(atm)"){
            twr = 1500.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "KR-2L+(vac)"){
            twr = 2000.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S3 KS-25x4(atm)"){
            twr = 3746.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S3 KS-25x4(vac)"){
            twr = 4000.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "J-33 Basic Jet"){
            twr = 80.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "J-X4 Turbo Ramjet"){
            twr = 130.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "CR-7 Jet"){
            twr = 105.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-5(atm)"){
            twr = 162.91;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-5(vac)"){
            twr = 192.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-10(atm)"){
            twr = 197.90;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-10(vac)"){
            twr = 227.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "BACC(atm)"){
            twr = 250.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "BACC(vac)"){
            twr = 300.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S1 SRB-KD25k(atm)"){
            twr = 593.86;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S1 SRB-KD25k(vac)"){
            twr = 670.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Sepratron I(atm)"){
            twr = 13.792;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Sepratron I(vac)"){
            twr = 18.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "PB-ION(atm)"){
            twr = 0.019;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "PB-ION(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RV-105(atm)"){
            twr = 1.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RV-105(vac)"){
            twr = 1.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Place-Anywhere 7(atm)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Place-Anywhere 7(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Vernor Engine(atm)"){
            twr = 12.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Vernor Engine(vac)"){
            twr = 12.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/(ui->twrmasslineedit->text().toDouble())*gconstant;
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else {
            ui->twrresultlineedit->setText("How the fuck did this happen?");
        }
        break;
    case 9:
        gconstant = 1.1;
        if ((ui->twrcombo->currentText()).isEmpty()){
            ui->twrresultlineedit->setText("Engine not chosen!");
        }
        else if((ui->twrcombo->currentText()) == "LV-1R(atm)"){
            twr = 1.793;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-1R(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "24-77(atm)"){
            twr = 13.793;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "24-77(vac)"){
            twr = 16.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mk-55(atm)"){
            twr = 108.2;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mk-55(vac)"){
            twr = 120.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "O-10(atm)"){
            twr = 9.6;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "O-10(vac)"){
            twr = 20.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-1(atm)"){
            twr = 0.51;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-1(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "48-7S(atm)"){
            twr = 16.2;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "48-7S(vac)"){
            twr = 18.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-909(atm)"){
            twr = 14.783;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-909(vac)"){
            twr = 60.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T30(atm)"){
            twr = 200.67;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T30(vac)"){
            twr = 215.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T45(atm)"){
            twr = 168.75;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T45(vac)"){
            twr = 200.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "CR-7(atm)"){
            twr = 162.3;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "CR-7(vac)"){
            twr = 180.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "T-1(atm)"){
            twr = 153.53;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "T-1(vac)"){
            twr = 180;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-N(atm)"){
            twr = 13.875;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LLV-N(vac)"){
            twr = 60.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Poodle(atm)"){
            twr = 64.29;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Poodle(vac)"){
            twr = 250.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Skipper(atm)"){
            twr = 568.75;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Skipper(vac)"){
            twr = 650.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mainsail(atm)"){
            twr = 1379.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mainsail(vac)"){
            twr = 1500;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LFB KR-1x2(atm)"){
            twr = 1866.7;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LFB KR-1x2(vac)"){
            twr = 2000.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "KR-2L+(atm)"){
            twr = 1500.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "KR-2L+(vac)"){
            twr = 2000.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S3 KS-25x4(atm)"){
            twr = 3746.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S3 KS-25x4(vac)"){
            twr = 4000.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "J-33 Basic Jet"){
            twr = 80.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "J-X4 Turbo Ramjet"){
            twr = 130.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "CR-7 Jet"){
            twr = 105.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-5(atm)"){
            twr = 162.91;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-5(vac)"){
            twr = 192.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-10(atm)"){
            twr = 197.90;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-10(vac)"){
            twr = 227.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "BACC(atm)"){
            twr = 250.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "BACC(vac)"){
            twr = 300.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S1 SRB-KD25k(atm)"){
            twr = 593.86;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S1 SRB-KD25k(vac)"){
            twr = 670.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Sepratron I(atm)"){
            twr = 13.792;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Sepratron I(vac)"){
            twr = 18.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "PB-ION(atm)"){
            twr = 0.019;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "PB-ION(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RV-105(atm)"){
            twr = 1.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RV-105(vac)"){
            twr = 1.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Place-Anywhere 7(atm)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Place-Anywhere 7(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Vernor Engine(atm)"){
            twr = 12.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Vernor Engine(vac)"){
            twr = 12.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/(ui->twrmasslineedit->text().toDouble())*gconstant;
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else {
            ui->twrresultlineedit->setText("How the fuck did this happen?");
        }
        break;
    case 10:
        gconstant = 1.13;
        if ((ui->twrcombo->currentText()).isEmpty()){
            ui->twrresultlineedit->setText("Engine not chosen!");
        }
        else if((ui->twrcombo->currentText()) == "LV-1R(atm)"){
            twr = 1.793;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-1R(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "24-77(atm)"){
            twr = 13.793;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "24-77(vac)"){
            twr = 16.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mk-55(atm)"){
            twr = 108.2;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mk-55(vac)"){
            twr = 120.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "O-10(atm)"){
            twr = 9.6;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "O-10(vac)"){
            twr = 20.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-1(atm)"){
            twr = 0.51;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-1(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "48-7S(atm)"){
            twr = 16.2;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "48-7S(vac)"){
            twr = 18.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-909(atm)"){
            twr = 14.783;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-909(vac)"){
            twr = 60.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T30(atm)"){
            twr = 200.67;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T30(vac)"){
            twr = 215.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T45(atm)"){
            twr = 168.75;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T45(vac)"){
            twr = 200.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "CR-7(atm)"){
            twr = 162.3;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "CR-7(vac)"){
            twr = 180.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "T-1(atm)"){
            twr = 153.53;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "T-1(vac)"){
            twr = 180;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-N(atm)"){
            twr = 13.875;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LLV-N(vac)"){
            twr = 60.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Poodle(atm)"){
            twr = 64.29;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Poodle(vac)"){
            twr = 250.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Skipper(atm)"){
            twr = 568.75;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Skipper(vac)"){
            twr = 650.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mainsail(atm)"){
            twr = 1379.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mainsail(vac)"){
            twr = 1500;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LFB KR-1x2(atm)"){
            twr = 1866.7;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LFB KR-1x2(vac)"){
            twr = 2000.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "KR-2L+(atm)"){
            twr = 1500.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "KR-2L+(vac)"){
            twr = 2000.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S3 KS-25x4(atm)"){
            twr = 3746.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S3 KS-25x4(vac)"){
            twr = 4000.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "J-33 Basic Jet"){
            twr = 80.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "J-X4 Turbo Ramjet"){
            twr = 130.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "CR-7 Jet"){
            twr = 105.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-5(atm)"){
            twr = 162.91;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-5(vac)"){
            twr = 192.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-10(atm)"){
            twr = 197.90;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-10(vac)"){
            twr = 227.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "BACC(atm)"){
            twr = 250.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "BACC(vac)"){
            twr = 300.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S1 SRB-KD25k(atm)"){
            twr = 593.86;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S1 SRB-KD25k(vac)"){
            twr = 670.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Sepratron I(atm)"){
            twr = 13.792;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Sepratron I(vac)"){
            twr = 18.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "PB-ION(atm)"){
            twr = 0.019;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "PB-ION(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RV-105(atm)"){
            twr = 1.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RV-105(vac)"){
            twr = 1.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Place-Anywhere 7(atm)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Place-Anywhere 7(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Vernor Engine(atm)"){
            twr = 12.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Vernor Engine(vac)"){
            twr = 12.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/(ui->twrmasslineedit->text().toDouble())*gconstant;
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else {
            ui->twrresultlineedit->setText("How the fuck did this happen?");
        }
        break;
    case 11:
        gconstant = 7.85;
        if ((ui->twrcombo->currentText()).isEmpty()){
            ui->twrresultlineedit->setText("Engine not chosen!");
        }
        else if((ui->twrcombo->currentText()) == "LV-1R(atm)"){
            twr = 1.793;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-1R(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "24-77(atm)"){
            twr = 13.793;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "24-77(vac)"){
            twr = 16.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mk-55(atm)"){
            twr = 108.2;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mk-55(vac)"){
            twr = 120.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "O-10(atm)"){
            twr = 9.6;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "O-10(vac)"){
            twr = 20.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-1(atm)"){
            twr = 0.51;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-1(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "48-7S(atm)"){
            twr = 16.2;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "48-7S(vac)"){
            twr = 18.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-909(atm)"){
            twr = 14.783;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-909(vac)"){
            twr = 60.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T30(atm)"){
            twr = 200.67;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T30(vac)"){
            twr = 215.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T45(atm)"){
            twr = 168.75;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T45(vac)"){
            twr = 200.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "CR-7(atm)"){
            twr = 162.3;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "CR-7(vac)"){
            twr = 180.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "T-1(atm)"){
            twr = 153.53;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "T-1(vac)"){
            twr = 180;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-N(atm)"){
            twr = 13.875;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LLV-N(vac)"){
            twr = 60.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Poodle(atm)"){
            twr = 64.29;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Poodle(vac)"){
            twr = 250.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Skipper(atm)"){
            twr = 568.75;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Skipper(vac)"){
            twr = 650.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mainsail(atm)"){
            twr = 1379.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mainsail(vac)"){
            twr = 1500;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LFB KR-1x2(atm)"){
            twr = 1866.7;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LFB KR-1x2(vac)"){
            twr = 2000.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "KR-2L+(atm)"){
            twr = 1500.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "KR-2L+(vac)"){
            twr = 2000.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S3 KS-25x4(atm)"){
            twr = 3746.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S3 KS-25x4(vac)"){
            twr = 4000.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "J-33 Basic Jet"){
            twr = 80.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "J-X4 Turbo Ramjet"){
            twr = 130.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "CR-7 Jet"){
            twr = 105.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-5(atm)"){
            twr = 162.91;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-5(vac)"){
            twr = 192.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-10(atm)"){
            twr = 197.90;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-10(vac)"){
            twr = 227.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "BACC(atm)"){
            twr = 250.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "BACC(vac)"){
            twr = 300.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S1 SRB-KD25k(atm)"){
            twr = 593.86;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S1 SRB-KD25k(vac)"){
            twr = 670.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Sepratron I(atm)"){
            twr = 13.792;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Sepratron I(vac)"){
            twr = 18.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "PB-ION(atm)"){
            twr = 0.019;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "PB-ION(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RV-105(atm)"){
            twr = 1.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RV-105(vac)"){
            twr = 1.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Place-Anywhere 7(atm)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Place-Anywhere 7(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Vernor Engine(atm)"){
            twr = 12.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Vernor Engine(vac)"){
            twr = 12.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/(ui->twrmasslineedit->text().toDouble())*gconstant;
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else {
            ui->twrresultlineedit->setText("How the fuck did this happen?");
        }
        break;
    case 12:
        gconstant = 7.85;
        if ((ui->twrcombo->currentText()).isEmpty()){
            ui->twrresultlineedit->setText("Engine not chosen!");
        }
        else if((ui->twrcombo->currentText()) == "LV-1R(atm)"){
            twr = 1.793;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-1R(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "24-77(atm)"){
            twr = 13.793;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "24-77(vac)"){
            twr = 16.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mk-55(atm)"){
            twr = 108.2;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mk-55(vac)"){
            twr = 120.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "O-10(atm)"){
            twr = 9.6;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "O-10(vac)"){
            twr = 20.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-1(atm)"){
            twr = 0.51;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-1(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "48-7S(atm)"){
            twr = 16.2;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "48-7S(vac)"){
            twr = 18.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-909(atm)"){
            twr = 14.783;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-909(vac)"){
            twr = 60.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T30(atm)"){
            twr = 200.67;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T30(vac)"){
            twr = 215.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T45(atm)"){
            twr = 168.75;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T45(vac)"){
            twr = 200.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "CR-7(atm)"){
            twr = 162.3;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "CR-7(vac)"){
            twr = 180.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "T-1(atm)"){
            twr = 153.53;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "T-1(vac)"){
            twr = 180;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-N(atm)"){
            twr = 13.875;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LLV-N(vac)"){
            twr = 60.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Poodle(atm)"){
            twr = 64.29;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Poodle(vac)"){
            twr = 250.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Skipper(atm)"){
            twr = 568.75;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Skipper(vac)"){
            twr = 650.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mainsail(atm)"){
            twr = 1379.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mainsail(vac)"){
            twr = 1500;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LFB KR-1x2(atm)"){
            twr = 1866.7;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LFB KR-1x2(vac)"){
            twr = 2000.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "KR-2L+(atm)"){
            twr = 1500.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "KR-2L+(vac)"){
            twr = 2000.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S3 KS-25x4(atm)"){
            twr = 3746.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S3 KS-25x4(vac)"){
            twr = 4000.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "J-33 Basic Jet"){
            twr = 80.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "J-X4 Turbo Ramjet"){
            twr = 130.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "CR-7 Jet"){
            twr = 105.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-5(atm)"){
            twr = 162.91;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-5(vac)"){
            twr = 192.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-10(atm)"){
            twr = 197.90;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-10(vac)"){
            twr = 227.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "BACC(atm)"){
            twr = 250.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "BACC(vac)"){
            twr = 300.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S1 SRB-KD25k(atm)"){
            twr = 593.86;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S1 SRB-KD25k(vac)"){
            twr = 670.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Sepratron I(atm)"){
            twr = 13.792;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Sepratron I(vac)"){
            twr = 18.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "PB-ION(atm)"){
            twr = 0.019;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "PB-ION(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RV-105(atm)"){
            twr = 1.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RV-105(vac)"){
            twr = 1.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Place-Anywhere 7(atm)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Place-Anywhere 7(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Vernor Engine(atm)"){
            twr = 12.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Vernor Engine(vac)"){
            twr = 12.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/(ui->twrmasslineedit->text().toDouble())*gconstant;
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else {
            ui->twrresultlineedit->setText("How the fuck did this happen?");
        }
        break;
    case 13:
        gconstant = 2.31;
        if ((ui->twrcombo->currentText()).isEmpty()){
            ui->twrresultlineedit->setText("Engine not chosen!");
        }
        else if((ui->twrcombo->currentText()) == "LV-1R(atm)"){
            twr = 1.793;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-1R(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "24-77(atm)"){
            twr = 13.793;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "24-77(vac)"){
            twr = 16.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mk-55(atm)"){
            twr = 108.2;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mk-55(vac)"){
            twr = 120.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "O-10(atm)"){
            twr = 9.6;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "O-10(vac)"){
            twr = 20.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-1(atm)"){
            twr = 0.51;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-1(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "48-7S(atm)"){
            twr = 16.2;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "48-7S(vac)"){
            twr = 18.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-909(atm)"){
            twr = 14.783;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-909(vac)"){
            twr = 60.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T30(atm)"){
            twr = 200.67;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T30(vac)"){
            twr = 215.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T45(atm)"){
            twr = 168.75;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T45(vac)"){
            twr = 200.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "CR-7(atm)"){
            twr = 162.3;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "CR-7(vac)"){
            twr = 180.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "T-1(atm)"){
            twr = 153.53;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "T-1(vac)"){
            twr = 180;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-N(atm)"){
            twr = 13.875;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LLV-N(vac)"){
            twr = 60.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Poodle(atm)"){
            twr = 64.29;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Poodle(vac)"){
            twr = 250.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Skipper(atm)"){
            twr = 568.75;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Skipper(vac)"){
            twr = 650.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mainsail(atm)"){
            twr = 1379.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mainsail(vac)"){
            twr = 1500;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LFB KR-1x2(atm)"){
            twr = 1866.7;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LFB KR-1x2(vac)"){
            twr = 2000.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "KR-2L+(atm)"){
            twr = 1500.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "KR-2L+(vac)"){
            twr = 2000.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S3 KS-25x4(atm)"){
            twr = 3746.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S3 KS-25x4(vac)"){
            twr = 4000.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "J-33 Basic Jet"){
            twr = 80.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "J-X4 Turbo Ramjet"){
            twr = 130.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "CR-7 Jet"){
            twr = 105.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-5(atm)"){
            twr = 162.91;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-5(vac)"){
            twr = 192.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-10(atm)"){
            twr = 197.90;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-10(vac)"){
            twr = 227.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "BACC(atm)"){
            twr = 250.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "BACC(vac)"){
            twr = 300.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S1 SRB-KD25k(atm)"){
            twr = 593.86;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S1 SRB-KD25k(vac)"){
            twr = 670.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Sepratron I(atm)"){
            twr = 13.792;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Sepratron I(vac)"){
            twr = 18.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "PB-ION(atm)"){
            twr = 0.019;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "PB-ION(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RV-105(atm)"){
            twr = 1.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RV-105(vac)"){
            twr = 1.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Place-Anywhere 7(atm)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Place-Anywhere 7(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Vernor Engine(atm)"){
            twr = 12.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Vernor Engine(vac)"){
            twr = 12.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/(ui->twrmasslineedit->text().toDouble())*gconstant;
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else {
            ui->twrresultlineedit->setText("How the fuck did this happen?");
        }
        break;
    case 14:
        gconstant = 7.85;
        if ((ui->twrcombo->currentText()).isEmpty()){
            ui->twrresultlineedit->setText("Engine not chosen!");
        }
        else if((ui->twrcombo->currentText()) == "LV-1R(atm)"){
            twr = 1.793;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-1R(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "24-77(atm)"){
            twr = 13.793;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "24-77(vac)"){
            twr = 16.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mk-55(atm)"){
            twr = 108.2;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mk-55(vac)"){
            twr = 120.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "O-10(atm)"){
            twr = 9.6;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "O-10(vac)"){
            twr = 20.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-1(atm)"){
            twr = 0.51;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-1(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "48-7S(atm)"){
            twr = 16.2;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "48-7S(vac)"){
            twr = 18.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-909(atm)"){
            twr = 14.783;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-909(vac)"){
            twr = 60.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T30(atm)"){
            twr = 200.67;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T30(vac)"){
            twr = 215.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T45(atm)"){
            twr = 168.75;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T45(vac)"){
            twr = 200.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "CR-7(atm)"){
            twr = 162.3;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "CR-7(vac)"){
            twr = 180.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "T-1(atm)"){
            twr = 153.53;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "T-1(vac)"){
            twr = 180;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-N(atm)"){
            twr = 13.875;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LLV-N(vac)"){
            twr = 60.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Poodle(atm)"){
            twr = 64.29;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Poodle(vac)"){
            twr = 250.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Skipper(atm)"){
            twr = 568.75;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Skipper(vac)"){
            twr = 650.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mainsail(atm)"){
            twr = 1379.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mainsail(vac)"){
            twr = 1500;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LFB KR-1x2(atm)"){
            twr = 1866.7;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LFB KR-1x2(vac)"){
            twr = 2000.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "KR-2L+(atm)"){
            twr = 1500.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "KR-2L+(vac)"){
            twr = 2000.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S3 KS-25x4(atm)"){
            twr = 3746.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S3 KS-25x4(vac)"){
            twr = 4000.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "J-33 Basic Jet"){
            twr = 80.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "J-X4 Turbo Ramjet"){
            twr = 130.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "CR-7 Jet"){
            twr = 105.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-5(atm)"){
            twr = 162.91;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-5(vac)"){
            twr = 192.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-10(atm)"){
            twr = 197.90;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-10(vac)"){
            twr = 227.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "BACC(atm)"){
            twr = 250.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "BACC(vac)"){
            twr = 300.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S1 SRB-KD25k(atm)"){
            twr = 593.86;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S1 SRB-KD25k(vac)"){
            twr = 670.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Sepratron I(atm)"){
            twr = 13.792;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Sepratron I(vac)"){
            twr = 18.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "PB-ION(atm)"){
            twr = 0.019;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "PB-ION(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RV-105(atm)"){
            twr = 1.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RV-105(vac)"){
            twr = 1.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Place-Anywhere 7(atm)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Place-Anywhere 7(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Vernor Engine(atm)"){
            twr = 12.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Vernor Engine(vac)"){
            twr = 12.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/(ui->twrmasslineedit->text().toDouble())*gconstant;
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else {
            ui->twrresultlineedit->setText("How the fuck did this happen?");
        }
        break;
    case 15:
        gconstant = 0.589;
        if ((ui->twrcombo->currentText()).isEmpty()){
            ui->twrresultlineedit->setText("Engine not chosen!");
        }
        else if((ui->twrcombo->currentText()) == "LV-1R(atm)"){
            twr = 1.793;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-1R(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "24-77(atm)"){
            twr = 13.793;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "24-77(vac)"){
            twr = 16.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mk-55(atm)"){
            twr = 108.2;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mk-55(vac)"){
            twr = 120.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "O-10(atm)"){
            twr = 9.6;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "O-10(vac)"){
            twr = 20.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-1(atm)"){
            twr = 0.51;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-1(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "48-7S(atm)"){
            twr = 16.2;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "48-7S(vac)"){
            twr = 18.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-909(atm)"){
            twr = 14.783;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-909(vac)"){
            twr = 60.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T30(atm)"){
            twr = 200.67;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T30(vac)"){
            twr = 215.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T45(atm)"){
            twr = 168.75;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T45(vac)"){
            twr = 200.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "CR-7(atm)"){
            twr = 162.3;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "CR-7(vac)"){
            twr = 180.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "T-1(atm)"){
            twr = 153.53;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "T-1(vac)"){
            twr = 180;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-N(atm)"){
            twr = 13.875;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LLV-N(vac)"){
            twr = 60.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Poodle(atm)"){
            twr = 64.29;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Poodle(vac)"){
            twr = 250.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Skipper(atm)"){
            twr = 568.75;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Skipper(vac)"){
            twr = 650.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mainsail(atm)"){
            twr = 1379.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mainsail(vac)"){
            twr = 1500;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LFB KR-1x2(atm)"){
            twr = 1866.7;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LFB KR-1x2(vac)"){
            twr = 2000.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "KR-2L+(atm)"){
            twr = 1500.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "KR-2L+(vac)"){
            twr = 2000.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S3 KS-25x4(atm)"){
            twr = 3746.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S3 KS-25x4(vac)"){
            twr = 4000.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "J-33 Basic Jet"){
            twr = 80.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "J-X4 Turbo Ramjet"){
            twr = 130.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "CR-7 Jet"){
            twr = 105.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-5(atm)"){
            twr = 162.91;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-5(vac)"){
            twr = 192.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-10(atm)"){
            twr = 197.90;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-10(vac)"){
            twr = 227.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "BACC(atm)"){
            twr = 250.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "BACC(vac)"){
            twr = 300.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S1 SRB-KD25k(atm)"){
            twr = 593.86;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S1 SRB-KD25k(vac)"){
            twr = 670.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Sepratron I(atm)"){
            twr = 13.792;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Sepratron I(vac)"){
            twr = 18.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "PB-ION(atm)"){
            twr = 0.019;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "PB-ION(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RV-105(atm)"){
            twr = 1.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RV-105(vac)"){
            twr = 1.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Place-Anywhere 7(atm)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Place-Anywhere 7(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Vernor Engine(atm)"){
            twr = 12.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Vernor Engine(vac)"){
            twr = 12.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/(ui->twrmasslineedit->text().toDouble())*gconstant;
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else {
            ui->twrresultlineedit->setText("How the fuck did this happen?");
        }
        break;
    case 16:
        gconstant = 0.373;
        if ((ui->twrcombo->currentText()).isEmpty()){
            ui->twrresultlineedit->setText("Engine not chosen!");
        }
        else if((ui->twrcombo->currentText()) == "LV-1R(atm)"){
            twr = 1.793;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-1R(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "24-77(atm)"){
            twr = 13.793;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "24-77(vac)"){
            twr = 16.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mk-55(atm)"){
            twr = 108.2;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mk-55(vac)"){
            twr = 120.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "O-10(atm)"){
            twr = 9.6;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "O-10(vac)"){
            twr = 20.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-1(atm)"){
            twr = 0.51;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-1(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "48-7S(atm)"){
            twr = 16.2;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "48-7S(vac)"){
            twr = 18.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-909(atm)"){
            twr = 14.783;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-909(vac)"){
            twr = 60.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T30(atm)"){
            twr = 200.67;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T30(vac)"){
            twr = 215.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T45(atm)"){
            twr = 168.75;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T45(vac)"){
            twr = 200.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "CR-7(atm)"){
            twr = 162.3;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "CR-7(vac)"){
            twr = 180.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "T-1(atm)"){
            twr = 153.53;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "T-1(vac)"){
            twr = 180;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-N(atm)"){
            twr = 13.875;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LLV-N(vac)"){
            twr = 60.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Poodle(atm)"){
            twr = 64.29;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Poodle(vac)"){
            twr = 250.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Skipper(atm)"){
            twr = 568.75;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Skipper(vac)"){
            twr = 650.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mainsail(atm)"){
            twr = 1379.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mainsail(vac)"){
            twr = 1500;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LFB KR-1x2(atm)"){
            twr = 1866.7;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LFB KR-1x2(vac)"){
            twr = 2000.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "KR-2L+(atm)"){
            twr = 1500.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "KR-2L+(vac)"){
            twr = 2000.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S3 KS-25x4(atm)"){
            twr = 3746.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S3 KS-25x4(vac)"){
            twr = 4000.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "J-33 Basic Jet"){
            twr = 80.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "J-X4 Turbo Ramjet"){
            twr = 130.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "CR-7 Jet"){
            twr = 105.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-5(atm)"){
            twr = 162.91;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-5(vac)"){
            twr = 192.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-10(atm)"){
            twr = 197.90;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-10(vac)"){
            twr = 227.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "BACC(atm)"){
            twr = 250.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "BACC(vac)"){
            twr = 300.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S1 SRB-KD25k(atm)"){
            twr = 593.86;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S1 SRB-KD25k(vac)"){
            twr = 670.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Sepratron I(atm)"){
            twr = 13.792;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Sepratron I(vac)"){
            twr = 18.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "PB-ION(atm)"){
            twr = 0.019;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "PB-ION(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RV-105(atm)"){
            twr = 1.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RV-105(vac)"){
            twr = 1.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Place-Anywhere 7(atm)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Place-Anywhere 7(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Vernor Engine(atm)"){
            twr = 12.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Vernor Engine(vac)"){
            twr = 12.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/(ui->twrmasslineedit->text().toDouble())*gconstant;
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else {
            ui->twrresultlineedit->setText("How the fuck did this happen?");
        }
        break;
    case 17:
        gconstant = 1.69;
        if ((ui->twrcombo->currentText()).isEmpty()){
            ui->twrresultlineedit->setText("Engine not chosen!");
        }
        else if((ui->twrcombo->currentText()) == "LV-1R(atm)"){
            twr = 1.793;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-1R(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "24-77(atm)"){
            twr = 13.793;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "24-77(vac)"){
            twr = 16.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mk-55(atm)"){
            twr = 108.2;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mk-55(vac)"){
            twr = 120.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "O-10(atm)"){
            twr = 9.6;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "O-10(vac)"){
            twr = 20.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-1(atm)"){
            twr = 0.51;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-1(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "48-7S(atm)"){
            twr = 16.2;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "48-7S(vac)"){
            twr = 18.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-909(atm)"){
            twr = 14.783;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-909(vac)"){
            twr = 60.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T30(atm)"){
            twr = 200.67;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T30(vac)"){
            twr = 215.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T45(atm)"){
            twr = 168.75;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-T45(vac)"){
            twr = 200.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "CR-7(atm)"){
            twr = 162.3;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "CR-7(vac)"){
            twr = 180.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "T-1(atm)"){
            twr = 153.53;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "T-1(vac)"){
            twr = 180;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LV-N(atm)"){
            twr = 13.875;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LLV-N(vac)"){
            twr = 60.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Poodle(atm)"){
            twr = 64.29;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Poodle(vac)"){
            twr = 250.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Skipper(atm)"){
            twr = 568.75;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Skipper(vac)"){
            twr = 650.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mainsail(atm)"){
            twr = 1379.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Mainsail(vac)"){
            twr = 1500;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LFB KR-1x2(atm)"){
            twr = 1866.7;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "LFB KR-1x2(vac)"){
            twr = 2000.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "KR-2L+(atm)"){
            twr = 1500.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "KR-2L+(vac)"){
            twr = 2000.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S3 KS-25x4(atm)"){
            twr = 3746.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S3 KS-25x4(vac)"){
            twr = 4000.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "J-33 Basic Jet"){
            twr = 80.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "J-X4 Turbo Ramjet"){
            twr = 130.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "CR-7 Jet"){
            twr = 105.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-5(atm)"){
            twr = 162.91;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-5(vac)"){
            twr = 192.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-10(atm)"){
            twr = 197.90;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RT-10(vac)"){
            twr = 227.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "BACC(atm)"){
            twr = 250.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "BACC(vac)"){
            twr = 300.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S1 SRB-KD25k(atm)"){
            twr = 593.86;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "S1 SRB-KD25k(vac)"){
            twr = 670.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Sepratron I(atm)"){
            twr = 13.792;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Sepratron I(vac)"){
            twr = 18.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "PB-ION(atm)"){
            twr = 0.019;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "PB-ION(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RV-105(atm)"){
            twr = 1.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "RV-105(vac)"){
            twr = 1.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Place-Anywhere 7(atm)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Place-Anywhere 7(vac)"){
            twr = 2.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Vernor Engine(atm)"){
            twr = 12.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/((ui->twrmasslineedit->text().toDouble())*gconstant);
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else if((ui->twrcombo->currentText()) == "Vernor Engine(vac)"){
            twr = 12.0;
            twrunderlying = ((ui->twrengineamount->text().toDouble())*twr)/(ui->twrmasslineedit->text().toDouble())*gconstant;
            ui->twrresultlineedit->setText(QString::number(twrunderlying));
        }
        else {
            ui->twrresultlineedit->setText("How the fuck did this happen?");
        }
        break;
    default:
        ui->twrresultlineedit->setText("How the fuck did this happen?");
        break;
    }

}

void MainWindow::on_twrclearbutton_clicked()
{
    twrunderlying = 0;
    ui->twrcombo->setCurrentIndex(0);
    ui->twrbodycombo->setCurrentIndex(0);
    ui->twrengineamount->setText("");
    ui->twrmasslineedit->setText("");
    ui->twrresultlineedit->setText("");
}

void MainWindow::on_orbitalvelocitybutton_clicked()
{
    double distance = 0;
    double Gconstant = (6.67)*(pow (10.0, -11.0));
    double body_mass = 0;
    double orb_height = 0;
    if (ui->orbitalvelocityheight->text().isEmpty()){
        ui->orbitalvelocityanswer->setText("Orbital height not set!");
    }
    else if((ui->orbitalvelocitycombo->currentText()) == "Kerbol"){
        equatorial_radius = 261600000;
        distance = ((ui->orbitalvelocityheight->text().toDouble())*1000) + equatorial_radius;
        body_mass = (1.75)*(pow (10.0, 28.0));
        orb_height = (ui->orbitalvelocityheight->text().toDouble())*1000;
        orbvelresult = (Gconstant*body_mass)*(1/(orb_height + equatorial_radius));
        orbvelresult = sqrt(orbvelresult);
        ui->orbitalvelocityanswer->setText(QString::number(orbvelresult));

    }
    else if((ui->orbitalvelocitycombo->currentText()) == "Moho"){
        equatorial_radius = 250000;
        distance = ((ui->orbitalvelocityheight->text().toDouble())*1000) + equatorial_radius;
        body_mass = (2.52)*(pow (10.0, 21.0));
        orb_height = (ui->orbitalvelocityheight->text().toDouble())*1000;
        orbvelresult = (Gconstant*body_mass)*(1/(orb_height + equatorial_radius));
        orbvelresult = sqrt(orbvelresult);
        ui->orbitalvelocityanswer->setText(QString::number(orbvelresult));

    }
    else if((ui->orbitalvelocitycombo->currentText()) == "Eve"){
        equatorial_radius = 700000;
        distance = ((ui->orbitalvelocityheight->text().toDouble())*1000) + equatorial_radius;
        body_mass = (1.22)*(pow (10.0, 23.0));
        orb_height = (ui->orbitalvelocityheight->text().toDouble())*1000;
        orbvelresult = (Gconstant*body_mass)*(1/(orb_height + equatorial_radius));
        orbvelresult = sqrt(orbvelresult);
        ui->orbitalvelocityanswer->setText(QString::number(orbvelresult));

    }
    else if((ui->orbitalvelocitycombo->currentText()) == "Gilly"){
        equatorial_radius = 13000;
        distance = ((ui->orbitalvelocityheight->text().toDouble())*1000) + equatorial_radius;
        body_mass = (1.24)*(pow (10.0, 17.0));
        orb_height = (ui->orbitalvelocityheight->text().toDouble())*1000;
        orbvelresult = (Gconstant*body_mass)*(1/(orb_height + equatorial_radius));
        orbvelresult = sqrt(orbvelresult);
        ui->orbitalvelocityanswer->setText(QString::number(orbvelresult));

    }
    else if((ui->orbitalvelocitycombo->currentText()) == "Kerbin"){
        equatorial_radius = 600000;
        distance = ((ui->orbitalvelocityheight->text().toDouble())*1000) + equatorial_radius;
        body_mass = (5.29)*(pow (10.0, 22.0));
        orb_height = (ui->orbitalvelocityheight->text().toDouble())*1000;
        orbvelresult = (Gconstant*body_mass)*(1/(orb_height + equatorial_radius));
        orbvelresult = sqrt(orbvelresult);
        ui->orbitalvelocityanswer->setText(QString::number(orbvelresult));

    }
    else if((ui->orbitalvelocitycombo->currentText()) == "Mun"){
        equatorial_radius = 200000;
        distance = ((ui->orbitalvelocityheight->text().toDouble())*1000) + equatorial_radius;
        body_mass = (9.76)*(pow (10.0, 20.0));
        orb_height = (ui->orbitalvelocityheight->text().toDouble())*1000;
        orbvelresult = (Gconstant*body_mass)*(1/(orb_height + equatorial_radius));
        orbvelresult = sqrt(orbvelresult);
        ui->orbitalvelocityanswer->setText(QString::number(orbvelresult));

    }
    else if((ui->orbitalvelocitycombo->currentText()) == "Minmus"){
        equatorial_radius = 60000;
        distance = ((ui->orbitalvelocityheight->text().toDouble())*1000) + equatorial_radius;
        body_mass = (2.64)*(pow (10.0, 19.0));
        orb_height = (ui->orbitalvelocityheight->text().toDouble())*1000;
        orbvelresult = (Gconstant*body_mass)*(1/(orb_height + equatorial_radius));
        orbvelresult = sqrt(orbvelresult);
        ui->orbitalvelocityanswer->setText(QString::number(orbvelresult));

    }
    else if((ui->orbitalvelocitycombo->currentText()) == "Duna"){
        equatorial_radius = 320000;
        distance = ((ui->orbitalvelocityheight->text().toDouble())*1000) + equatorial_radius;
        body_mass = (4.51)*(pow (10.0, 21.0));
        orb_height = (ui->orbitalvelocityheight->text().toDouble())*1000;
        orbvelresult = (Gconstant*body_mass)*(1/(orb_height + equatorial_radius));
        orbvelresult = sqrt(orbvelresult);
        ui->orbitalvelocityanswer->setText(QString::number(orbvelresult));

    }
    else if((ui->orbitalvelocitycombo->currentText()) == "Ike"){
        equatorial_radius = 130000;
        distance = ((ui->orbitalvelocityheight->text().toDouble())*1000) + equatorial_radius;
        body_mass = (2.78)*(pow (10.0, 20.0));
        orb_height = (ui->orbitalvelocityheight->text().toDouble())*1000;
        orbvelresult = (Gconstant*body_mass)*(1/(orb_height + equatorial_radius));
        orbvelresult = sqrt(orbvelresult);
        ui->orbitalvelocityanswer->setText(QString::number(orbvelresult));

    }
    else if((ui->orbitalvelocitycombo->currentText()) == "Dres"){
        equatorial_radius = 138000;
        distance = ((ui->orbitalvelocityheight->text().toDouble())*1000) + equatorial_radius;
        body_mass = (3.21)*(pow (10.0, 20.0));
        orb_height = (ui->orbitalvelocityheight->text().toDouble())*1000;
        orbvelresult = (Gconstant*body_mass)*(1/(orb_height + equatorial_radius));
        orbvelresult = sqrt(orbvelresult);
        ui->orbitalvelocityanswer->setText(QString::number(orbvelresult));

    }
    else if((ui->orbitalvelocitycombo->currentText()) == "Jool"){
        equatorial_radius = 6000000;
        distance = ((ui->orbitalvelocityheight->text().toDouble())*1000) + equatorial_radius;
        body_mass = (4.23)*(pow (10.0, 24.0));
        orb_height = (ui->orbitalvelocityheight->text().toDouble())*1000;
        orbvelresult = (Gconstant*body_mass)*(1/(orb_height + equatorial_radius));
        orbvelresult = sqrt(orbvelresult);
        ui->orbitalvelocityanswer->setText(QString::number(orbvelresult));

    }
    else if((ui->orbitalvelocitycombo->currentText()) == "Laythe"){
        equatorial_radius = 500000;
        distance = ((ui->orbitalvelocityheight->text().toDouble())*1000) + equatorial_radius;
        body_mass = (2.93)*(pow (10.0, 22.0));
        orb_height = (ui->orbitalvelocityheight->text().toDouble())*1000;
        orbvelresult = (Gconstant*body_mass)*(1/(orb_height + equatorial_radius));
        orbvelresult = sqrt(orbvelresult);
        ui->orbitalvelocityanswer->setText(QString::number(orbvelresult));

    }
    else if((ui->orbitalvelocitycombo->currentText()) == "Vall"){
        equatorial_radius = 300000;
        distance = ((ui->orbitalvelocityheight->text().toDouble())*1000) + equatorial_radius;
        body_mass = (3.1)*(pow (10.0, 21.0));
        orb_height = (ui->orbitalvelocityheight->text().toDouble())*1000;
        orbvelresult = (Gconstant*body_mass)*(1/(orb_height + equatorial_radius));
        orbvelresult = sqrt(orbvelresult);
        ui->orbitalvelocityanswer->setText(QString::number(orbvelresult));

    }
    else if((ui->orbitalvelocitycombo->currentText()) == "Tylo"){
        equatorial_radius = 600000;
        distance = ((ui->orbitalvelocityheight->text().toDouble())*1000) + equatorial_radius;
        body_mass = (4.23)*(pow (10.0, 22.0));
        orb_height = (ui->orbitalvelocityheight->text().toDouble())*1000;
        orbvelresult = (Gconstant*body_mass)*(1/(orb_height + equatorial_radius));
        orbvelresult = sqrt(orbvelresult);
        ui->orbitalvelocityanswer->setText(QString::number(orbvelresult));

    }
    else if((ui->orbitalvelocitycombo->currentText()) == "Bop"){
        equatorial_radius = 65000;
        distance = ((ui->orbitalvelocityheight->text().toDouble())*1000) + equatorial_radius;
        body_mass = (3.72)*(pow (10.0, 19.0));
        orb_height = (ui->orbitalvelocityheight->text().toDouble())*1000;
        orbvelresult = (Gconstant*body_mass)*(1/(orb_height + equatorial_radius));
        orbvelresult = sqrt(orbvelresult);
        ui->orbitalvelocityanswer->setText(QString::number(orbvelresult));

    }
    else if((ui->orbitalvelocitycombo->currentText()) == "Pol"){
        equatorial_radius = 44000;
        distance = ((ui->orbitalvelocityheight->text().toDouble())*1000) + equatorial_radius;
        body_mass = (1.08)*(pow (10.0, 19.0));
        orb_height = (ui->orbitalvelocityheight->text().toDouble())*1000;
        orbvelresult = (Gconstant*body_mass)*(1/(orb_height + equatorial_radius));
        orbvelresult = sqrt(orbvelresult);
        ui->orbitalvelocityanswer->setText(QString::number(orbvelresult));

    }
    else if((ui->orbitalvelocitycombo->currentText()) == "Eeloo"){
        equatorial_radius = 210000;
        distance = ((ui->orbitalvelocityheight->text().toDouble())*1000) + equatorial_radius;
        body_mass = (1.11)*(pow (10.0, 21.0));
        orb_height = (ui->orbitalvelocityheight->text().toDouble())*1000;
        orbvelresult = (Gconstant*body_mass)*(1/(orb_height + equatorial_radius));
        orbvelresult = sqrt(orbvelresult);
        ui->orbitalvelocityanswer->setText(QString::number(orbvelresult));

    }
    else{
        ui->orbitalvelocityanswer->setText("How the hell did this happen?");
    }
}

void MainWindow::on_orbvelclearbutton_clicked()
{
    ui->orbitalvelocityanswer->setText("");
    ui->orbitalvelocitycombo->setCurrentIndex(0);
    ui->orbitalvelocityheight->setText("");
    equatorial_radius = 0;
    orbvelresult = 0;
}

void MainWindow::on_incchangeresultbutton_clicked()
{
    orbvel = ui->incchangevelocitylineedit->text().toFloat();
    incs = ui->incstartlineedit->text().toFloat();
    ince = ui->incendlineedit->text().toFloat();
    if ((ince)>(incs)){
        incchangeresult = (2*orbvel)*(sin(((ince-incs)/2)*PI/180));
        ui->incchangeresultlineedit->setText(QString::number(incchangeresult));
    }
    else if ((ince) == (incs)){
        incchangeresult = 0;
        ui->incchangeresultlineedit->setText(QString::number(incchangeresult));
    }
    else if ((ince)<(incs)){
            incchangeresult = (2*orbvel)*(sin(((ince-incs)/(-2))*PI/180));
            ui->incchangeresultlineedit->setText(QString::number(incchangeresult));
    }
    else{
        ui->incchangeresultlineedit->setText("How the fuck did this happen?");
    }
}

void MainWindow::on_incchangeclearbutton_clicked()
{
    ince = 0;
    incs = 0;
    incchangeresult = 0;
    orbvel = 0;
    ui->incchangeresultlineedit->setText("");
    ui->incendlineedit->setText("");
    ui->incstartlineedit->setText("");
    ui->incchangevelocitylineedit->setText("");
}

void MainWindow::on_comboBox_activated(int index)
{
    double result = 0;
    double mass = 0;
    double gconstant = (6.67)*pow(10.0, (-11.0));
    double equatorial_radius = 0;
    switch (index) {
    case 1:
        orbitalperiod = 432000.00;
        equatorial_radius = 261600000;
        mass = (1.75)*(pow (10.0, 28.0));
        result = ((pow(orbitalperiod, 2.0))*gconstant*mass)/(4*(pow(PI, 2.0)));
        result = (pow(result, 1/3.))-equatorial_radius;
        ui->geostatlineedit->setText(QString::number(result/1000));
        break;
    case 2:
        orbitalperiod = 1210000.0;
        equatorial_radius = 250000;
        mass = (2.52)*(pow (10.0, 21.0));
        result = ((pow(orbitalperiod, 2.0))*gconstant*mass)/(4*(pow(PI, 2.0)));
        result = (pow(result, 1/3.))-equatorial_radius;
        ui->geostatlineedit->setText(QString::number(result/1000));
        break;
    case 3:
        orbitalperiod = 80500.000;
        equatorial_radius = 700000;
        mass = (1.22)*(pow (10.0, 23.0));
        result = ((pow(orbitalperiod, 2.0))*gconstant*mass)/(4*(pow(PI, 2.0)));
        result = (pow(result, 1/3.))-equatorial_radius;
        ui->geostatlineedit->setText(QString::number(result/1000));
        break;
    case 4:
        orbitalperiod = 21599.912;
        equatorial_radius = 600000;
        mass = (5.29)*(pow (10.0, 22.0));
        result = ((pow(orbitalperiod, 2.0))*gconstant*mass)/(4*(pow(PI, 2.0)));
        result = (pow(result, 1/3.))-equatorial_radius;
        ui->geostatlineedit->setText(QString::number(result/1000));
        break;
    case 5:
        orbitalperiod = 65517.859;
        equatorial_radius = 320000;
        mass = (4.51)*(pow (10.0, 21.0));
        result = ((pow(orbitalperiod, 2.0))*gconstant*mass)/(4*(pow(PI, 2.0)));
        result = (pow(result, 1/3.))-equatorial_radius;
        ui->geostatlineedit->setText(QString::number(result/1000));
        break;
    case 6:
        orbitalperiod = 34800.000;
        equatorial_radius = 138000;
        mass = (3.21)*(pow (10.0, 20.0));
        result = ((pow(orbitalperiod, 2.0))*gconstant*mass)/(4*(pow(PI, 2.0)));
        result = (pow(result, 1/3.))-equatorial_radius;
        ui->geostatlineedit->setText(QString::number(result/1000));
        break;
    case 7:
        orbitalperiod = 36000.000;
        equatorial_radius = 6000000;
        mass = (4.23)*(pow (10.0, 24.0));
        result = ((pow(orbitalperiod, 2.0))*gconstant*mass)/(4*(pow(PI, 2.0)));
        result = (pow(result, 1/3.))-equatorial_radius;
        ui->geostatlineedit->setText(QString::number(result/1000));
        break;
    case 8:
        orbitalperiod = 19460.000;
        equatorial_radius = 210000;
        mass = (1.11)*(pow (10.0, 21.0));
        result = ((pow(orbitalperiod, 2.0))*gconstant*mass)/(4*(pow(PI, 2.0)));
        result = (pow(result, 1/3.))-equatorial_radius;
        ui->geostatlineedit->setText(QString::number(result/1000));
        break;
    default:
        break;
    }
}
