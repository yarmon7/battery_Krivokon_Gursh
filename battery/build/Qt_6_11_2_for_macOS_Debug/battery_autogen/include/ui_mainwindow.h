/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *batteryGroupBox;
    QFormLayout *batteryFormLayout;
    QLabel *cellCountLabel;
    QSpinBox *cellCountSpinBox;
    QLabel *voltageLabel;
    QDoubleSpinBox *voltageSpinBox;
    QLabel *capacityLabel;
    QDoubleSpinBox *capacitySpinBox;
    QLabel *chargePercentageTitleLabel;
    QLabel *chargePercentageLabel;
    QLabel *chargeStatusTitleLabel;
    QLabel *chargeStatusLabel;
    QGroupBox *consumptionGroupBox;
    QFormLayout *consumptionFormLayout;
    QLabel *consumptionLabel;
    QDoubleSpinBox *consumptionSpinBox;
    QPushButton *consumeButton;
    QLabel *remainingCapacityTitleLabel;
    QLabel *remainingCapacityLabel;
    QLabel *remainingPercentageTitleLabel;
    QLabel *remainingPercentageLabel;
    QLabel *batteryIconTitleLabel;
    QLabel *batteryIconLabel;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(560, 500);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        batteryGroupBox = new QGroupBox(centralwidget);
        batteryGroupBox->setObjectName("batteryGroupBox");
        batteryFormLayout = new QFormLayout(batteryGroupBox);
        batteryFormLayout->setObjectName("batteryFormLayout");
        cellCountLabel = new QLabel(batteryGroupBox);
        cellCountLabel->setObjectName("cellCountLabel");

        batteryFormLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, cellCountLabel);

        cellCountSpinBox = new QSpinBox(batteryGroupBox);
        cellCountSpinBox->setObjectName("cellCountSpinBox");
        cellCountSpinBox->setMinimum(1);
        cellCountSpinBox->setMaximum(16);
        cellCountSpinBox->setValue(4);

        batteryFormLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, cellCountSpinBox);

        voltageLabel = new QLabel(batteryGroupBox);
        voltageLabel->setObjectName("voltageLabel");

        batteryFormLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, voltageLabel);

        voltageSpinBox = new QDoubleSpinBox(batteryGroupBox);
        voltageSpinBox->setObjectName("voltageSpinBox");
        voltageSpinBox->setDecimals(2);
        voltageSpinBox->setMinimum(0.000000000000000);
        voltageSpinBox->setMaximum(1000.000000000000000);
        voltageSpinBox->setValue(16.000000000000000);

        batteryFormLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, voltageSpinBox);

        capacityLabel = new QLabel(batteryGroupBox);
        capacityLabel->setObjectName("capacityLabel");

        batteryFormLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, capacityLabel);

        capacitySpinBox = new QDoubleSpinBox(batteryGroupBox);
        capacitySpinBox->setObjectName("capacitySpinBox");
        capacitySpinBox->setDecimals(1);
        capacitySpinBox->setMaximum(1000000.000000000000000);
        capacitySpinBox->setValue(5000.000000000000000);

        batteryFormLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, capacitySpinBox);

        chargePercentageTitleLabel = new QLabel(batteryGroupBox);
        chargePercentageTitleLabel->setObjectName("chargePercentageTitleLabel");

        batteryFormLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, chargePercentageTitleLabel);

        chargePercentageLabel = new QLabel(batteryGroupBox);
        chargePercentageLabel->setObjectName("chargePercentageLabel");

        batteryFormLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, chargePercentageLabel);

        chargeStatusTitleLabel = new QLabel(batteryGroupBox);
        chargeStatusTitleLabel->setObjectName("chargeStatusTitleLabel");

        batteryFormLayout->setWidget(4, QFormLayout::ItemRole::LabelRole, chargeStatusTitleLabel);

        chargeStatusLabel = new QLabel(batteryGroupBox);
        chargeStatusLabel->setObjectName("chargeStatusLabel");

        batteryFormLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, chargeStatusLabel);


        verticalLayout->addWidget(batteryGroupBox);

        consumptionGroupBox = new QGroupBox(centralwidget);
        consumptionGroupBox->setObjectName("consumptionGroupBox");
        consumptionFormLayout = new QFormLayout(consumptionGroupBox);
        consumptionFormLayout->setObjectName("consumptionFormLayout");
        consumptionLabel = new QLabel(consumptionGroupBox);
        consumptionLabel->setObjectName("consumptionLabel");

        consumptionFormLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, consumptionLabel);

        consumptionSpinBox = new QDoubleSpinBox(consumptionGroupBox);
        consumptionSpinBox->setObjectName("consumptionSpinBox");
        consumptionSpinBox->setDecimals(1);
        consumptionSpinBox->setMaximum(1000000.000000000000000);

        consumptionFormLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, consumptionSpinBox);

        consumeButton = new QPushButton(consumptionGroupBox);
        consumeButton->setObjectName("consumeButton");

        consumptionFormLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, consumeButton);

        remainingCapacityTitleLabel = new QLabel(consumptionGroupBox);
        remainingCapacityTitleLabel->setObjectName("remainingCapacityTitleLabel");

        consumptionFormLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, remainingCapacityTitleLabel);

        remainingCapacityLabel = new QLabel(consumptionGroupBox);
        remainingCapacityLabel->setObjectName("remainingCapacityLabel");

        consumptionFormLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, remainingCapacityLabel);

        remainingPercentageTitleLabel = new QLabel(consumptionGroupBox);
        remainingPercentageTitleLabel->setObjectName("remainingPercentageTitleLabel");

        consumptionFormLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, remainingPercentageTitleLabel);

        remainingPercentageLabel = new QLabel(consumptionGroupBox);
        remainingPercentageLabel->setObjectName("remainingPercentageLabel");

        consumptionFormLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, remainingPercentageLabel);

        batteryIconTitleLabel = new QLabel(consumptionGroupBox);
        batteryIconTitleLabel->setObjectName("batteryIconTitleLabel");

        consumptionFormLayout->setWidget(4, QFormLayout::ItemRole::LabelRole, batteryIconTitleLabel);

        batteryIconLabel = new QLabel(consumptionGroupBox);
        batteryIconLabel->setObjectName("batteryIconLabel");
        batteryIconLabel->setMinimumSize(QSize(150, 60));

        consumptionFormLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, batteryIconLabel);


        verticalLayout->addWidget(consumptionGroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 560, 33));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
#if QT_CONFIG(shortcut)
        cellCountLabel->setBuddy(cellCountSpinBox);
        voltageLabel->setBuddy(voltageSpinBox);
        capacityLabel->setBuddy(capacitySpinBox);
        consumptionLabel->setBuddy(consumptionSpinBox);
#endif // QT_CONFIG(shortcut)

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\240\320\265\321\201\321\203\321\200\321\201 \320\261\320\260\321\202\320\260\321\200\320\265\320\270", nullptr));
        batteryGroupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213 \320\261\320\260\321\202\320\260\321\200\320\265\320\270", nullptr));
        cellCountLabel->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\217\321\207\320\265\320\265\320\272:", nullptr));
        voltageLabel->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\277\321\200\321\217\320\266\320\265\320\275\320\270\320\265:", nullptr));
        voltageSpinBox->setSuffix(QCoreApplication::translate("MainWindow", " \320\222", nullptr));
        capacityLabel->setText(QCoreApplication::translate("MainWindow", "\320\235\320\276\320\274\320\270\320\275\320\260\320\273\321\214\320\275\320\260\321\217 \321\221\320\274\320\272\320\276\321\201\321\202\321\214:", nullptr));
        capacitySpinBox->setSuffix(QCoreApplication::translate("MainWindow", " \320\274\320\220\302\267\321\207", nullptr));
        chargePercentageTitleLabel->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\321\200\321\217\320\264 \320\277\320\276 \320\275\320\260\320\277\321\200\321\217\320\266\320\265\320\275\320\270\321\216:", nullptr));
        chargePercentageLabel->setText(QCoreApplication::translate("MainWindow", "\342\200\224 %", nullptr));
        chargeStatusTitleLabel->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\201\321\202\320\276\321\217\320\275\320\270\320\265 \320\267\320\260\321\200\321\217\320\264\320\260:", nullptr));
        chargeStatusLabel->setText(QCoreApplication::translate("MainWindow", "\342\200\224", nullptr));
        consumptionGroupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\321\205\320\276\320\264 \321\221\320\274\320\272\320\276\321\201\321\202\320\270", nullptr));
        consumptionLabel->setText(QCoreApplication::translate("MainWindow", "\320\230\320\267\321\200\320\260\321\201\321\205\320\276\320\264\320\276\320\262\320\260\321\202\321\214:", nullptr));
        consumptionSpinBox->setSuffix(QCoreApplication::translate("MainWindow", " \320\274\320\220\302\267\321\207", nullptr));
        consumeButton->setText(QCoreApplication::translate("MainWindow", "\320\230\320\267\321\200\320\260\321\201\321\205\320\276\320\264\320\276\320\262\320\260\321\202\321\214", nullptr));
        remainingCapacityTitleLabel->setText(QCoreApplication::translate("MainWindow", "\320\236\321\201\321\202\320\260\320\273\320\276\321\201\321\214:", nullptr));
        remainingCapacityLabel->setText(QCoreApplication::translate("MainWindow", "\342\200\224 \320\274\320\220\302\267\321\207", nullptr));
        remainingPercentageTitleLabel->setText(QCoreApplication::translate("MainWindow", "\320\236\321\201\321\202\320\260\320\273\320\276\321\201\321\214 \320\262 \320\277\321\200\320\276\321\206\320\265\320\275\321\202\320\260\321\205:", nullptr));
        remainingPercentageLabel->setText(QCoreApplication::translate("MainWindow", "\342\200\224 %", nullptr));
        batteryIconTitleLabel->setText(QCoreApplication::translate("MainWindow", "\320\230\320\275\320\264\320\270\320\272\320\260\321\202\320\276\321\200:", nullptr));
        batteryIconLabel->setText(QString());
#if QT_CONFIG(tooltip)
        batteryIconLabel->setToolTip(QCoreApplication::translate("MainWindow", "\320\230\320\275\320\264\320\270\320\272\320\260\321\202\320\276\321\200 \320\276\321\201\321\202\320\260\320\262\321\210\320\265\320\271\321\201\321\217 \321\221\320\274\320\272\320\276\321\201\321\202\320\270", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
