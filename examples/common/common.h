#ifndef COMMON_H
#define COMMON_H

#include <qglobal.h>

#if defined(BUILD_COMMON_LIB)
#  undef COMMON_EXPORT
#  define COMMON_EXPORT Q_DECL_EXPORT
#else
#  undef COMMON_EXPORT
#  define COMMON_EXPORT Q_DECL_IMPORT //only for vc?
#endif

extern "C" {
COMMON_EXPORT void _link_hack();
}

#endif // COMMON_H
