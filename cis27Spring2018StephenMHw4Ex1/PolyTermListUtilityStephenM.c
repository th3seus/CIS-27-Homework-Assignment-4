//
//  PolyTermListUtilityStephenM.c
//  cis27Spring2018StephenMHw4Ex1
//
//  Created by Stephen on 3/21/18.
//  Copyright © 2018 Stephen. All rights reserved.
//

#include "FractionStephenM.h"
#include "PolyTermListStephenM.h"
#include "PolyTermListUtilityStephenM.h"

void displayClassInfoStephenM() {
    printf("CIS 27 - Data Structures"
           "\nLaney College"
           "\nStephen Miller \n"
           "\nAssignment Information -- "
           "\n  Assignment Number:    Homework 04,"
           "\n                        Coding Assignment -- Exercise #1"
           "\n  Written By:           Stephen M"
           "\n  Submitted Date:       2018/04/12\n");
}

void runMainMenuStephenM(void) {
    /* Main Menu Driver
     Declares leftOp, rightOp, total Lists;
     tempNum, tempDenom, tempExp, menuOption */
    PolyTermNodeSMPtrT leftOp = NULL;
    PolyTermNodeSMPtrT rightOp = NULL;
    PolyTermNodeSMPtrT total = NULL;
    int menuOption = 0;
    
    displayClassInfoStephenM();
    do {
        displayMainMenuOptionsStephenM();
        printf("\nEnter an option: ");
        scanf("%d", &menuOption);
        
        switch (menuOption) {
            case 1: // creating lists
                runCreateListsMenuStephenM(&leftOp, &rightOp);
                break;
            case 2: // adding lists
                if (leftOp == NULL || rightOp == NULL)
                    printf("\nBoth left and right operands must be initialized -- Please do so");
                else if (total != NULL) {
                    freeListStephenM(&total);
                    runAdditionMenuStephenM(&leftOp, &rightOp, &total);
                } else
                    runAdditionMenuStephenM(&leftOp, &rightOp, &total);
                break;
            case 3: // multiplying lists
                if (leftOp == NULL || rightOp == NULL)
                    printf("\nBoth left and right operands must be initialized -- Please do so");
                else if (total != NULL) {
                    freeListStephenM(&total);
                    runMultiplicationMenuStephenM(&leftOp, &rightOp, &total);
                } else
                    runMultiplicationMenuStephenM(&leftOp, &rightOp, &total);
                break;
            case 4: // displaying lists
                runDisplayMenuStephenM(leftOp, rightOp, total);
                break;
            case 5: // clearing lists
                runClearingMenuStephenM(&leftOp, &rightOp, &total);
                break;
            case 6: // quitting
                break;
            default: // wrong option
                printf("\nYou're joking...");
                break;
        }
    } while(menuOption != 6);
    
}

void displayMainMenuOptionsStephenM() {
    printf("\n*******************************"
           "\n*         Menu HW #4          *"
           "\n*    POLYNOMIAL OPERATIONS    *"
           "\n* 1. Creating polynomials     *"
           "\n* 2. Adding polynomials       *"
           "\n* 3. Multiplying polynomials  *"
           "\n* 4. Displaying polynomials   *"
           "\n* 5. Clearing polynomials     *"
           "\n* 6. Quit                     *"
           "\n*******************************");
}

void runCreateListsMenuStephenM(PolyTermNodeSMAddrT* leftOp,
                                PolyTermNodeSMAddrT* rightOp) {
    int menuOption = 0;
    int allocCount = 0;
    int exp = 0;
    int num = 0;
    int denom = 0;
    
    do {
        displayCreateMenuOptionsStephenM();
        printf("\nEnter an option: ");
        scanf("%d", &menuOption);
        
        switch (menuOption) {
            case 1: // create left list
                printf("\nHow many terms in the left operand? ");
                scanf("%d", &allocCount);
                
                
                for (int i = 0; i < allocCount; i++) {
                    printf("\nCreating term #%d -- ", i + 1);
                    printf("\nEnter a numerator for the coefficient: ");
                    scanf("%d", &num);
                    do {
                        printf("\nEnter a non-zero denominator for the coefficient: ");
                        scanf("%d", &denom);
                    } while (denom == 0);
                    
                    printf("\nEnter an exponent: ");
                    scanf("%d", &exp);
                    
                    createPolyTermNodeStephenM(createPolyTermStephen(exp,
                                        createFractionStephenM(num, denom)),
                                        leftOp);
                }
                mergeSortedListStephenM(leftOp);
                break;
            case 2: // create right list
                printf("\nHow many terms in the right operand? ");
                scanf("%d", &allocCount);

                for (int i = 0; i < allocCount; i++) {
                    printf("\nCreating term #%d -- ", i + 1);
                    printf("\nEnter a numerator for the coefficient: ");
                    scanf("%d", &num);
                    do {
                        printf("\nEnter a non-zero denominator for the coefficient: ");
                        scanf("%d", &denom);
                    } while (denom == 0);
                    
                    printf("\nEnter an exponent: ");
                    scanf("%d", &exp);
                    
                    createPolyTermNodeStephenM(createPolyTermStephen(exp,
                                         createFractionStephenM(num, denom)),
                                         rightOp);
                }
                mergeSortedListStephenM(rightOp);
                allocCount = 0;
                break;
            case 3: // display lists
                if (*leftOp == NULL) {
                    printf("\nLeft Operand is Empty, ");
                }
                if (*leftOp) {
                    printf("\nLeft Operand is: ");
                    printListStephenM(*leftOp);
                }
                if (*rightOp == NULL) {
                    printf("and Right Operand is Empty.");
                }
                if (*rightOp) {
                    printf(" and Right Operand is: ");
                    printListStephenM(*rightOp);
                }
                break;
            case 4: // quit
                printf("\nReturning to Main Menu");
                break;
            default: // wrong option
                printf("\nReally?");
                break;
        }
    } while (menuOption != 4);
}
void displayCreateMenuOptionsStephenM() {
    printf("\n*******************************"
           "\n*        Creation Menu        *"
           "\n*                             *"
           "\n* 1. Create Left Polynomial   *"
           "\n* 2. Create Right Polynomial  *"
           "\n* 3. Display Lists            *"
           "\n* 4. Quit                     *"
           "\n*******************************");
}

void runAdditionMenuStephenM(PolyTermNodeSMAddrT* leftOp,
                             PolyTermNodeSMAddrT* rightOp,
                             PolyTermNodeSMAddrT* total) {
    int menuOption = 0;
    do {
        displayAddMenuOptionsStephenM();
        printf("\nEnter an option: ");
        scanf("%d", &menuOption);
        
        switch(menuOption){
            case 1:
                printf("\nPerforming the following operation:\n(");
                printListStephenM(*leftOp);
                printf(") + (");
                printListStephenM(*rightOp);
                printf(")");
                
                addListsStephenM(*leftOp, *rightOp, total);
                
                printf("\nAfter the function call the sum is: ");
                printListStephenM(*total);
                break;
            case 2:
                if (*leftOp == NULL) {
                    printf("\nLeft Operand is Empty, ");
                }
                if (*leftOp) {
                    printf("\nLeft Operand is: ");
                    printListStephenM(*leftOp);
                }
                if (*rightOp == NULL) {
                    printf("and Right Operand is Empty.");
                }
                if (*rightOp) {
                    printf("and Right Operand is: ");
                    printListStephenM(*rightOp);
                }
                if (*total) {
                    printf("\nThe sum is: ");
                    printListStephenM(*total);
                }
                break;
            case 3:
                printf("\nReturning to Main Menu");
                break;
            default:
                printf("\nSurely this is a joke");
                break;
        }
    } while (menuOption != 3);
}

void displayAddMenuOptionsStephenM() {
    printf("\n*******************************"
           "\n*        Addition Menu        *"
           "\n*                             *"
           "\n* 1. Add Lists                *"
           "\n* 2. Display Lists            *"
           "\n* 3. Quit                     *"
           "\n*******************************");
}

void runMultiplicationMenuStephenM(PolyTermNodeSMAddrT* leftOp,
                                   PolyTermNodeSMAddrT* rightOp,
                                   PolyTermNodeSMAddrT* total) {
    int menuOption = 0;
    
    do {
        displayMultiMenuOptionsStephenM();
        printf("\nEnter an option: ");
        scanf("%d", &menuOption);
        
        switch(menuOption) {
            case 1:
                printf("\nPerforming the following operation:\n(");
                printListStephenM(*leftOp);
                printf(") * (");
                printListStephenM(*rightOp);
                printf(")");
                
                multiplyListsStephenM(*leftOp, *rightOp, total);
                
                printf("\nAfter the function call the product is: ");
                printListStephenM(*total);
                break;
            case 2:
                if (*leftOp == NULL) {
                    printf("\nLeft Operand is Empty, ");
                }
                if (*leftOp) {
                    printf("\nLeft Operand is: ");
                    printListStephenM(*leftOp);
                }
                if (*rightOp == NULL) {
                    printf("and Right Operand is Empty.");
                }
                if (*rightOp) {
                    printf("and Right Operand is: ");
                    printListStephenM(*rightOp);
                }
                if (*total) {
                    printf("\nThe product is: ");
                    printListStephenM(*total);
                }
                break;
            case 3:
                printf("\nReturning to Main Menu");
                break;
            default:
                printf("\nTry again...");
                break;
        }
        
    } while (menuOption != 3);
}

void displayMultiMenuOptionsStephenM() {
    printf("\n*******************************"
           "\n*     Multiplication Menu     *"
           "\n*                             *"
           "\n* 1. Multiply Lists           *"
           "\n* 2. Display Lists            *"
           "\n* 3. Quit                     *"
           "\n*******************************");
}

void runDisplayMenuStephenM(PolyTermNodeSMAddrT leftOp,
                            PolyTermNodeSMAddrT rightOp,
                            PolyTermNodeSMAddrT total) {
    int menuOption = 0;
    
    do {
        displayDisplayMenuOptionsStephenM();
        printf("\nEnter an option: ");
        scanf("%d", &menuOption);
        
        switch (menuOption) {
            case 1:
                if (leftOp) {
                    printf("\nThe Left List is : ");
                    printListStephenM(leftOp);
                } else
                    printf("\nThe Left List is Empty.");
                break;
            case 2:
                if (rightOp) {
                    printf("\nThe Right List is : ");
                    printListStephenM(rightOp);
                } else
                    printf("\nThe Right List is Empty.");
                break;
            case 3:
                if (total) {
                    printf("\nThe Total List is : ");
                    printListStephenM(total);
                } else
                    printf("\nThe Total List is Empty.");
                break;
            case 4:
                printf("\nReturning to Main Menu");
                break;
            default:
                printf("\nHmmm");
                break;
        }
    } while (menuOption != 4);
}

void displayDisplayMenuOptionsStephenM() {
    printf("\n*******************************"
           "\n*         Dislpay Menu        *"
           "\n*                             *"
           "\n* 1. Display Left List        *"
           "\n* 2. Display Right List       *"
           "\n* 3. Display Total List       *"
           "\n* 4. Quit                     *"
           "\n*******************************");
}

void runClearingMenuStephenM(PolyTermNodeSMAddrT* leftOp,
                             PolyTermNodeSMAddrT* rightOp,
                             PolyTermNodeSMAddrT* total) {
    int menuOption = 0;
    
    do {
        displayClearingMenuOptionsStephenM();
        printf("\nEnter an option: ");
        scanf("%d", &menuOption);
        
        switch (menuOption) {
            case 1: // left
                if (*leftOp) {
                    printf("\nClearing Left Operand...");
                    freeListStephenM(leftOp);
                } else {
                    printf("\nThe list is already empty...");
                }
                break;
            case 2: // right
                if (*rightOp) {
                    printf("\nClearing Right Operand...");
                    freeListStephenM(rightOp);
                } else {
                    printf("\nThe list is already empty...");
                }
                break;
            case 3: // total
                if (*total) {
                    printf("\nClearing Total List...");
                    freeListStephenM(total);
                } else {
                    printf("\nThe list is already empty...");
                }
                break;
            case 4: // quit
                printf("\nReturning to Main Menu");
                break;
            default:
                printf("\nTry that again...");
                break;
        }
    } while (menuOption != 4);
}
void displayClearingMenuOptionsStephenM() {
    printf("\n*******************************"
           "\n*        Clearing Menu        *"
           "\n*                             *"
           "\n* 1. Clear Left List          *"
           "\n* 2. Clear Right List         *"
           "\n* 3. Clear Total List         *"
           "\n* 4. Quit                     *"
           "\n*******************************");
}
