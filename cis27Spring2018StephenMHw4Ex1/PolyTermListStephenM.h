/**
 * Program Name: cis27Spring2018StephenMHw4Ex1.c
 * Discussion:   Polynomial Calculator
 * Written by:   Stephen Miller
 * Submitted:    2018/04/12
 */

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

void addListsStephenM(PolyTermNodeSMPtrT /* ptr to leftOp */,
                     PolyTermNodeSMPtrT /* ptr to rightOp */,
                     PolyTermNodeSMAddrT* /* address of totalOp */);
void multiplyListsStephenM(PolyTermNodeSMPtrT /* ptr to leftOp */,
                          PolyTermNodeSMPtrT /* ptr to rightOp */,
                          PolyTermNodeSMAddrT* /* address of totalOp */);

void appendNodeStephenM(PolyTermNodeSMPtrT, PolyTermNodeSMAddrT*);
void printListStephenM(PolyTermNodeSMAddrT);
void mergeSortedListStephenM(PolyTermNodeSMAddrT*);
void bisectListsStephenM(PolyTermNodeSMPtrT, PolyTermNodeSMAddrT*, PolyTermNodeSMAddrT*);
PolyTermNodeSMPtrT mergeSortStephenM(PolyTermNodeSMAddrT* left,PolyTermNodeSMAddrT* right);
void combineLikeTermsStephenM(PolyTermNodeSMAddrT*);
void freeListStephenM(PolyTermNodeSMAddrT*);
int getLengthStephenM(PolyTermNodeSMAddrT);
int isEmptyStephenM(PolyTermNodeSMAddrT);

#endif /* PolyTermListStephenM_h */
