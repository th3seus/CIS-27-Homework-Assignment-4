/**
 * Program Name: cis27Spring2018StephenMHw4Ex1.c
 * Discussion:   Polynomial Calculator
 * Written by:   Stephen Miller
 * Submitted:    2018/04/12
 */

#include <stdio.h>
#include <stdlib.h>
#include "PolyTermListStephenM.h"
#include "FractionStephenM.h"

PolyTermSMPtrT createPolyTermStephen(int exp, FractionSMPtrT coef) {
    PolyTermSMPtrT tempTerm = NULL;
    
    tempTerm = (PolyTermSMPtrT)malloc(sizeof(PolyTermSMT));
    tempTerm->coefPtr = (FractionSMPtrT)malloc(sizeof(FractionSMT));
    
    tempTerm->exp = exp;
    tempTerm->coefPtr = coef;
    
    return tempTerm;
}

void createPolyTermNodeStephenM(PolyTermSMAddrT newNode,
                                PolyTermNodeSMAddrT* ptList) {
    // should prepend during node creation
    PolyTermNodeSMPtrT tempNode = NULL;
    
    tempNode = (PolyTermNodeSMPtrT)malloc(sizeof(PolyTermNodeSMT));
    tempNode->ptPtr = (PolyTermSMPtrT)malloc(sizeof(PolyTermSMT));
    
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

void addListsStephenM(PolyTermNodeSMPtrT leftOp,
                      PolyTermNodeSMPtrT rightOp,
                      PolyTermNodeSMAddrT* total) {
    FractionSMPtrT tempFrac = NULL;
    int tempExp = 0;
    
    while (leftOp) {
        tempFrac = leftOp->ptPtr->coefPtr;
        tempExp = leftOp->ptPtr->exp;
        
        createPolyTermNodeStephenM(createPolyTermStephen(tempExp, tempFrac), total);
        leftOp = leftOp->next;
    }
    
    while (rightOp) {
        tempFrac = rightOp->ptPtr->coefPtr;
        tempExp = rightOp->ptPtr->exp;
        
        createPolyTermNodeStephenM(createPolyTermStephen(tempExp, tempFrac), total);
        rightOp = rightOp->next;
    }

    mergeSortedListStephenM(total);
    combineLikeTermsStephenM(total);
}

void multiplyListsStephenM(PolyTermNodeSMPtrT leftOp,
                           PolyTermNodeSMPtrT rightOp,
                           PolyTermNodeSMAddrT* total) {
    PolyTermNodeSMPtrT rightHead = NULL;
    FractionSMPtrT tempFrac = NULL;
    int tempExp = 0;
    
    rightHead = rightOp;
    if (*total != NULL) {
        *total = NULL;
    }
    
    
    while (leftOp) {
        while (rightOp) {
            tempFrac = multiplyFractions(leftOp->ptPtr->coefPtr,
                                    rightOp->ptPtr->coefPtr);
            tempExp = leftOp->ptPtr->exp + rightOp->ptPtr->exp;
            
            createPolyTermNodeStephenM(createPolyTermStephen(tempExp, tempFrac), total);
            
            rightOp = rightOp->next;
        }
        leftOp = leftOp->next;
        rightOp = rightHead;
    }
    
    mergeSortedListStephenM(total);
    combineLikeTermsStephenM(total);
}

void combineLikeTermsStephenM(PolyTermNodeSMAddrT* listAddr) {
    PolyTermNodeSMPtrT temp = NULL;
    PolyTermNodeSMPtrT current = NULL;
    FractionSMPtrT tempLFrac = NULL;
    FractionSMPtrT tempRFrac = NULL;
    
    if (*listAddr == NULL || (*listAddr)->next == NULL) {
        return;
    }
    
    current = *listAddr;
    
    while (current && current->next) {
        if (current->ptPtr->exp == current->next->ptPtr->exp) {
            tempLFrac = current->ptPtr->coefPtr;
            tempRFrac = current->next->ptPtr->coefPtr;
            
            free(current->ptPtr->coefPtr);
            current->ptPtr->coefPtr = NULL;
            
            current->ptPtr->coefPtr = addFractions(tempLFrac, tempRFrac);
            
            temp = current->next;
            current->next = current->next->next;
            temp->next = NULL;
            free(temp);
            temp = NULL;
        } else {
            current = current->next;
        }
    }
}

void appendNodeStephenM(PolyTermNodeSMPtrT node, PolyTermNodeSMAddrT* list) {
    PolyTermNodeSMPtrT tempNode = NULL;
    
    if (*list) {
        tempNode = *list;
        while (tempNode->next != NULL) {
            tempNode = tempNode->next;
        }
    } else {
        *list = node;
        return;
    }
    
    tempNode->next = node;
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

PolyTermNodeSMPtrT mergeSortStephenM(PolyTermNodeSMAddrT* left,
                                    PolyTermNodeSMAddrT* right) {
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
            printf("-%d/%dx^%d", -(tempFrac->num), tempFrac->denom, tempExp);
            nodePosFlag++;
        }
        else if (nodePosFlag == 0 && (tempFrac->num) > 0) {
            printf("%d/%dx^%d ", tempFrac->num, tempFrac->denom, tempExp);
            nodePosFlag++;
        }
        else if (nodePosFlag > 0 && (tempFrac->num) < 0)
            printf("- %d/%dx^%d ", -(tempFrac->num), tempFrac->denom, tempExp);
        else
            printf("+ %d/%dx^%d ", tempFrac->num, tempFrac->denom, tempExp);
        
        ptList = ptList->next;
    }
}

void freeListStephenM(PolyTermNodeSMAddrT* list) {
    PolyTermNodeSMPtrT temp = NULL;
    PolyTermNodeSMPtrT next = NULL;
    
    temp = *list;
    
    while (temp) {
        next = temp->next;
        
        free(temp->ptPtr->coefPtr);
        temp->ptPtr->coefPtr = NULL;
        free(temp->ptPtr);
        temp->ptPtr = NULL;
        free(temp);
        
        temp = next;
    }
    
    *list = NULL;
}

int getLengthStephenM(PolyTermNodeSMAddrT list) {
    int count = 0;
    
    while (list) {
        count++;
        list = list->next;
    }
    
    return count;
}

int isEmptyStephenM(PolyTermNodeSMAddrT list) {
    int flag = 0;
    
    if (list == NULL)
        return flag;
    else
        flag = 1;
    return flag;
}
