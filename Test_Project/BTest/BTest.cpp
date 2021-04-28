#include "BTest.h"
#include <QDebug>
#include "xlsxdocument.h"
BTest::BTest()
{
//    QString excelPath = "/home/nvme/Desktop/EmptyForTest.xlsx";
//    if (QFile(excelPath).exists())
//        qDebug()<<"exist";
//    else
//        qDebug()<<"not exist";
//    QXlsx::Document xlsx1(excelPath);
//    qDebug()<<"B start";
}
void BTest::run(){
    QString excelPath = "../../Test_Project/EmptyForTest.xlsx";
    if (QFile(excelPath).exists())
        qDebug()<<"exist";
    else
        qDebug()<<"not exist";
    QXlsx::Document xlsx1(excelPath);
    qDebug()<<"B run";
}
