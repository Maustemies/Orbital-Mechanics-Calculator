#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_basicdvbutton_clicked();

    void on_basicdeltavtotalbutton_clicked();

    void on_basicdvclearbutton_clicked();

    void on_twrcalculatebutton_clicked();

    void on_twrclearbutton_clicked();

    void on_orbitalvelocitybutton_clicked();

    void on_orbvelclearbutton_clicked();

    void on_incchangeresultbutton_clicked();

    void on_incchangeclearbutton_clicked();

    void on_comboBox_geostat_orbit_activated(int index);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
