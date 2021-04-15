// main.cpp
// QXlsx // MIT License // https://github.com/j2doll/QXlsx
//

#include <QtGlobal>
#include <QCoreApplication>
#include <QtCore>
#include <QVariant>
#include <QDir>
#include <QDebug>

#include <iostream>
using namespace std;

// [0] include QXlsx headers
#include "xlsxdocument.h"
#include "xlsxchartsheet.h"
#include "xlsxcellrange.h"
#include "xlsxchart.h"
#include "xlsxrichstring.h"
#include "xlsxworkbook.h"
using namespace QXlsx;

bool test();
int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    test();	

    return 0;
}

bool test()
{
	QString libFileName;

   // in .h
    // typedef QThread* (*GetTest)();
    // QLibrary lib;

    GetTest getTestFunction;
   
    libFileName = "/tmp/" + libFileName;
    if(QFile(libFileName).exists())
    {
        lib.setFileName(libFileName);
        lib.load();
    }
    else
    {
        return false;
    }

    if(!lib.isLoaded())
    {
        return false;
    }

    getTestFunction= (GetTest)lib.resolve("GetTest");
    if(!getTestFunction)
    {
        return false;
    }
    getTestFunction();
    lib.unload();
    return true;
}

