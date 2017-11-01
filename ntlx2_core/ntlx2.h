#ifndef NTLX2_CORE_NTLX2_H
#define NTLX2_CORE_NTLX2_H

#include "ntlx2_core_global.h"
#include <QMetaType>

#define NTLX2_BEGIN namespace ntlx2 {
#define NTLX2_END }

#if defined(NT)
#pragma pack(push, 1)
#endif

#include <global.h>

#if defined(NT)
#pragma pack(pop)
#endif

NTLX2_BEGIN

class Result;

NTLX2_CORESHARED_EXPORT Result initialize(
    int argc = __argc
    , char** argv = __argv
    );

NTLX2_CORESHARED_EXPORT void terminate();

NTLX2_END

#endif // NTLX2_CORE_NTLX2_H
