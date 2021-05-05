#ifndef ATEST_H
#define ATEST_H

#include "atest_global.h"
#include <QThread>

class ATESTSHARED_EXPORT ATest:public QThread
{

public:
    ATest();
    void run();
};
extern"C" ATESTSHARED_EXPORT QThread * GetTest()
{
    return new ATest();
}

#endif // ATEST_H
