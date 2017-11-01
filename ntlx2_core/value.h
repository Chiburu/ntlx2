#ifndef NTLX2_CORE_VALUE_H
#define NTLX2_CORE_VALUE_H

#include <ntlx2.h>

NTLX2_BEGIN

class NTLX2_CORESHARED_EXPORT Value
{
public:
  Value() {}
  Value(const Value&) {}

  Value& operator=(const Value&)
  {
    return *this;
  }
};

NTLX2_END

Q_DECLARE_METATYPE(ntlx2::Value)

#endif // NTLX2_CORE_VALUE_H
