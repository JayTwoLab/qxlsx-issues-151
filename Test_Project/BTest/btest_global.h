#ifndef BTEST_GLOBAL_H
#define BTEST_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(BTEST_LIBRARY)
#  define BTESTSHARED_EXPORT Q_DECL_EXPORT
#else
#  define BTESTSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // BTEST_GLOBAL_H
