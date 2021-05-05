#ifndef NTEST_GLOBAL_H
#define NTEST_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(NTEST_LIBRARY)
#  define NTESTSHARED_EXPORT Q_DECL_EXPORT
#else
#  define NTESTSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // NTEST_GLOBAL_H
