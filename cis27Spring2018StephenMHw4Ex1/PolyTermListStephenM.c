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
    
    if (*ptList == NULL) {
        tempNode->ptPtr = newNode;
        tempNode->next = NULL;
        
        *ptList = tempNode;
        
        return;
    }
    
    tempNode->ptPtr = newNode;
    tempNode->next = *ptList;
    
    *ptList = tempNode;
}

/* Merge Sort Function Definitions
    Sorts in Descending Order */

void mergeSortedListStephenM(PolyTermNodeSMAddrT* ptListAddr) {
    /* Main Merge Sort Function
     splits list, sorts it, then merges sorted halves */
    PolyTermNodeSMPtrT left = NULL;
    PolyTermNodeSMPtrT right = NULL;
    
    /* Base Case Test - Return if 0 or 1 nodes */
    if (*ptListAddr == NULL || (*ptListAddr)->next == NULL) {
        return;
    }
    
    /* Split the list */
    bisectListsStephenM(*ptListAddr, &left, &right);
    
    /* Recursively Sort list halves */
    mergeSortedListStephenM(&left);
    mergeSortedListStephenM(&right);
    
    /* Merge left and right halves of list */
    *ptListAddr = mergeSortStephenM(&left, &right);
}

PolyTermNodeSMPtrT mergeSortStephenM(PolyTermNodeSMAddrT* left,PolyTermNodeSMAddrT* right) {
    /* Secondary Merge Sort Function
     Recursively sorts list halves and merges them */
    PolyTermNodeSMPtrT result = NULL;
    
    /* Base Case Tests */
    if (*left == NULL) {
        return *right;
    }
    if (*right == NULL) {
        return *left;
    }
    
    /* Recursively sort lists  and then merge */
    if ((*left)->ptPtr->exp > (*right)->ptPtr->exp) {
        result = *left;
        result->next = mergeSortStephenM(&(*left)->next, right);
    } else {
        result = *right;
        result->next = mergeSortStephenM(left, &(*right)->next);
    }
    
    return result;
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
