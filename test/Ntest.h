//Ntest.h

#ifndef Ntest_H
#define Ntest_H
#include "Ntest_global.h"
#include <QThread>

class NTESTSHARED_EXPORT Ntest: public QThread
{
    Q_OBJECT
public:
    Ntest();
    ~Ntest();
};
extern "C" NTESTSHARED_EXPORT QThread *GetTest()
{
   return new Ntest();
}
#endif 
