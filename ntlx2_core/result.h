#ifndef NTLX2_CORE_RESULT_H
#define NTLX2_CORE_RESULT_H

#include <ntlx2.h>
#include <QList>

NTLX2_BEGIN

class NTLX2_CORESHARED_EXPORT Result
{
public:
  Result() : status_(NOERROR) {}
  Result(STATUS status) : status_(status) {}
  Result(const Result& other) : status_(other.status_) {}

  Result& operator=(const Result& other)
  {
    if (this != &other)
      status_ = other.status_;
    return *this;
  }
  Result& operator=(STATUS status)
  {
    status_ = status;
    return *this;
  }

  operator STATUS() const { return status_; }
  STATUS error() const { return ERR(status_); }
  bool success(const QList<STATUS>* const pExclusionList = nullptr) const;
  bool failure(const QList<STATUS>* const pExclusionList = nullptr) const
  {
    return !success(pExclusionList);
  }

private:
  STATUS status_;
};

class NTLX2_CORESHARED_EXPORT IResult
{
public:
  IResult() : lastResult_() {}
  IResult(const IResult& other) : lastResult_(other.lastResult_) {}

  IResult& operator=(const IResult& other)
  {
    if (this != &other)
      lastResult_ = other.lastResult_;
    return *this;
  }

  Result lastResult() const { return lastResult_; }

protected:
  Result lastResult_;
};

NTLX2_END

Q_DECLARE_METATYPE(ntlx2::Result)

#endif // NTLX2_CORE_RESULT_H
