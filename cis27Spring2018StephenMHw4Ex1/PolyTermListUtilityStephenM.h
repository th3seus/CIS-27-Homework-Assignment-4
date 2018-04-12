//
//  PolyTermListUtilityStephenM.h
//  cis27Spring2018StephenMHw4Ex1
//
//  Created by Stephen on 3/21/18.
//  Copyright © 2018 Stephen. All rights reserved.
//

#ifndef PolyTermListUtilityStephenM_h
#define PolyTermListUtilityStephenM_h

#include <stdio.h>
#include<stdlib.h>
#include "FractionStephenM.h"
#include "PolyTermListStephenM.h"

/* function prototypes */

void displayClassInfoStephenM(void);
void runMainMenuStephenM(void);
void displayMainMenuOptionsStephenM(void);

void runDisplayMenuStephenM(PolyTermNodeSMAddrT /* leftOp */,
                            PolyTermNodeSMAddrT /* rightOp */,
                            PolyTermNodeSMAddrT /* totalOp */);
void displayDisplayMenuOptionsStephenM(void);

void runCreateListsMenuStephenM(PolyTermNodeSMAddrT* /* address of leftOp */,
                               PolyTermNodeSMAddrT* /* address of rightOp */);
void displayCreateMenuOptionsStephenM(void);

void runAdditionMenuStephenM(PolyTermNodeSMAddrT* /* address of leftOp */,
                            PolyTermNodeSMAddrT* /* address of rightOp */,
                            PolyTermNodeSMAddrT* /* address of totalOp */);
void displayAddMenuOptionsStephenM(void);

void runMultiplicationMenuStephenM(PolyTermNodeSMAddrT* /* address of leftOp */,
                                  PolyTermNodeSMAddrT* /* address of rightOp */,
                                  PolyTermNodeSMAddrT* /* address of totalOp */);
void displayMultiMenuOptionsStephenM(void);

void runClearingMenuStephenM(PolyTermNodeSMAddrT* /* address of leftOp */,
                             PolyTermNodeSMAddrT* /* address of rightOp */,
                             PolyTermNodeSMAddrT* /* address of totalOp */);
void displayClearingMenuOptionsStephenM(void);
#endif /* PolyTermListUtilityStephenM_h */
