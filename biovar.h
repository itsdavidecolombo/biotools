//
//  biovar.h
//  
//
//  Created by Davide Colombo on 21/07/21.
//

#ifndef biovar_h
#define biovar_h

#include "biotypes.h"
#include "bioconst.h"

FLAG ctrl;                              /* FLAG variable to communicate between caller and callee */

SRCH_T taa, tga, tag;                   /* define variables for searching stop codons */

struct llist *codontab[N_CODONS];              /* a lookup table for codon-to-aminoacids translation and vice versa */

#endif /* biovar_h */
