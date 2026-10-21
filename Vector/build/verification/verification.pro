QT += widgets
CONFIG += c++17 console
CONFIG -= app_bundle
INCLUDEPATH += ../..
TARGET = vector_ui_verification
SOURCES += ../../main.cpp ../../mainwindow.cpp ../../vector3d.cpp ../../flightpathview.cpp
HEADERS += ../../mainwindow.h ../../vector3d.h ../../flightpathview.h
FORMS += ../../mainwindow.ui
