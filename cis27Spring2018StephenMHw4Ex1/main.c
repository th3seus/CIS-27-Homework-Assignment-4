/**
 * Program Name: cis27Spring2018StephenMHw4Ex1.c
 * Discussion:   Polynomial Calculator
 * Written by:   Stephen Miller
 * Submitted:    2018/04/12
 */

#include <stdio.h>
#include <stdlib.h>
#include "FractionStephenM.h"
#include "PolyTermListStephenM.h"
#include "PolyTermListUtilityStephenM.h"

int main(int argc, const char * argv[]) {
    runMainMenuStephenM();
    return 0;
}

/* PROGRAM_OUTPUT
 
 CIS 27 - Data Structures
 Laney College
 Stephen Miller
 
 Assignment Information --
 Assignment Number:    Homework 04,
 Coding Assignment -- Exercise #1
 Written By:           Stephen M
 Submitted Date:       2018/04/12
 
 *******************************
 *         Menu HW #4          *
 *    POLYNOMIAL OPERATIONS    *
 * 1. Creating polynomials     *
 * 2. Adding polynomials       *
 * 3. Multiplying polynomials  *
 * 4. Displaying polynomials   *
 * 5. Clearing polynomials     *
 * 6. Quit                     *
 *******************************
 Enter an option: 8
 
 You're joking...
 *******************************
 *         Menu HW #4          *
 *    POLYNOMIAL OPERATIONS    *
 * 1. Creating polynomials     *
 * 2. Adding polynomials       *
 * 3. Multiplying polynomials  *
 * 4. Displaying polynomials   *
 * 5. Clearing polynomials     *
 * 6. Quit                     *
 *******************************
 Enter an option: 2
 
 Both left and right operands must be initialized -- Please do so
 *******************************
 *         Menu HW #4          *
 *    POLYNOMIAL OPERATIONS    *
 * 1. Creating polynomials     *
 * 2. Adding polynomials       *
 * 3. Multiplying polynomials  *
 * 4. Displaying polynomials   *
 * 5. Clearing polynomials     *
 * 6. Quit                     *
 *******************************
 Enter an option: 3
 
 Both left and right operands must be initialized -- Please do so
 *******************************
 *         Menu HW #4          *
 *    POLYNOMIAL OPERATIONS    *
 * 1. Creating polynomials     *
 * 2. Adding polynomials       *
 * 3. Multiplying polynomials  *
 * 4. Displaying polynomials   *
 * 5. Clearing polynomials     *
 * 6. Quit                     *
 *******************************
 Enter an option: 4
 
 *******************************
 *         Dislpay Menu        *
 *                             *
 * 1. Display Left List        *
 * 2. Display Right List       *
 * 3. Display Total List       *
 * 4. Quit                     *
 *******************************
 Enter an option: 1
 
 The Left List is Empty.
 *******************************
 *         Dislpay Menu        *
 *                             *
 * 1. Display Left List        *
 * 2. Display Right List       *
 * 3. Display Total List       *
 * 4. Quit                     *
 *******************************
 Enter an option: 2
 
 The Right List is Empty.
 *******************************
 *         Dislpay Menu        *
 *                             *
 * 1. Display Left List        *
 * 2. Display Right List       *
 * 3. Display Total List       *
 * 4. Quit                     *
 *******************************
 Enter an option: 3
 
 The Total List is Empty.
 *******************************
 *         Dislpay Menu        *
 *                             *
 * 1. Display Left List        *
 * 2. Display Right List       *
 * 3. Display Total List       *
 * 4. Quit                     *
 *******************************
 Enter an option: 5
 
 Hmmm...
 *******************************
 *         Dislpay Menu        *
 *                             *
 * 1. Display Left List        *
 * 2. Display Right List       *
 * 3. Display Total List       *
 * 4. Quit                     *
 *******************************
 Enter an option: 4
 
 Returning to Main Menu
 *******************************
 *         Menu HW #4          *
 *    POLYNOMIAL OPERATIONS    *
 * 1. Creating polynomials     *
 * 2. Adding polynomials       *
 * 3. Multiplying polynomials  *
 * 4. Displaying polynomials   *
 * 5. Clearing polynomials     *
 * 6. Quit                     *
 *******************************
 Enter an option: 5
 
   *******************************
   *        Clearing Menu        *
   *                             *
   * 1. Clear Left List          *
   * 2. Clear Right List         *
   * 3. Clear Total List         *
   * 4. Quit                     *
   *******************************
   Enter an option: 1
 
   The list is already empty...
   *******************************
   *        Clearing Menu        *
   *                             *
   * 1. Clear Left List          *
   * 2. Clear Right List         *
   * 3. Clear Total List         *
   * 4. Quit                     *
   *******************************
   Enter an option: 2
 
   The list is already empty...
   *******************************
   *        Clearing Menu        *
   *                             *
   * 1. Clear Left List          *
   * 2. Clear Right List         *
   * 3. Clear Total List         *
   * 4. Quit                     *
   *******************************
   Enter an option: 3
 
   The list is already empty...
   *******************************
   *        Clearing Menu        *
   *                             *
   * 1. Clear Left List          *
   * 2. Clear Right List         *
   * 3. Clear Total List         *
   * 4. Quit                     *
   *******************************
   Enter an option: 6
 
   Try that again...
   *******************************
   *        Clearing Menu        *
   *                             *
   * 1. Clear Left List          *
   * 2. Clear Right List         *
   * 3. Clear Total List         *
   * 4. Quit                     *
   *******************************
   Enter an option: 4
 
   Returning to Main Menu
 *******************************
 *         Menu HW #4          *
 *    POLYNOMIAL OPERATIONS    *
 * 1. Creating polynomials     *
 * 2. Adding polynomials       *
 * 3. Multiplying polynomials  *
 * 4. Displaying polynomials   *
 * 5. Clearing polynomials     *
 * 6. Quit                     *
 *******************************
 Enter an option: 1
 
   *******************************
   *        Creation Menu        *
   *                             *
   * 1. Create Left Polynomial   *
   * 2. Create Right Polynomial  *
   * 3. Display Lists            *
   * 4. Quit                     *
   *******************************
   Enter an option: 8
 
   Really?
   *******************************
   *        Creation Menu        *
   *                             *
   * 1. Create Left Polynomial   *
   * 2. Create Right Polynomial  *
   * 3. Display Lists            *
   * 4. Quit                     *
   *******************************
   Enter an option: 3
 
   Left Operand is Empty, and Right Operand is Empty.
   *******************************
   *        Creation Menu        *
   *                             *
   * 1. Create Left Polynomial   *
   * 2. Create Right Polynomial  *
   * 3. Display Lists            *
   * 4. Quit                     *
   *******************************
   Enter an option: 1
 
   How many terms in the left operand? 3
 
   Creating term #1 --
   Enter a numerator for the coefficient: 1
 
   Enter a non-zero denominator for the coefficient: 1
 
   Enter an exponent: 2
 
   Creating term #2 --
   Enter a numerator for the coefficient: 3
 
   Enter a non-zero denominator for the coefficient: 4
 
   Enter an exponent: 1
 
   Creating term #3 --
   Enter a numerator for the coefficient: 5
 
   Enter a non-zero denominator for the coefficient: 12
 
   Enter an exponent: 0
 
   *******************************
   *        Creation Menu        *
   *                             *
   * 1. Create Left Polynomial   *
   * 2. Create Right Polynomial  *
   * 3. Display Lists            *
   * 4. Quit                     *
   *******************************
   Enter an option: 2
 
   How many terms in the right operand? 4
 
   Creating term #1 --
   Enter a numerator for the coefficient: 1
 
   Enter a non-zero denominator for the coefficient: 1
 
   Enter an exponent: 4
 
   Creating term #2 --
   Enter a numerator for the coefficient: -3
 
   Enter a non-zero denominator for the coefficient: 7
 
   Enter an exponent: 2
 
   Creating term #3 --
   Enter a numerator for the coefficient: 4
 
   Enter a non-zero denominator for the coefficient: 9
 
   Enter an exponent: 1
 
   Creating term #4 --
   Enter a numerator for the coefficient: 2
 
   Enter a non-zero denominator for the coefficient: 11
 
   Enter an exponent: 0
 
   *******************************
   *        Creation Menu        *
   *                             *
   * 1. Create Left Polynomial   *
   * 2. Create Right Polynomial  *
   * 3. Display Lists            *
   * 4. Quit                     *
   *******************************
   Enter an option: 3
 
   Left Operand is: 1/1x^2 + 3/4x^1 + 5/12x^0  and Right Operand is: 1/1x^4 - 3/7x^2 + 4/9x^1 + 2/11x^0
   *******************************
   *        Creation Menu        *
   *                             *
   * 1. Create Left Polynomial   *
   * 2. Create Right Polynomial  *
   * 3. Display Lists            *
   * 4. Quit                     *
   *******************************
   Enter an option: 4
 
   Returning to Main Menu
 *******************************
 *         Menu HW #4          *
 *    POLYNOMIAL OPERATIONS    *
 * 1. Creating polynomials     *
 * 2. Adding polynomials       *
 * 3. Multiplying polynomials  *
 * 4. Displaying polynomials   *
 * 5. Clearing polynomials     *
 * 6. Quit                     *
 *******************************
 Enter an option: 4
 
   *******************************
   *         Dislpay Menu        *
   *                             *
   * 1. Display Left List        *
   * 2. Display Right List       *
   * 3. Display Total List       *
   * 4. Quit                     *
   *******************************
   Enter an option: 1
 
   The Left List is : 1/1x^2 + 3/4x^1 + 5/12x^0
   *******************************
   *         Dislpay Menu        *
   *                             *
   * 1. Display Left List        *
   * 2. Display Right List       *
   * 3. Display Total List       *
   * 4. Quit                     *
   *******************************
   Enter an option: 2
 
   The Right List is : 1/1x^4 - 3/7x^2 + 4/9x^1 + 2/11x^0
   *******************************
   *         Dislpay Menu        *
   *                             *
   * 1. Display Left List        *
   * 2. Display Right List       *
   * 3. Display Total List       *
   * 4. Quit                     *
   *******************************
   Enter an option: 3
 
   The Total List is Empty.
   *******************************
   *         Dislpay Menu        *
   *                             *
   * 1. Display Left List        *
   * 2. Display Right List       *
   * 3. Display Total List       *
   * 4. Quit                     *
   *******************************
   Enter an option: 4
 
   Returning to Main Menu
 *******************************
 *         Menu HW #4          *
 *    POLYNOMIAL OPERATIONS    *
 * 1. Creating polynomials     *
 * 2. Adding polynomials       *
 * 3. Multiplying polynomials  *
 * 4. Displaying polynomials   *
 * 5. Clearing polynomials     *
 * 6. Quit                     *
 *******************************
 Enter an option: 2
 
   *******************************
   *        Addition Menu        *
   *                             *
   * 1. Add Lists                *
   * 2. Display Lists            *
   * 3. Quit                     *
   *******************************
   Enter an option: 1
 
   Performing the following operation:
   (1/1x^2 + 3/4x^1 + 5/12x^0 ) + (1/1x^4 - 3/7x^2 + 4/9x^1 + 2/11x^0 )
   After the function call the sum is: 1/1x^4 + 4/7x^2 + 43/36x^1 + 79/132x^0
   *******************************
   *        Addition Menu        *
   *                             *
   * 1. Add Lists                *
   * 2. Display Lists            *
   * 3. Quit                     *
   *******************************
   Enter an option: 2
 
   Left Operand is: 1/1x^2 + 3/4x^1 + 5/12x^0 and Right Operand is: 1/1x^4 - 3/7x^2 + 4/9x^1 + 2/11x^0
   The sum is: 1/1x^4 + 4/7x^2 + 43/36x^1 + 79/132x^0
   *******************************
   *        Addition Menu        *
   *                             *
   * 1. Add Lists                *
   * 2. Display Lists            *
   * 3. Quit                     *
   *******************************
   Enter an option: 3
 
   Returning to Main Menu
 *******************************
 *         Menu HW #4          *
 *    POLYNOMIAL OPERATIONS    *
 * 1. Creating polynomials     *
 * 2. Adding polynomials       *
 * 3. Multiplying polynomials  *
 * 4. Displaying polynomials   *
 * 5. Clearing polynomials     *
 * 6. Quit                     *
 *******************************
 Enter an option: 4
 
   *******************************
   *         Dislpay Menu        *
   *                             *
   * 1. Display Left List        *
   * 2. Display Right List       *
   * 3. Display Total List       *
   * 4. Quit                     *
   *******************************
   Enter an option: 1
 
   The Left List is : 1/1x^2 + 3/4x^1 + 5/12x^0
   *******************************
   *         Dislpay Menu        *
   *                             *
   * 1. Display Left List        *
   * 2. Display Right List       *
   * 3. Display Total List       *
   * 4. Quit                     *
   *******************************
   Enter an option: 2
 
   The Right List is : 1/1x^4 - 3/7x^2 + 4/9x^1 + 2/11x^0
   *******************************
   *         Dislpay Menu        *
   *                             *
   * 1. Display Left List        *
   * 2. Display Right List       *
   * 3. Display Total List       *
   * 4. Quit                     *
   *******************************
   Enter an option: 3
 
   The Total List is : 1/1x^4 + 4/7x^2 + 43/36x^1 + 79/132x^0
   *******************************
   *         Dislpay Menu        *
   *                             *
   * 1. Display Left List        *
   * 2. Display Right List       *
   * 3. Display Total List       *
   * 4. Quit                     *
   *******************************
   Enter an option: 4
 
   Returning to Main Menu
 *******************************
 *         Menu HW #4          *
 *    POLYNOMIAL OPERATIONS    *
 * 1. Creating polynomials     *
 * 2. Adding polynomials       *
 * 3. Multiplying polynomials  *
 * 4. Displaying polynomials   *
 * 5. Clearing polynomials     *
 * 6. Quit                     *
 *******************************
 Enter an option: 3
 
   *******************************
   *     Multiplication Menu     *
   *                             *
   * 1. Multiply Lists           *
   * 2. Display Lists            *
   * 3. Quit                     *
   *******************************
   Enter an option: 1
 
   Performing the following operation:
   (1/1x^2 + 3/4x^1 + 5/12x^0 ) * (1/1x^4 - 3/7x^2 + 4/9x^1 + 2/11x^0 )
   After the function call the product is: 1/1x^6 + 3/4x^5 - 1/84x^4 + 31/252x^3 + 311/924x^2 + 191/594x^1 + 5/66x^0
   *******************************
   *     Multiplication Menu     *
   *                             *
   * 1. Multiply Lists           *
   * 2. Display Lists            *
   * 3. Quit                     *
   *******************************
   Enter an option: 2
 
   Left Operand is: 1/1x^2 + 3/4x^1 + 5/12x^0 and Right Operand is: 1/1x^4 - 3/7x^2 + 4/9x^1 + 2/11x^0
   The product is: 1/1x^6 + 3/4x^5 - 1/84x^4 + 31/252x^3 + 311/924x^2 + 191/594x^1 + 5/66x^0
   *******************************
   *     Multiplication Menu     *
   *                             *
   * 1. Multiply Lists           *
   * 2. Display Lists            *
   * 3. Quit                     *
   *******************************
   Enter an option: 3
 
   Returning to Main Menu
 *******************************
 *         Menu HW #4          *
 *    POLYNOMIAL OPERATIONS    *
 * 1. Creating polynomials     *
 * 2. Adding polynomials       *
 * 3. Multiplying polynomials  *
 * 4. Displaying polynomials   *
 * 5. Clearing polynomials     *
 * 6. Quit                     *
 *******************************
 Enter an option: 4
 
   *******************************
   *         Dislpay Menu        *
   *                             *
   * 1. Display Left List        *
   * 2. Display Right List       *
   * 3. Display Total List       *
   * 4. Quit                     *
   *******************************
   Enter an option: 1
 
   The Left List is : 1/1x^2 + 3/4x^1 + 5/12x^0
   *******************************
   *         Dislpay Menu        *
   *                             *
   * 1. Display Left List        *
   * 2. Display Right List       *
   * 3. Display Total List       *
   * 4. Quit                     *
   *******************************
   Enter an option: 2
 
   The Right List is : 1/1x^4 - 3/7x^2 + 4/9x^1 + 2/11x^0
   *******************************
   *         Dislpay Menu        *
   *                             *
   * 1. Display Left List        *
   * 2. Display Right List       *
   * 3. Display Total List       *
   * 4. Quit                     *
   *******************************
   Enter an option: 3
 
   The Total List is : 1/1x^6 + 3/4x^5 - 1/84x^4 + 31/252x^3 + 311/924x^2 + 191/594x^1 + 5/66x^0
   *******************************
   *         Dislpay Menu        *
   *                             *
   * 1. Display Left List        *
   * 2. Display Right List       *
   * 3. Display Total List       *
   * 4. Quit                     *
   *******************************
   Enter an option: 4
 
   Returning to Main Menu
 *******************************
 *         Menu HW #4          *
 *    POLYNOMIAL OPERATIONS    *
 * 1. Creating polynomials     *
 * 2. Adding polynomials       *
 * 3. Multiplying polynomials  *
 * 4. Displaying polynomials   *
 * 5. Clearing polynomials     *
 * 6. Quit                     *
 *******************************
 Enter an option: 5
 
   *******************************
   *        Clearing Menu        *
   *                             *
   * 1. Clear Left List          *
   * 2. Clear Right List         *
   * 3. Clear Total List         *
   * 4. Quit                     *
   *******************************
   Enter an option: 1
 
   Clearing Left Operand...
   *******************************
   *        Clearing Menu        *
   *                             *
   * 1. Clear Left List          *
   * 2. Clear Right List         *
   * 3. Clear Total List         *
   * 4. Quit                     *
   *******************************
   Enter an option: 4
 
   Returning to Main Menu
 *******************************
 *         Menu HW #4          *
 *    POLYNOMIAL OPERATIONS    *
 * 1. Creating polynomials     *
 * 2. Adding polynomials       *
 * 3. Multiplying polynomials  *
 * 4. Displaying polynomials   *
 * 5. Clearing polynomials     *
 * 6. Quit                     *
 *******************************
 Enter an option: 4
 
   *******************************
   *         Dislpay Menu        *
   *                             *
   * 1. Display Left List        *
   * 2. Display Right List       *
   * 3. Display Total List       *
   * 4. Quit                     *
   *******************************
   Enter an option: 1
 
   The Left List is Empty.
   *******************************
   *         Dislpay Menu        *
   *                             *
   * 1. Display Left List        *
   * 2. Display Right List       *
   * 3. Display Total List       *
   * 4. Quit                     *
   *******************************
   Enter an option: 2
 
   The Right List is : 1/1x^4 - 3/7x^2 + 4/9x^1 + 2/11x^0
   *******************************
   *         Dislpay Menu        *
   *                             *
   * 1. Display Left List        *
   * 2. Display Right List       *
   * 3. Display Total List       *
   * 4. Quit                     *
   *******************************
   Enter an option: 3
 
   The Total List is : 1/1x^6 + 3/4x^5 - 1/84x^4 + 31/252x^3 + 311/924x^2 + 191/594x^1 + 5/66x^0
   *******************************
   *         Dislpay Menu        *
   *                             *
   * 1. Display Left List        *
   * 2. Display Right List       *
   * 3. Display Total List       *
   * 4. Quit                     *
   *******************************
   Enter an option: 4
 
   Returning to Main Menu
 *******************************
 *         Menu HW #4          *
 *    POLYNOMIAL OPERATIONS    *
 * 1. Creating polynomials     *
 * 2. Adding polynomials       *
 * 3. Multiplying polynomials  *
 * 4. Displaying polynomials   *
 * 5. Clearing polynomials     *
 * 6. Quit                     *
 *******************************
 Enter an option: 5
 
   *******************************
   *        Clearing Menu        *
   *                             *
   * 1. Clear Left List          *
   * 2. Clear Right List         *
  * 3. Clear Total List         *
   * 4. Quit                     *
   *******************************
   Enter an option: 2
 
   Clearing Right Operand...
   *******************************
   *        Clearing Menu        *
   *                             *
   * 1. Clear Left List          *
   * 2. Clear Right List         *
   * 3. Clear Total List         *
   * 4. Quit                     *
   *******************************
   Enter an option: 4
 
   Returning to Main Menu
 *******************************
 *         Menu HW #4          *
 *    POLYNOMIAL OPERATIONS    *
 * 1. Creating polynomials     *
 * 2. Adding polynomials       *
 * 3. Multiplying polynomials  *
 * 4. Displaying polynomials   *
 * 5. Clearing polynomials     *
 * 6. Quit                     *
 *******************************
 Enter an option: 4
 
   *******************************
   *         Dislpay Menu        *
   *                             *
   * 1. Display Left List        *
   * 2. Display Right List       *
   * 3. Display Total List       *
   * 4. Quit                     *
   *******************************
   Enter an option: 1
 
   The Left List is Empty.
   *******************************
   *         Dislpay Menu        *
   *                             *
   * 1. Display Left List        *
   * 2. Display Right List       *
   * 3. Display Total List       *
   * 4. Quit                     *
   *******************************
   Enter an option: 2
 
   The Right List is Empty.
   *******************************
   *         Dislpay Menu        *
   *                             *
   * 1. Display Left List        *
   * 2. Display Right List       *
   * 3. Display Total List       *
   * 4. Quit                     *
   *******************************
   Enter an option: 3
 
   The Total List is : 1/1x^6 + 3/4x^5 - 1/84x^4 + 31/252x^3 + 311/924x^2 + 191/594x^1 + 5/66x^0
   *******************************
   *         Dislpay Menu        *
   *                             *
   * 1. Display Left List        *
   * 2. Display Right List       *
   * 3. Display Total List       *
   * 4. Quit                     *
   *******************************
   Enter an option: 4
 
   Returning to Main Menu
 *******************************
 *         Menu HW #4          *
 *    POLYNOMIAL OPERATIONS    *
 * 1. Creating polynomials     *
 * 2. Adding polynomials       *
 * 3. Multiplying polynomials  *
 * 4. Displaying polynomials   *
 * 5. Clearing polynomials     *
 * 6. Quit                     *
 *******************************
 Enter an option: 5
 
   *******************************
   *        Clearing Menu        *
   *                             *
   * 1. Clear Left List          *
   * 2. Clear Right List         *
   * 3. Clear Total List         *
   * 4. Quit                     *
   *******************************
   Enter an option: 3
 
   Clearing Total List...
   *******************************
   *        Clearing Menu        *
   *                             *
   * 1. Clear Left List          *
   * 2. Clear Right List         *
   * 3. Clear Total List         *
   * 4. Quit                     *
   *******************************
   Enter an option: 4
 
   Returning to Main Menu
 *******************************
 *         Menu HW #4          *
 *    POLYNOMIAL OPERATIONS    *
 * 1. Creating polynomials     *
 * 2. Adding polynomials       *
 * 3. Multiplying polynomials  *
 * 4. Displaying polynomials   *
 * 5. Clearing polynomials     *
 * 6. Quit                     *
 *******************************
 Enter an option: 4
 
   *******************************
   *         Dislpay Menu        *
   *                             *
   * 1. Display Left List        *
   * 2. Display Right List       *
   * 3. Display Total List       *
   * 4. Quit                     *
   *******************************
   Enter an option: 3
 
   The Total List is Empty.
   *******************************
   *         Dislpay Menu        *
   *                             *
   * 1. Display Left List        *
   * 2. Display Right List       *
   * 3. Display Total List       *
   * 4. Quit                     *
   *******************************
   Enter an option: 4
 
   Returning to Main Menu
 *******************************
 *         Menu HW #4          *
 *    POLYNOMIAL OPERATIONS    *
 * 1. Creating polynomials     *
 * 2. Adding polynomials       *
 * 3. Multiplying polynomials  *
 * 4. Displaying polynomials   *
 * 5. Clearing polynomials     *
 * 6. Quit                     *
 *******************************
 Enter an option: 6
 
 Having fun with polynomials!
*/

/* LOGIC_AND_CODE_ISSUES
 
 There is a significant logic flaw somewhere in my code. I believe it is in
 how I combine like terms. When I go to clear a list, sometimes I get the
 following error: "malloc: *** error for object 0x102a04c80: pointer being
 freed was not allocated *** set a breakpoint in malloc_error_break to debug".
 As far as I can tell, all of the nodes in my lists are allocated in the same
 way.

 
 */
