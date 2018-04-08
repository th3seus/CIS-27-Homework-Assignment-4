//
//  PolyTermListStephenM.c
//  cis27Spring2018StephenMHw4Ex1
//
//  Created by Stephen on 3/21/18.
//  Copyright © 2018 Stephen. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "PolyTermListStephenM.h"
#include "FractionStephenM.h"

PolyTermSMPtrT createPolyTermStephen(int exp, FractionSMPtrT coef) {
    PolyTermSMPtrT tempTerm = NULL;
    
    tempTerm = (PolyTermSMPtrT)malloc(sizeof(PolyTermSMT));
    
    tempTerm->exp = exp;
    tempTerm->coefPtr = coef;
    
    return tempTerm;
}

void createPolyTermNodeStephenM(PolyTermSMAddrT newNode, PolyTermNodeSMAddrT* ptList) {
    // should prepend during node creation
    PolyTermNodeSMPtrT tempNode = NULL;
    
    tempNode = (PolyTermNodeSMPtrT)malloc(sizeof(PolyTermNodeSMT));
    
    tempNode->ptPtr = newNode;
    tempNode->next = *ptList;
    
    *ptList = tempNode;
}

/* Merge Sort Function Definitions */

void mergeSortListStephenM(PolyTermNodeSMAddrT* ptListAddr) {
    
}

void bisectListsStephenM(PolyTermNodeSMPtrT ptList,
                         PolyTermNodeSMAddrT* left,
                         PolyTermNodeSMAddrT* right) {
    /* Uses a slow node and fast node to cut the list in half. The fast node
        advances at twice the rate of the slow node. When the fast node is at
        the end of the list, the slow node will be at the middle. */
    PolyTermNodeSMPtrT fast = NULL;
    PolyTermNodeSMPtrT slow = NULL;
    
    slow = ptList;
    fast = ptList->next;
    
    while (fast) {
        fast = fast->next;
        
        if (fast) {
            slow = slow->next;
            fast = fast->next;
        }
    }
    
    *left = ptList;
    *right = slow->next;
    
    slow->next = NULL;
}

/* Other Utility Functions */

void printListStephenM(PolyTermNodeSMAddrT ptList) {
    FractionSMPtrT tempFrac = NULL;
    int tempExp = 0;
    int nodePosFlag = 0;
    
    while (ptList) {
        tempFrac = ptList->ptPtr->coefPtr;
        tempExp = ptList->ptPtr->exp;
        
        if (nodePosFlag == 0 && (tempFrac->num) < 0) {
            printf("\n-%d/%dx^%d", -(tempFrac->num), tempFrac->denom, tempExp);
            nodePosFlag++;
        }
        else if (nodePosFlag == 0 && (tempFrac->num) > 0) {
            printf("\n%d/%dx^%d ", tempFrac->num, tempFrac->denom, tempExp);
            nodePosFlag++;
        }
        else if (nodePosFlag > 0 && (tempFrac->num) < 0)
            printf("- %d/%dx^%d ", -(tempFrac->num), tempFrac->denom, tempExp);
        else
            printf("+ %d/%dx^%d ", tempFrac->num, tempFrac->denom, tempExp);
        
        ptList = ptList->next;
    }
    printf("\n");
}