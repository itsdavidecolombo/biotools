//
//  biostr.h
//  
//
//  Created by Davide Colombo on 21/07/21.
//

#ifndef biostr_h
#define biostr_h

#include <stdio.h>
#include <string.h>
#include "biotypes.h"
#include "bioconst.h"

#include "biovar.h"
extern FLAG ctrl;

unsigned fgetline(FILE *, char *, unsigned long);
void strcpy_from(char *to, char *from, unsigned start);
void reverse(char *);
unsigned sfind(char *, char *, unsigned);
unsigned repfind(char *, char, unsigned, unsigned, STAT_T *);

#endif /* biostr_h */