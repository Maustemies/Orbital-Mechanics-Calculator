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

private:
    Ui::MainWindow *ui;
    double basicunderlying;
    double basicresult;
    double twrunderlying;
    int equatorial_radius;
    double orbvelresult;
};

#endif // MAINWINDOW_H
