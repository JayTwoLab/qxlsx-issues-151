
#include <QtGlobal>
#include <QObject>
#include <QString>
#include <QFile>

#include "ATest.h"
#include <QDebug>
#include "xlsxdocument.h"

ATest::ATest()
{
//    QString excelPath = "/home/nvme/Desktop/EmptyForTest.xlsx";
//    if (QFile(excelPath).exists())
//        qDebug()<<"exist";
//    else
//        qDebug()<<"not exist";
//    QXlsx::Document xlsx1(excelPath);
//    qDebug()<<"A start";
}
void ATest::run(){
    QString excelPath = "../../Test_Project/EmptyForTest.xlsx";
    if (QFile(excelPath).exists())
        qDebug()<<"exist";
    else
        qDebug()<<"not exist";
    QXlsx::Document xlsx1(excelPath);
    qDebug()<<"A run";
}
