 
TARGET = issue151
TEMPLATE = app

QT += core

CONFIG += console
CONFIG -= app_bundle

DEFINES += QT_DEPRECATED_WARNINGS

# QXlsx 1.4.0 (Qt6)
QXLSX_PARENTPATH=../../QXlsx-1.4.0/
QXLSX_HEADERPATH=../../QXlsx-1.4.0/header/
QXLSX_SOURCEPATH=../../QXlsx-1.4.0/source/
include(../../QXlsx-1.4.0/QXlsx.pri)

SOURCES += \
main.cpp

