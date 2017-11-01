#ifndef NTLX2_CORE_GLOBAL_H
#define NTLX2_CORE_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(NTLX2_CORE_LIBRARY)
#  define NTLX2_CORESHARED_EXPORT Q_DECL_EXPORT
#else
#  define NTLX2_CORESHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // NTLX2_CORE_GLOBAL_H
