/**
 * Program Name: cis27Spring2018StephenMHw4Ex1.c
 * Discussion:   Polynomial Calculator
 * Written by:   Stephen Miller
 * Submitted:    2018/04/12
 */

#include "FractionStephenM.h"

FractionSMAddrT createFractionStephenM(int num, int denom) {
    FractionSMPtrT tempFrac = NULL;
    
    if (tempFrac != NULL) {
        free(tempFrac);
        tempFrac = NULL;
    }
    
    tempFrac = (FractionSMPtrT)malloc(sizeof(FractionSMT));
    
    
    tempFrac->num = num / getGCD(num, denom);
    tempFrac->denom = denom / getGCD(num, denom);
    
    if (tempFrac->denom < 0) {
        tempFrac->num = -tempFrac->num;
        tempFrac->denom = -tempFrac->denom;
    }
    return tempFrac;
}

int getGCD(int num, int denom) {
    return denom == 0 ? num : getGCD(denom, num % denom);
}

FractionSMPtrT addFractions(FractionSMAddrT leftOp, FractionSMAddrT rightOp) {
    return createFractionStephenM(
          (leftOp->num * rightOp->denom) + (leftOp->denom * rightOp->num),
          (leftOp->denom * rightOp->denom));
}

FractionSMPtrT multiplyFractions(FractionSMAddrT leftOp, FractionSMAddrT rightOp) {
    return createFractionStephenM((leftOp->num * rightOp->num),
                            (leftOp->denom) * (rightOp->denom));
    
}
