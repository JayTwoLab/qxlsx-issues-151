#ifndef NTEST_H
#define NTEST_H

#include "ntest_global.h"
#include <QThread>
class NTESTSHARED_EXPORT NTest:public QThread
{

public:
    NTest();
    void run();
};
extern"C" NTESTSHARED_EXPORT QThread * GetTest()
{
    return new NTest();
}

#endif // NTEST_H
