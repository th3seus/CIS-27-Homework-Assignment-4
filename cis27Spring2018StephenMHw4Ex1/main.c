//
//  main.c
//  cis27Spring2018StephenMHw4Ex1
//
//  Created by Stephen on 3/19/18.
//  Copyright © 2018 Stephen. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "FractionStephenM.h"
#include "PolyTermListStephenM.h"

int main(int argc, const char * argv[]) {
    /*FractionSMPtrT leftOp = NULL;
    FractionSMPtrT rightOp = NULL;
    FractionSMPtrT total = NULL;
    
    leftOp = (FractionSMPtrT)malloc(sizeof(FractionSMT));
    rightOp = (FractionSMPtrT)malloc(sizeof(FractionSMT));
    total = (FractionSMPtrT)malloc(sizeof(FractionSMT));
    
    leftOp = createFractionStephenM(10, 35);
    rightOp = createFractionStephenM(11, 12);
    
    printf("\n Left Operand is: (%d/%d)", leftOp->num, leftOp->denom);
    printf("\n Right Operand is: (%d/%d)", rightOp->num, rightOp->denom);
    
    total = addFractions(leftOp, rightOp);
    
    printf("\n The sum of both operands is: (%d/%d)", total->num, total->denom);
    
    free(total);
    total = NULL;
    
    total = multiplyFractions(leftOp, rightOp);
    
    printf("\n The product of both operands is: (%d/%d)", total->num, total->denom);
    
    free(total);
    total = NULL;
    free(leftOp);
    leftOp = NULL;
    free(rightOp);
    rightOp = NULL;*/
    
    PolyTermNodeSMAddrT ptList = NULL;
    
    createPolyTermNodeStephenM(createPolyTermStephen(1, createFractionStephenM(2, 3)), &ptList);
    createPolyTermNodeStephenM(createPolyTermStephen(5, createFractionStephenM(-9, 73)), &ptList);
    createPolyTermNodeStephenM(createPolyTermStephen(10, createFractionStephenM(12, 31)), &ptList);
    createPolyTermNodeStephenM(createPolyTermStephen(2, createFractionStephenM(22, 3)), &ptList);
    
    
    printListStephenM(ptList);
    
    free(ptList);
    ptList = NULL;

    return 0;
}

