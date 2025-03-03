#ifndef HEADER_XstoreProcess
#define HEADER_XstoreProcess
/*
htop - XstoreProcess.h
(C) 2015 Hisham H. Muhammad
Released under the GNU GPLv2+, see the COPYING file
in the source distribution for its full text.
*/

#include "Machine.h"
#include "Process.h"


typedef struct XstoreProcess_ {
   Process super;

   /* Add platform specific fields */
} XstoreProcess;


extern const ProcessFieldData Process_fields[LAST_PROCESSFIELD];

Process* XstoreProcess_new(const Machine* host);

void Process_delete(Object* cast);

extern const ProcessClass XstoreProcess_class;

#endif
