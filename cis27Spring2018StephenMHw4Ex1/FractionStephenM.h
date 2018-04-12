/**
 * Program Name: cis27Spring2018StephenMHw4Ex1.c
 * Discussion:   Polynomial Calculator
 * Written by:   Stephen Miller
 * Submitted:    2018/04/12
 */

#ifndef FractionStephenM_h
#define FractionStephenM_h

#include <stdio.h>
#include <stdlib.h>

struct FractionStephenM {
    int num;
    int denom;
};

typedef struct FractionStephenM FractionSMT;
typedef FractionSMT* FractionSMPtrT;
typedef FractionSMT* FractionSMAddrT;

FractionSMAddrT createFractionStephenM(int, int);
int getGCD(int, int);
FractionSMPtrT addFractions(FractionSMAddrT, FractionSMAddrT);
FractionSMPtrT multiplyFractions(FractionSMAddrT, FractionSMAddrT);

#endif /* FractionStephenM_h */
