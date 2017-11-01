#include "ntlx2.h"
#include "result.h"

NTLX2_BEGIN

Result initialize(int argc, char **argv)
{
  return NotesInitExtended(argc, argv);
}

void terminate()
{
  return NotesTerm();
}

NTLX2_END
