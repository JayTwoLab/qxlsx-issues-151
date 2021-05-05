#ifndef ATEST_GLOBAL_H
#define ATEST_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(ATEST_LIBRARY)
#  define ATESTSHARED_EXPORT Q_DECL_EXPORT
#else
#  define ATESTSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // ATEST_GLOBAL_H
