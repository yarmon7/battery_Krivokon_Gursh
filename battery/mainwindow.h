#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "battery.h"

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

private:
    void resetBattery();
    void consumeCapacity();
    void updateResults();
    void updateBatteryIcon();

    Ui::MainWindow *ui;
    Battery battery;
};
#endif // MAINWINDOW_H
