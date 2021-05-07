#-------------------------------------------------
#
# Project created by QtCreator 2021-04-16T17:02:13
#
#-------------------------------------------------

# QXksx 1.4.0 (Qt6)
QXLSX_PARENTPATH=../../QXlsx-1.4.0/
QXLSX_HEADERPATH=../../QXlsx-1.4.0/header/
QXLSX_SOURCEPATH=../../QXlsx-1.4.0/source/
include(../../QXlsx-1.4.0/QXlsx.pri)

QT       -= gui
CONFIG += c++11
# TARGET = $$PWD/../SO_File/BTest
TEMPLATE = lib

DEFINES += BTEST_LIBRARY

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        BTest.cpp

HEADERS += \
        BTest.h \
        btest_global.h 

unix {
    target.path = /usr/lib
    INSTALLS += target
}
