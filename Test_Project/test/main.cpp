// main.cpp
// QXlsx // MIT License // https://github.com/j2doll/QXlsx
//

#include <QtGlobal>
#include <QCoreApplication>
#include <QtCore>
#include <QVariant>
#include <QDir>
#include <QDebug>
#include <QtGui/qguiapplication.h>

#include <iostream>
using namespace std;

// [0] include QXlsx headers
//#include "xlsxdocument.h"
//#include "xlsxchartsheet.h"
//#include "xlsxcellrange.h"
//#include "xlsxchart.h"
//#include "xlsxrichstring.h"
//#include "xlsxworkbook.h"
//using namespace QXlsx;

bool test();
bool LoadTest(QString libFileName);
typedef QThread* (*GetTest)();
QLibrary lib;
int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    LoadTest("NTest");
    LoadTest("ATest");
    LoadTest("BTest");

    return 0;
}

bool LoadTest(QString libFileName)
{
    GetTest getTestFunction;
    libFileName = "../../Test_Project/SO_File/lib" + libFileName +".so";
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
    QThread *p = getTestFunction();
    p->start();
    while(!p->isFinished()){
        QThread::msleep(10);
    }
    lib.unload();
    return true;
}

