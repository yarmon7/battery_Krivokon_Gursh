#include "../../mainwindow.h"
#include "../../flightpathview.h"

#include <QApplication>
#include <QDoubleSpinBox>
#include <QLabel>
#include <QProgressBar>
#include <QPushButton>
#include <QTabWidget>
#include <cassert>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow window;
    window.show();
    app.processEvents();

    auto label = [&window](const char *name) {
        auto *result = window.findChild<QLabel *>(name);
        assert(result);
        return result->text();
    };
    auto spin = [&window](const char *name) {
        auto *result = window.findChild<QDoubleSpinBox *>(name);
        assert(result);
        return result;
    };
    auto *bar = window.findChild<QProgressBar *>("windRiskBar");
    auto *velocity_button = window.findChild<QPushButton *>("calculateVelocityButton");
    auto *route_button = window.findChild<QPushButton *>("calculateRouteButton");
    auto *tabs = window.findChild<QTabWidget *>("variantTabs");
    auto *view = window.findChild<FlightPathView *>("flightPathView");
    assert(bar && velocity_button && route_button && tabs && view);

    assert(label("groundVelocityValue") == "(12.000, 3.000, -1.000) м/с");
    assert(bar->value() == 20);
    assert(label("windRiskValue").contains("Низкий риск"));
    assert(label("windRiskValue").contains("20.7%"));
    assert(window.grab().save("velocity_preview.png"));

    spin("windXSpinBox")->setValue(100.0);
    velocity_button->click();
    assert(bar->value() == 100);
    assert(label("windRiskValue").contains("Критично"));
    spin("droneXSpinBox")->setValue(0.0);
    spin("droneYSpinBox")->setValue(0.0);
    spin("droneZSpinBox")->setValue(0.0);
    velocity_button->click();
    assert(label("windRiskValue").contains("воздушная скорость равна нулю"));

    tabs->setCurrentIndex(1);
    app.processEvents();
    assert(label("displacementValue") == "(300.000, 200.000, 50.000) м");
    assert(label("routeBoundsStatusLabel").contains("полностью внутри"));
    assert(label("routeCheckValue") == "Да, конечная точка совпадает");
    assert(window.grab().save("route_preview.png"));

    spin("xMaxSpinBox")->setValue(250.0);
    route_button->click();
    assert(label("routeBoundsStatusLabel").contains("выходит за границы"));
    spin("xMinSpinBox")->setValue(300.0);
    route_button->click();
    assert(label("routeBoundsStatusLabel").contains("Ошибка"));
    spin("xMinSpinBox")->setValue(0.0);
    spin("xMaxSpinBox")->setValue(400.0);
    route_button->click();
    assert(label("routeBoundsStatusLabel").contains("полностью внутри"));
}
