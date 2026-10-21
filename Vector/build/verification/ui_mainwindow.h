/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "flightpathview.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *mainLayout;
    QLabel *titleLabel;
    QTabWidget *variantTabs;
    QWidget *velocityTab;
    QVBoxLayout *velocityLayout;
    QLabel *velocityHintLabel;
    QHBoxLayout *velocityInputsLayout;
    QGroupBox *droneVelocityGroup;
    QFormLayout *droneForm;
    QLabel *droneXLabel;
    QDoubleSpinBox *droneXSpinBox;
    QLabel *droneYLabel;
    QDoubleSpinBox *droneYSpinBox;
    QLabel *droneZLabel;
    QDoubleSpinBox *droneZSpinBox;
    QGroupBox *windVelocityGroup;
    QFormLayout *windForm;
    QLabel *windXLabel;
    QDoubleSpinBox *windXSpinBox;
    QLabel *windYLabel;
    QDoubleSpinBox *windYSpinBox;
    QLabel *windZLabel;
    QDoubleSpinBox *windZSpinBox;
    QPushButton *calculateVelocityButton;
    QGroupBox *velocityResultGroup;
    QFormLayout *velocityResultForm;
    QLabel *airVelocityCaption;
    QLabel *airVelocityValue;
    QLabel *windVelocityCaption;
    QLabel *windVelocityValue;
    QLabel *groundVelocityCaption;
    QLabel *groundVelocityValue;
    QLabel *groundSpeedCaption;
    QLabel *groundSpeedValue;
    QLabel *correctionCaption;
    QLabel *correctionValue;
    QGroupBox *windRiskGroup;
    QVBoxLayout *windRiskLayout;
    QLabel *windRiskHintLabel;
    QProgressBar *windRiskBar;
    QLabel *windRiskValue;
    QSpacerItem *velocitySpacer;
    QWidget *routeTab;
    QVBoxLayout *routeLayout;
    QLabel *routeHintLabel;
    QHBoxLayout *routeInputsLayout;
    QGroupBox *startPointGroup;
    QFormLayout *startForm;
    QLabel *startXLabel;
    QDoubleSpinBox *startXSpinBox;
    QLabel *startYLabel;
    QDoubleSpinBox *startYSpinBox;
    QLabel *startZLabel;
    QDoubleSpinBox *startZSpinBox;
    QGroupBox *finishPointGroup;
    QFormLayout *finishForm;
    QLabel *finishXLabel;
    QDoubleSpinBox *finishXSpinBox;
    QLabel *finishYLabel;
    QDoubleSpinBox *finishYSpinBox;
    QLabel *finishZLabel;
    QDoubleSpinBox *finishZSpinBox;
    QGroupBox *routeBoundsGroup;
    QGridLayout *routeBoundsGrid;
    QLabel *boundsXLabel;
    QLabel *boundsYLabel;
    QLabel *boundsZLabel;
    QLabel *boundsMinLabel;
    QLabel *boundsMaxLabel;
    QDoubleSpinBox *xMinSpinBox;
    QDoubleSpinBox *xMaxSpinBox;
    QDoubleSpinBox *yMinSpinBox;
    QDoubleSpinBox *yMaxSpinBox;
    QDoubleSpinBox *zMinSpinBox;
    QDoubleSpinBox *zMaxSpinBox;
    QLabel *routeBoundsStatusLabel;
    QPushButton *calculateRouteButton;
    QHBoxLayout *routeSceneLayout;
    QGroupBox *routePlotGroup;
    QVBoxLayout *routePlotLayout;
    FlightPathView *flightPathView;
    QGroupBox *routeResultGroup;
    QFormLayout *routeResultForm;
    QLabel *displacementCaption;
    QLabel *displacementValue;
    QLabel *deltaXCaption;
    QLabel *deltaXValue;
    QLabel *deltaYCaption;
    QLabel *deltaYValue;
    QLabel *deltaZCaption;
    QLabel *deltaZValue;
    QLabel *displacementLengthCaption;
    QLabel *displacementLengthValue;
    QLabel *routeCheckCaption;
    QLabel *routeCheckValue;
    QSpacerItem *routeSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1080, 800);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        mainLayout = new QVBoxLayout(centralwidget);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        mainLayout->setContentsMargins(20, 20, 20, 20);
        titleLabel = new QLabel(centralwidget);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        titleLabel->setFont(font);

        mainLayout->addWidget(titleLabel);

        variantTabs = new QTabWidget(centralwidget);
        variantTabs->setObjectName(QString::fromUtf8("variantTabs"));
        velocityTab = new QWidget();
        velocityTab->setObjectName(QString::fromUtf8("velocityTab"));
        velocityLayout = new QVBoxLayout(velocityTab);
        velocityLayout->setObjectName(QString::fromUtf8("velocityLayout"));
        velocityHintLabel = new QLabel(velocityTab);
        velocityHintLabel->setObjectName(QString::fromUtf8("velocityHintLabel"));
        velocityHintLabel->setWordWrap(true);

        velocityLayout->addWidget(velocityHintLabel);

        velocityInputsLayout = new QHBoxLayout();
        velocityInputsLayout->setObjectName(QString::fromUtf8("velocityInputsLayout"));
        droneVelocityGroup = new QGroupBox(velocityTab);
        droneVelocityGroup->setObjectName(QString::fromUtf8("droneVelocityGroup"));
        droneForm = new QFormLayout(droneVelocityGroup);
        droneForm->setObjectName(QString::fromUtf8("droneForm"));
        droneXLabel = new QLabel(droneVelocityGroup);
        droneXLabel->setObjectName(QString::fromUtf8("droneXLabel"));

        droneForm->setWidget(0, QFormLayout::LabelRole, droneXLabel);

        droneXSpinBox = new QDoubleSpinBox(droneVelocityGroup);
        droneXSpinBox->setObjectName(QString::fromUtf8("droneXSpinBox"));
        droneXSpinBox->setDecimals(3);
        droneXSpinBox->setMinimum(-1000000.000000000000000);
        droneXSpinBox->setMaximum(1000000.000000000000000);
        droneXSpinBox->setValue(10.000000000000000);

        droneForm->setWidget(0, QFormLayout::FieldRole, droneXSpinBox);

        droneYLabel = new QLabel(droneVelocityGroup);
        droneYLabel->setObjectName(QString::fromUtf8("droneYLabel"));

        droneForm->setWidget(1, QFormLayout::LabelRole, droneYLabel);

        droneYSpinBox = new QDoubleSpinBox(droneVelocityGroup);
        droneYSpinBox->setObjectName(QString::fromUtf8("droneYSpinBox"));
        droneYSpinBox->setDecimals(3);
        droneYSpinBox->setMinimum(-1000000.000000000000000);
        droneYSpinBox->setMaximum(1000000.000000000000000);
        droneYSpinBox->setValue(4.000000000000000);

        droneForm->setWidget(1, QFormLayout::FieldRole, droneYSpinBox);

        droneZLabel = new QLabel(droneVelocityGroup);
        droneZLabel->setObjectName(QString::fromUtf8("droneZLabel"));

        droneForm->setWidget(2, QFormLayout::LabelRole, droneZLabel);

        droneZSpinBox = new QDoubleSpinBox(droneVelocityGroup);
        droneZSpinBox->setObjectName(QString::fromUtf8("droneZSpinBox"));
        droneZSpinBox->setDecimals(3);
        droneZSpinBox->setMinimum(-1000000.000000000000000);
        droneZSpinBox->setMaximum(1000000.000000000000000);
        droneZSpinBox->setValue(-1.000000000000000);

        droneForm->setWidget(2, QFormLayout::FieldRole, droneZSpinBox);


        velocityInputsLayout->addWidget(droneVelocityGroup);

        windVelocityGroup = new QGroupBox(velocityTab);
        windVelocityGroup->setObjectName(QString::fromUtf8("windVelocityGroup"));
        windForm = new QFormLayout(windVelocityGroup);
        windForm->setObjectName(QString::fromUtf8("windForm"));
        windXLabel = new QLabel(windVelocityGroup);
        windXLabel->setObjectName(QString::fromUtf8("windXLabel"));

        windForm->setWidget(0, QFormLayout::LabelRole, windXLabel);

        windXSpinBox = new QDoubleSpinBox(windVelocityGroup);
        windXSpinBox->setObjectName(QString::fromUtf8("windXSpinBox"));
        windXSpinBox->setDecimals(3);
        windXSpinBox->setMinimum(-1000000.000000000000000);
        windXSpinBox->setMaximum(1000000.000000000000000);
        windXSpinBox->setValue(2.000000000000000);

        windForm->setWidget(0, QFormLayout::FieldRole, windXSpinBox);

        windYLabel = new QLabel(windVelocityGroup);
        windYLabel->setObjectName(QString::fromUtf8("windYLabel"));

        windForm->setWidget(1, QFormLayout::LabelRole, windYLabel);

        windYSpinBox = new QDoubleSpinBox(windVelocityGroup);
        windYSpinBox->setObjectName(QString::fromUtf8("windYSpinBox"));
        windYSpinBox->setDecimals(3);
        windYSpinBox->setMinimum(-1000000.000000000000000);
        windYSpinBox->setMaximum(1000000.000000000000000);
        windYSpinBox->setValue(-1.000000000000000);

        windForm->setWidget(1, QFormLayout::FieldRole, windYSpinBox);

        windZLabel = new QLabel(windVelocityGroup);
        windZLabel->setObjectName(QString::fromUtf8("windZLabel"));

        windForm->setWidget(2, QFormLayout::LabelRole, windZLabel);

        windZSpinBox = new QDoubleSpinBox(windVelocityGroup);
        windZSpinBox->setObjectName(QString::fromUtf8("windZSpinBox"));
        windZSpinBox->setDecimals(3);
        windZSpinBox->setMinimum(-1000000.000000000000000);
        windZSpinBox->setMaximum(1000000.000000000000000);
        windZSpinBox->setValue(0.000000000000000);

        windForm->setWidget(2, QFormLayout::FieldRole, windZSpinBox);


        velocityInputsLayout->addWidget(windVelocityGroup);


        velocityLayout->addLayout(velocityInputsLayout);

        calculateVelocityButton = new QPushButton(velocityTab);
        calculateVelocityButton->setObjectName(QString::fromUtf8("calculateVelocityButton"));

        velocityLayout->addWidget(calculateVelocityButton);

        velocityResultGroup = new QGroupBox(velocityTab);
        velocityResultGroup->setObjectName(QString::fromUtf8("velocityResultGroup"));
        velocityResultForm = new QFormLayout(velocityResultGroup);
        velocityResultForm->setObjectName(QString::fromUtf8("velocityResultForm"));
        airVelocityCaption = new QLabel(velocityResultGroup);
        airVelocityCaption->setObjectName(QString::fromUtf8("airVelocityCaption"));

        velocityResultForm->setWidget(0, QFormLayout::LabelRole, airVelocityCaption);

        airVelocityValue = new QLabel(velocityResultGroup);
        airVelocityValue->setObjectName(QString::fromUtf8("airVelocityValue"));
        airVelocityValue->setTextInteractionFlags(Qt::TextSelectableByMouse);

        velocityResultForm->setWidget(0, QFormLayout::FieldRole, airVelocityValue);

        windVelocityCaption = new QLabel(velocityResultGroup);
        windVelocityCaption->setObjectName(QString::fromUtf8("windVelocityCaption"));

        velocityResultForm->setWidget(1, QFormLayout::LabelRole, windVelocityCaption);

        windVelocityValue = new QLabel(velocityResultGroup);
        windVelocityValue->setObjectName(QString::fromUtf8("windVelocityValue"));
        windVelocityValue->setTextInteractionFlags(Qt::TextSelectableByMouse);

        velocityResultForm->setWidget(1, QFormLayout::FieldRole, windVelocityValue);

        groundVelocityCaption = new QLabel(velocityResultGroup);
        groundVelocityCaption->setObjectName(QString::fromUtf8("groundVelocityCaption"));

        velocityResultForm->setWidget(2, QFormLayout::LabelRole, groundVelocityCaption);

        groundVelocityValue = new QLabel(velocityResultGroup);
        groundVelocityValue->setObjectName(QString::fromUtf8("groundVelocityValue"));
        groundVelocityValue->setTextInteractionFlags(Qt::TextSelectableByMouse);

        velocityResultForm->setWidget(2, QFormLayout::FieldRole, groundVelocityValue);

        groundSpeedCaption = new QLabel(velocityResultGroup);
        groundSpeedCaption->setObjectName(QString::fromUtf8("groundSpeedCaption"));

        velocityResultForm->setWidget(3, QFormLayout::LabelRole, groundSpeedCaption);

        groundSpeedValue = new QLabel(velocityResultGroup);
        groundSpeedValue->setObjectName(QString::fromUtf8("groundSpeedValue"));
        groundSpeedValue->setTextInteractionFlags(Qt::TextSelectableByMouse);

        velocityResultForm->setWidget(3, QFormLayout::FieldRole, groundSpeedValue);

        correctionCaption = new QLabel(velocityResultGroup);
        correctionCaption->setObjectName(QString::fromUtf8("correctionCaption"));

        velocityResultForm->setWidget(4, QFormLayout::LabelRole, correctionCaption);

        correctionValue = new QLabel(velocityResultGroup);
        correctionValue->setObjectName(QString::fromUtf8("correctionValue"));
        correctionValue->setTextInteractionFlags(Qt::TextSelectableByMouse);

        velocityResultForm->setWidget(4, QFormLayout::FieldRole, correctionValue);


        velocityLayout->addWidget(velocityResultGroup);

        windRiskGroup = new QGroupBox(velocityTab);
        windRiskGroup->setObjectName(QString::fromUtf8("windRiskGroup"));
        windRiskLayout = new QVBoxLayout(windRiskGroup);
        windRiskLayout->setObjectName(QString::fromUtf8("windRiskLayout"));
        windRiskHintLabel = new QLabel(windRiskGroup);
        windRiskHintLabel->setObjectName(QString::fromUtf8("windRiskHintLabel"));
        windRiskHintLabel->setWordWrap(true);

        windRiskLayout->addWidget(windRiskHintLabel);

        windRiskBar = new QProgressBar(windRiskGroup);
        windRiskBar->setObjectName(QString::fromUtf8("windRiskBar"));
        windRiskBar->setMaximum(100);
        windRiskBar->setValue(0);

        windRiskLayout->addWidget(windRiskBar);

        windRiskValue = new QLabel(windRiskGroup);
        windRiskValue->setObjectName(QString::fromUtf8("windRiskValue"));

        windRiskLayout->addWidget(windRiskValue);


        velocityLayout->addWidget(windRiskGroup);

        velocitySpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        velocityLayout->addItem(velocitySpacer);

        variantTabs->addTab(velocityTab, QString());
        routeTab = new QWidget();
        routeTab->setObjectName(QString::fromUtf8("routeTab"));
        routeLayout = new QVBoxLayout(routeTab);
        routeLayout->setObjectName(QString::fromUtf8("routeLayout"));
        routeHintLabel = new QLabel(routeTab);
        routeHintLabel->setObjectName(QString::fromUtf8("routeHintLabel"));
        routeHintLabel->setWordWrap(true);

        routeLayout->addWidget(routeHintLabel);

        routeInputsLayout = new QHBoxLayout();
        routeInputsLayout->setObjectName(QString::fromUtf8("routeInputsLayout"));
        startPointGroup = new QGroupBox(routeTab);
        startPointGroup->setObjectName(QString::fromUtf8("startPointGroup"));
        startForm = new QFormLayout(startPointGroup);
        startForm->setObjectName(QString::fromUtf8("startForm"));
        startXLabel = new QLabel(startPointGroup);
        startXLabel->setObjectName(QString::fromUtf8("startXLabel"));

        startForm->setWidget(0, QFormLayout::LabelRole, startXLabel);

        startXSpinBox = new QDoubleSpinBox(startPointGroup);
        startXSpinBox->setObjectName(QString::fromUtf8("startXSpinBox"));
        startXSpinBox->setDecimals(3);
        startXSpinBox->setMinimum(-1000000.000000000000000);
        startXSpinBox->setMaximum(1000000.000000000000000);
        startXSpinBox->setValue(0.000000000000000);

        startForm->setWidget(0, QFormLayout::FieldRole, startXSpinBox);

        startYLabel = new QLabel(startPointGroup);
        startYLabel->setObjectName(QString::fromUtf8("startYLabel"));

        startForm->setWidget(1, QFormLayout::LabelRole, startYLabel);

        startYSpinBox = new QDoubleSpinBox(startPointGroup);
        startYSpinBox->setObjectName(QString::fromUtf8("startYSpinBox"));
        startYSpinBox->setDecimals(3);
        startYSpinBox->setMinimum(-1000000.000000000000000);
        startYSpinBox->setMaximum(1000000.000000000000000);
        startYSpinBox->setValue(0.000000000000000);

        startForm->setWidget(1, QFormLayout::FieldRole, startYSpinBox);

        startZLabel = new QLabel(startPointGroup);
        startZLabel->setObjectName(QString::fromUtf8("startZLabel"));

        startForm->setWidget(2, QFormLayout::LabelRole, startZLabel);

        startZSpinBox = new QDoubleSpinBox(startPointGroup);
        startZSpinBox->setObjectName(QString::fromUtf8("startZSpinBox"));
        startZSpinBox->setDecimals(3);
        startZSpinBox->setMinimum(-1000000.000000000000000);
        startZSpinBox->setMaximum(1000000.000000000000000);
        startZSpinBox->setValue(100.000000000000000);

        startForm->setWidget(2, QFormLayout::FieldRole, startZSpinBox);


        routeInputsLayout->addWidget(startPointGroup);

        finishPointGroup = new QGroupBox(routeTab);
        finishPointGroup->setObjectName(QString::fromUtf8("finishPointGroup"));
        finishForm = new QFormLayout(finishPointGroup);
        finishForm->setObjectName(QString::fromUtf8("finishForm"));
        finishXLabel = new QLabel(finishPointGroup);
        finishXLabel->setObjectName(QString::fromUtf8("finishXLabel"));

        finishForm->setWidget(0, QFormLayout::LabelRole, finishXLabel);

        finishXSpinBox = new QDoubleSpinBox(finishPointGroup);
        finishXSpinBox->setObjectName(QString::fromUtf8("finishXSpinBox"));
        finishXSpinBox->setDecimals(3);
        finishXSpinBox->setMinimum(-1000000.000000000000000);
        finishXSpinBox->setMaximum(1000000.000000000000000);
        finishXSpinBox->setValue(300.000000000000000);

        finishForm->setWidget(0, QFormLayout::FieldRole, finishXSpinBox);

        finishYLabel = new QLabel(finishPointGroup);
        finishYLabel->setObjectName(QString::fromUtf8("finishYLabel"));

        finishForm->setWidget(1, QFormLayout::LabelRole, finishYLabel);

        finishYSpinBox = new QDoubleSpinBox(finishPointGroup);
        finishYSpinBox->setObjectName(QString::fromUtf8("finishYSpinBox"));
        finishYSpinBox->setDecimals(3);
        finishYSpinBox->setMinimum(-1000000.000000000000000);
        finishYSpinBox->setMaximum(1000000.000000000000000);
        finishYSpinBox->setValue(200.000000000000000);

        finishForm->setWidget(1, QFormLayout::FieldRole, finishYSpinBox);

        finishZLabel = new QLabel(finishPointGroup);
        finishZLabel->setObjectName(QString::fromUtf8("finishZLabel"));

        finishForm->setWidget(2, QFormLayout::LabelRole, finishZLabel);

        finishZSpinBox = new QDoubleSpinBox(finishPointGroup);
        finishZSpinBox->setObjectName(QString::fromUtf8("finishZSpinBox"));
        finishZSpinBox->setDecimals(3);
        finishZSpinBox->setMinimum(-1000000.000000000000000);
        finishZSpinBox->setMaximum(1000000.000000000000000);
        finishZSpinBox->setValue(150.000000000000000);

        finishForm->setWidget(2, QFormLayout::FieldRole, finishZSpinBox);


        routeInputsLayout->addWidget(finishPointGroup);


        routeLayout->addLayout(routeInputsLayout);

        routeBoundsGroup = new QGroupBox(routeTab);
        routeBoundsGroup->setObjectName(QString::fromUtf8("routeBoundsGroup"));
        routeBoundsGrid = new QGridLayout(routeBoundsGroup);
        routeBoundsGrid->setObjectName(QString::fromUtf8("routeBoundsGrid"));
        boundsXLabel = new QLabel(routeBoundsGroup);
        boundsXLabel->setObjectName(QString::fromUtf8("boundsXLabel"));

        routeBoundsGrid->addWidget(boundsXLabel, 0, 1, 1, 1);

        boundsYLabel = new QLabel(routeBoundsGroup);
        boundsYLabel->setObjectName(QString::fromUtf8("boundsYLabel"));

        routeBoundsGrid->addWidget(boundsYLabel, 0, 2, 1, 1);

        boundsZLabel = new QLabel(routeBoundsGroup);
        boundsZLabel->setObjectName(QString::fromUtf8("boundsZLabel"));

        routeBoundsGrid->addWidget(boundsZLabel, 0, 3, 1, 1);

        boundsMinLabel = new QLabel(routeBoundsGroup);
        boundsMinLabel->setObjectName(QString::fromUtf8("boundsMinLabel"));

        routeBoundsGrid->addWidget(boundsMinLabel, 1, 0, 1, 1);

        boundsMaxLabel = new QLabel(routeBoundsGroup);
        boundsMaxLabel->setObjectName(QString::fromUtf8("boundsMaxLabel"));

        routeBoundsGrid->addWidget(boundsMaxLabel, 2, 0, 1, 1);

        xMinSpinBox = new QDoubleSpinBox(routeBoundsGroup);
        xMinSpinBox->setObjectName(QString::fromUtf8("xMinSpinBox"));
        xMinSpinBox->setDecimals(3);
        xMinSpinBox->setMinimum(-1000000.000000000000000);
        xMinSpinBox->setMaximum(1000000.000000000000000);
        xMinSpinBox->setValue(0.000000000000000);

        routeBoundsGrid->addWidget(xMinSpinBox, 1, 1, 1, 1);

        xMaxSpinBox = new QDoubleSpinBox(routeBoundsGroup);
        xMaxSpinBox->setObjectName(QString::fromUtf8("xMaxSpinBox"));
        xMaxSpinBox->setDecimals(3);
        xMaxSpinBox->setMinimum(-1000000.000000000000000);
        xMaxSpinBox->setMaximum(1000000.000000000000000);
        xMaxSpinBox->setValue(300.000000000000000);

        routeBoundsGrid->addWidget(xMaxSpinBox, 2, 1, 1, 1);

        yMinSpinBox = new QDoubleSpinBox(routeBoundsGroup);
        yMinSpinBox->setObjectName(QString::fromUtf8("yMinSpinBox"));
        yMinSpinBox->setDecimals(3);
        yMinSpinBox->setMinimum(-1000000.000000000000000);
        yMinSpinBox->setMaximum(1000000.000000000000000);
        yMinSpinBox->setValue(0.000000000000000);

        routeBoundsGrid->addWidget(yMinSpinBox, 1, 2, 1, 1);

        yMaxSpinBox = new QDoubleSpinBox(routeBoundsGroup);
        yMaxSpinBox->setObjectName(QString::fromUtf8("yMaxSpinBox"));
        yMaxSpinBox->setDecimals(3);
        yMaxSpinBox->setMinimum(-1000000.000000000000000);
        yMaxSpinBox->setMaximum(1000000.000000000000000);
        yMaxSpinBox->setValue(200.000000000000000);

        routeBoundsGrid->addWidget(yMaxSpinBox, 2, 2, 1, 1);

        zMinSpinBox = new QDoubleSpinBox(routeBoundsGroup);
        zMinSpinBox->setObjectName(QString::fromUtf8("zMinSpinBox"));
        zMinSpinBox->setDecimals(3);
        zMinSpinBox->setMinimum(-1000000.000000000000000);
        zMinSpinBox->setMaximum(1000000.000000000000000);
        zMinSpinBox->setValue(0.000000000000000);

        routeBoundsGrid->addWidget(zMinSpinBox, 1, 3, 1, 1);

        zMaxSpinBox = new QDoubleSpinBox(routeBoundsGroup);
        zMaxSpinBox->setObjectName(QString::fromUtf8("zMaxSpinBox"));
        zMaxSpinBox->setDecimals(3);
        zMaxSpinBox->setMinimum(-1000000.000000000000000);
        zMaxSpinBox->setMaximum(1000000.000000000000000);
        zMaxSpinBox->setValue(150.000000000000000);

        routeBoundsGrid->addWidget(zMaxSpinBox, 2, 3, 1, 1);

        routeBoundsStatusLabel = new QLabel(routeBoundsGroup);
        routeBoundsStatusLabel->setObjectName(QString::fromUtf8("routeBoundsStatusLabel"));
        routeBoundsStatusLabel->setWordWrap(true);

        routeBoundsGrid->addWidget(routeBoundsStatusLabel, 3, 0, 1, 4);


        routeLayout->addWidget(routeBoundsGroup);

        calculateRouteButton = new QPushButton(routeTab);
        calculateRouteButton->setObjectName(QString::fromUtf8("calculateRouteButton"));

        routeLayout->addWidget(calculateRouteButton);

        routeSceneLayout = new QHBoxLayout();
        routeSceneLayout->setObjectName(QString::fromUtf8("routeSceneLayout"));
        routePlotGroup = new QGroupBox(routeTab);
        routePlotGroup->setObjectName(QString::fromUtf8("routePlotGroup"));
        routePlotLayout = new QVBoxLayout(routePlotGroup);
        routePlotLayout->setObjectName(QString::fromUtf8("routePlotLayout"));
        flightPathView = new FlightPathView(routePlotGroup);
        flightPathView->setObjectName(QString::fromUtf8("flightPathView"));
        flightPathView->setMinimumSize(QSize(480, 290));

        routePlotLayout->addWidget(flightPathView);


        routeSceneLayout->addWidget(routePlotGroup);

        routeResultGroup = new QGroupBox(routeTab);
        routeResultGroup->setObjectName(QString::fromUtf8("routeResultGroup"));
        routeResultForm = new QFormLayout(routeResultGroup);
        routeResultForm->setObjectName(QString::fromUtf8("routeResultForm"));
        displacementCaption = new QLabel(routeResultGroup);
        displacementCaption->setObjectName(QString::fromUtf8("displacementCaption"));

        routeResultForm->setWidget(0, QFormLayout::LabelRole, displacementCaption);

        displacementValue = new QLabel(routeResultGroup);
        displacementValue->setObjectName(QString::fromUtf8("displacementValue"));
        displacementValue->setTextInteractionFlags(Qt::TextSelectableByMouse);

        routeResultForm->setWidget(0, QFormLayout::FieldRole, displacementValue);

        deltaXCaption = new QLabel(routeResultGroup);
        deltaXCaption->setObjectName(QString::fromUtf8("deltaXCaption"));

        routeResultForm->setWidget(1, QFormLayout::LabelRole, deltaXCaption);

        deltaXValue = new QLabel(routeResultGroup);
        deltaXValue->setObjectName(QString::fromUtf8("deltaXValue"));
        deltaXValue->setTextInteractionFlags(Qt::TextSelectableByMouse);

        routeResultForm->setWidget(1, QFormLayout::FieldRole, deltaXValue);

        deltaYCaption = new QLabel(routeResultGroup);
        deltaYCaption->setObjectName(QString::fromUtf8("deltaYCaption"));

        routeResultForm->setWidget(2, QFormLayout::LabelRole, deltaYCaption);

        deltaYValue = new QLabel(routeResultGroup);
        deltaYValue->setObjectName(QString::fromUtf8("deltaYValue"));
        deltaYValue->setTextInteractionFlags(Qt::TextSelectableByMouse);

        routeResultForm->setWidget(2, QFormLayout::FieldRole, deltaYValue);

        deltaZCaption = new QLabel(routeResultGroup);
        deltaZCaption->setObjectName(QString::fromUtf8("deltaZCaption"));

        routeResultForm->setWidget(3, QFormLayout::LabelRole, deltaZCaption);

        deltaZValue = new QLabel(routeResultGroup);
        deltaZValue->setObjectName(QString::fromUtf8("deltaZValue"));
        deltaZValue->setTextInteractionFlags(Qt::TextSelectableByMouse);

        routeResultForm->setWidget(3, QFormLayout::FieldRole, deltaZValue);

        displacementLengthCaption = new QLabel(routeResultGroup);
        displacementLengthCaption->setObjectName(QString::fromUtf8("displacementLengthCaption"));

        routeResultForm->setWidget(4, QFormLayout::LabelRole, displacementLengthCaption);

        displacementLengthValue = new QLabel(routeResultGroup);
        displacementLengthValue->setObjectName(QString::fromUtf8("displacementLengthValue"));
        displacementLengthValue->setTextInteractionFlags(Qt::TextSelectableByMouse);

        routeResultForm->setWidget(4, QFormLayout::FieldRole, displacementLengthValue);

        routeCheckCaption = new QLabel(routeResultGroup);
        routeCheckCaption->setObjectName(QString::fromUtf8("routeCheckCaption"));

        routeResultForm->setWidget(5, QFormLayout::LabelRole, routeCheckCaption);

        routeCheckValue = new QLabel(routeResultGroup);
        routeCheckValue->setObjectName(QString::fromUtf8("routeCheckValue"));
        routeCheckValue->setTextInteractionFlags(Qt::TextSelectableByMouse);

        routeResultForm->setWidget(5, QFormLayout::FieldRole, routeCheckValue);


        routeSceneLayout->addWidget(routeResultGroup);


        routeLayout->addLayout(routeSceneLayout);

        routeSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        routeLayout->addItem(routeSpacer);

        variantTabs->addTab(routeTab, QString());

        mainLayout->addWidget(variantTabs);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1080, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        variantTabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\260\320\272\321\202\320\270\321\207\320\265\321\201\320\272\320\276\320\265 \320\267\320\260\320\275\321\217\321\202\320\270\320\265 \342\204\2262 \342\200\224 Vector3D", nullptr));
        titleLabel->setText(QCoreApplication::translate("MainWindow", "\320\236\320\277\320\265\321\200\320\260\321\206\320\270\320\270 \321\201 \321\202\321\200\321\221\321\205\320\274\320\265\321\200\320\275\321\213\320\274\320\270 \320\262\320\265\320\272\321\202\320\276\321\200\320\260\320\274\320\270", nullptr));
        velocityHintLabel->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\262\320\276\320\267\320\264\321\203\321\210\320\275\321\203\321\216 \321\201\320\272\320\276\321\200\320\276\321\201\321\202\321\214 \320\221\320\237\320\233\320\220 \320\270 \321\201\320\272\320\276\321\200\320\276\321\201\321\202\321\214 \320\262\320\265\321\202\321\200\320\260 \320\277\320\276 \320\276\321\201\321\217\320\274 X, Y, Z.", nullptr));
        droneVelocityGroup->setTitle(QCoreApplication::translate("MainWindow", "\320\222\320\276\320\267\320\264\321\203\321\210\320\275\320\260\321\217 \321\201\320\272\320\276\321\200\320\276\321\201\321\202\321\214 \320\221\320\237\320\233\320\220, \320\274/\321\201", nullptr));
        droneXLabel->setText(QCoreApplication::translate("MainWindow", "X:", nullptr));
        droneYLabel->setText(QCoreApplication::translate("MainWindow", "Y:", nullptr));
        droneZLabel->setText(QCoreApplication::translate("MainWindow", "Z:", nullptr));
        windVelocityGroup->setTitle(QCoreApplication::translate("MainWindow", "\320\241\320\272\320\276\321\200\320\276\321\201\321\202\321\214 \320\262\320\265\321\202\321\200\320\260, \320\274/\321\201", nullptr));
        windXLabel->setText(QCoreApplication::translate("MainWindow", "X:", nullptr));
        windYLabel->setText(QCoreApplication::translate("MainWindow", "Y:", nullptr));
        windZLabel->setText(QCoreApplication::translate("MainWindow", "Z:", nullptr));
        calculateVelocityButton->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214 \321\201\320\272\320\276\321\200\320\276\321\201\321\202\321\214", nullptr));
        velocityResultGroup->setTitle(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202\321\213", nullptr));
        airVelocityCaption->setText(QCoreApplication::translate("MainWindow", "\320\222\320\276\320\267\320\264\321\203\321\210\320\275\320\260\321\217 \321\201\320\272\320\276\321\200\320\276\321\201\321\202\321\214:", nullptr));
        airVelocityValue->setText(QCoreApplication::translate("MainWindow", "\342\200\224", nullptr));
        windVelocityCaption->setText(QCoreApplication::translate("MainWindow", "\320\241\320\272\320\276\321\200\320\276\321\201\321\202\321\214 \320\262\320\265\321\202\321\200\320\260:", nullptr));
        windVelocityValue->setText(QCoreApplication::translate("MainWindow", "\342\200\224", nullptr));
        groundVelocityCaption->setText(QCoreApplication::translate("MainWindow", "\320\241\320\272\320\276\321\200\320\276\321\201\321\202\321\214 \320\276\321\202\320\275\320\276\321\201\320\270\321\202\320\265\320\273\321\214\320\275\320\276 \320\267\320\265\320\274\320\273\320\270:", nullptr));
        groundVelocityValue->setText(QCoreApplication::translate("MainWindow", "\342\200\224", nullptr));
        groundSpeedCaption->setText(QCoreApplication::translate("MainWindow", "\320\234\320\276\320\264\321\203\320\273\321\214 \321\201\320\272\320\276\321\200\320\276\321\201\321\202\320\270:", nullptr));
        groundSpeedValue->setText(QCoreApplication::translate("MainWindow", "\342\200\224", nullptr));
        correctionCaption->setText(QCoreApplication::translate("MainWindow", "\320\243\320\277\321\200\320\260\320\262\320\273\321\217\321\216\321\211\320\265\320\265 \320\262\320\276\320\267\320\264\320\265\320\271\321\201\321\202\320\262\320\270\320\265 (\303\227 0,8):", nullptr));
        correctionValue->setText(QCoreApplication::translate("MainWindow", "\342\200\224", nullptr));
        windRiskGroup->setTitle(QCoreApplication::translate("MainWindow", "\320\232\321\200\320\270\321\202\320\270\321\207\320\275\320\276\321\201\321\202\321\214 \320\277\320\276\320\273\321\221\321\202\320\260 \320\270\320\267-\320\267\320\260 \320\262\320\265\321\202\321\200\320\260", nullptr));
        windRiskHintLabel->setText(QCoreApplication::translate("MainWindow", "\320\243\321\207\320\265\320\261\320\275\320\260\321\217 \321\210\320\272\320\260\320\273\320\260: \320\274\320\276\320\264\321\203\320\273\321\214 \321\201\320\272\320\276\321\200\320\276\321\201\321\202\320\270 \320\262\320\265\321\202\321\200\320\260 / \320\274\320\276\320\264\321\203\320\273\321\214 \320\262\320\276\320\267\320\264\321\203\321\210\320\275\320\276\320\271 \321\201\320\272\320\276\321\200\320\276\321\201\321\202\320\270 \320\221\320\237\320\233\320\220. \320\235\320\265 \321\217\320\262\320\273\321\217\320\265\321\202\321\201\321\217 \320\276\321\206\320\265\320\275\320\272\320\276\320\271 \320\261\320\265\320\267\320\276\320\277\320\260\321\201\320\275\320\276\321\201\321\202\320\270 \321\200\320\265\320\260\320\273\321\214\320\275\320\276\320\263\320\276 \320\277\320\276\320\273\321\221\321\202\320\260.", nullptr));
        windRiskBar->setFormat(QCoreApplication::translate("MainWindow", "%p%", nullptr));
        windRiskValue->setText(QCoreApplication::translate("MainWindow", "\342\200\224", nullptr));
        variantTabs->setTabText(variantTabs->indexOf(velocityTab), QCoreApplication::translate("MainWindow", "\320\222\320\260\321\200\320\270\320\260\320\275\321\202 1 \342\200\224 \321\201\320\272\320\276\321\200\320\276\321\201\321\202\321\214 \320\221\320\237\320\233\320\220", nullptr));
        routeHintLabel->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\272\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\321\213 \320\275\320\260\321\207\320\260\320\273\321\214\320\275\320\276\320\271 \320\270 \320\272\320\276\320\275\320\265\321\207\320\275\320\276\320\271 \321\202\320\276\321\207\320\265\320\272 \320\274\320\260\321\200\321\210\321\200\321\203\321\202\320\260 \320\277\320\276 \320\276\321\201\321\217\320\274 X, Y, Z.", nullptr));
        startPointGroup->setTitle(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\207\320\260\320\273\321\214\320\275\320\260\321\217 \321\202\320\276\321\207\320\272\320\260, \320\274", nullptr));
        startXLabel->setText(QCoreApplication::translate("MainWindow", "X:", nullptr));
        startYLabel->setText(QCoreApplication::translate("MainWindow", "Y:", nullptr));
        startZLabel->setText(QCoreApplication::translate("MainWindow", "Z:", nullptr));
        finishPointGroup->setTitle(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\275\320\265\321\207\320\275\320\260\321\217 \321\202\320\276\321\207\320\272\320\260, \320\274", nullptr));
        finishXLabel->setText(QCoreApplication::translate("MainWindow", "X:", nullptr));
        finishYLabel->setText(QCoreApplication::translate("MainWindow", "Y:", nullptr));
        finishZLabel->setText(QCoreApplication::translate("MainWindow", "Z:", nullptr));
        routeBoundsGroup->setTitle(QCoreApplication::translate("MainWindow", "\320\223\321\200\320\260\320\275\320\270\321\206\321\213 3D-\320\276\320\261\320\273\320\260\321\201\321\202\320\270, \320\274", nullptr));
        boundsXLabel->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        boundsYLabel->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        boundsZLabel->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        boundsMinLabel->setText(QCoreApplication::translate("MainWindow", "\320\234\320\270\320\275\320\270\320\274\321\203\320\274", nullptr));
        boundsMaxLabel->setText(QCoreApplication::translate("MainWindow", "\320\234\320\260\320\272\321\201\320\270\320\274\321\203\320\274", nullptr));
        routeBoundsStatusLabel->setText(QCoreApplication::translate("MainWindow", "\320\223\321\200\320\260\320\275\320\270\321\206\321\213 \320\267\320\260\320\264\320\260\321\216\321\202 \320\262\320\270\320\264\320\270\320\274\321\203\321\216 \320\276\320\261\320\273\320\260\321\201\321\202\321\214 \320\274\320\260\321\200\321\210\321\200\321\203\321\202\320\260.", nullptr));
        calculateRouteButton->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214 \320\277\320\265\321\200\320\265\320\274\320\265\321\211\320\265\320\275\320\270\320\265", nullptr));
        routePlotGroup->setTitle(QCoreApplication::translate("MainWindow", "3D-\321\201\321\205\320\265\320\274\320\260 \320\274\320\260\321\200\321\210\321\200\321\203\321\202\320\260", nullptr));
        routeResultGroup->setTitle(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202\321\213", nullptr));
        displacementCaption->setText(QCoreApplication::translate("MainWindow", "\320\222\320\265\320\272\321\202\320\276\321\200 \320\277\320\265\321\200\320\265\320\274\320\265\321\211\320\265\320\275\320\270\321\217:", nullptr));
        displacementValue->setText(QCoreApplication::translate("MainWindow", "\342\200\224", nullptr));
        deltaXCaption->setText(QCoreApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\265\320\275\320\270\320\265 X:", nullptr));
        deltaXValue->setText(QCoreApplication::translate("MainWindow", "\342\200\224", nullptr));
        deltaYCaption->setText(QCoreApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\265\320\275\320\270\320\265 Y:", nullptr));
        deltaYValue->setText(QCoreApplication::translate("MainWindow", "\342\200\224", nullptr));
        deltaZCaption->setText(QCoreApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\265\320\275\320\270\320\265 \320\262\321\213\321\201\320\276\321\202\321\213 (Z):", nullptr));
        deltaZValue->setText(QCoreApplication::translate("MainWindow", "\342\200\224", nullptr));
        displacementLengthCaption->setText(QCoreApplication::translate("MainWindow", "\320\224\320\273\320\270\320\275\320\260 \320\277\320\265\321\200\320\265\320\274\320\265\321\211\320\265\320\275\320\270\321\217:", nullptr));
        displacementLengthValue->setText(QCoreApplication::translate("MainWindow", "\342\200\224", nullptr));
        routeCheckCaption->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\320\262\320\265\321\200\320\272\320\260 start + \316\224 == finish:", nullptr));
        routeCheckValue->setText(QCoreApplication::translate("MainWindow", "\342\200\224", nullptr));
        variantTabs->setTabText(variantTabs->indexOf(routeTab), QCoreApplication::translate("MainWindow", "\320\222\320\260\321\200\320\270\320\260\320\275\321\202 2 \342\200\224 \320\277\320\265\321\200\320\265\320\274\320\265\321\211\320\265\320\275\320\270\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
