#ifndef NTLX2_CORE_NUMBER_H
#define NTLX2_CORE_NUMBER_H

#include <value.h>

NTLX2_BEGIN

class NTLX2_CORESHARED_EXPORT Number
    : public Value
{
public:
  Number() : Value(), value_(0) {}
  Number(STATUS value) : Value(), value_(value) {}
  Number(const Number& other) : Value(other), value_(other.value_) {}

  Number& operator=(const Number& other)
  {
    Value::operator=(other);
    if (this != &other)
      value_ = other.value_;
    return *this;
  }

  operator NUMBER() const { return value_; }

protected:
  NUMBER value_;
};

NTLX2_END;

Q_DECLARE_METATYPE(ntlx2::Number)

#endif // NTLX2_CORE_NUMBER_H
