#include "result.h"

NTLX2_BEGIN

bool Result::success(const QList<STATUS>* const pExclusionList) const
{
  if (error() != NOERROR)
  {
    if (pExclusionList != nullptr)
      return pExclusionList->contains(error());
    return false;
  }
  return true;
}

NTLX2_END
