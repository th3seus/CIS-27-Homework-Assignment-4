//
//  PolyTermListStephenM.h
//  cis27Spring2018StephenMHw4Ex1
//
//  Created by Stephen on 3/21/18.
//  Copyright © 2018 Stephen. All rights reserved.
//

#ifndef PolyTermListStephenM_h
#define PolyTermListStephenM_h

#include <stdio.h>
#include <stdlib.h>
#include "FractionStephenM.h"

struct PolyTermStephenM {
    int exp; // exponent
    FractionSMPtrT coefPtr; // coefficient
};

typedef struct PolyTermStephenM PolyTermSMT;
typedef PolyTermSMT* PolyTermSMPtrT;
typedef PolyTermSMT* PolyTermSMAddrT;

struct PolyTermNodeStephenM {
    PolyTermSMPtrT ptPtr;
    struct PolyTermNodeStephenM* next;
};

typedef struct PolyTermNodeStephenM PolyTermNodeSMT;
typedef PolyTermNodeSMT* PolyTermNodeSMPtrT;
typedef PolyTermNodeSMT* PolyTermNodeSMAddrT;

/* Function Prototypes */

PolyTermSMPtrT createPolyTermStephen(int, FractionSMPtrT);
void createPolyTermNodeStephenM(PolyTermSMAddrT, PolyTermNodeSMAddrT*);

void addListsStephenM(
                     PolyTermNodeSMPtrT /* ptr to rightOp */,
                     PolyTermNodeSMPtrT /* ptr to leftOp */,
                     PolyTermNodeSMAddrT* /* address of totalOp */);
void multiplyListsStephenM(
                          PolyTermNodeSMPtrT /* ptr to rightOp */,
                          PolyTermNodeSMPtrT /* ptr to leftOp */,
                          PolyTermNodeSMAddrT* /* address of totalOp */);

void printListStephenM(PolyTermNodeSMAddrT);
void mergeSortListStephenM(PolyTermNodeSMAddrT*);
void bisectListsStephenM(PolyTermNodeSMPtrT, PolyTermNodeSMAddrT*, PolyTermNodeSMAddrT*);
void combineLikeTermsStephenM(PolyTermNodeSMAddrT*);
void freeListStephen(PolyTermNodeSMAddrT*);
int getLengthStephenM(PolyTermNodeSMAddrT);
int isEmptyStephenM(PolyTermNodeSMAddrT);

#endif /* PolyTermListStephenM_h */
