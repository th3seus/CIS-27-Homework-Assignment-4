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
    
    PolyTermNodeSMAddrT left = NULL;
    PolyTermNodeSMAddrT right = NULL;
    PolyTermNodeSMAddrT total = NULL;
    
    createPolyTermNodeStephenM(createPolyTermStephen(2, createFractionStephenM(1, 1)), &left);
    createPolyTermNodeStephenM(createPolyTermStephen(1, createFractionStephenM(5, 1)), &left);
    createPolyTermNodeStephenM(createPolyTermStephen(0, createFractionStephenM(1, 1)), &left);
 
    createPolyTermNodeStephenM(createPolyTermStephen(2, createFractionStephenM(3, 1)), &right);
    createPolyTermNodeStephenM(createPolyTermStephen(1, createFractionStephenM(-10, 1)), &right);
    createPolyTermNodeStephenM(createPolyTermStephen(0, createFractionStephenM(15, 1)), &right);
    
    mergeSortedListStephenM(&left);
    mergeSortedListStephenM(&right);
    
    printf("\nBefore operation: ");
    printListStephenM(left);
    printListStephenM(right);
    
    addListsStephenM(left, right, &total);
    
    printf("\nAfter operations: ");
    printListStephenM(left);
    printListStephenM(right);
    printListStephenM(total);
    
    //multiplyListsStephenM(left, right, &total);
    
    //printListStephenM(total);
    

    free(left);
    left = NULL;
    free(right);
    right = NULL;


    return 0;
}

