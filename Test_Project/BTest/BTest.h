#ifndef BTEST_H
#define BTEST_H

#include "btest_global.h"
#include <QThread>
class BTESTSHARED_EXPORT BTest:public QThread
{

public:
    BTest();
    void run();
};
extern"C" BTESTSHARED_EXPORT QThread * GetTest()
{
    return new BTest();
}
#endif // BTEST_H
