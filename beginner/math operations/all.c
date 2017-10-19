/**
 * C program to perform all arithmetic operations
 */

#include <stdio.h>

int main()
{
    int num1, num2;
    int sum, sub, mult, mod;
    float div;

    /*
     * Input two numbers from user
     */
    printf("Enter any two numbers: ");
    scanf("%d%d", &num1, &num2);

    /*
     * Perform all arithmetic operations
     */ 
    sum = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = (float) num1 / num2; /*In statement div = (float) num1 / num2; I have typecasted num1 to float 
                                before the divide operation, to avoid integer division */
    mod = num1 % num2;

    /*
     * Print result of all arithmetic operations
     */
    printf("SUM = %d\n", sum);
    printf("DIFFERENCE = %d\n", sub);
    printf("PRODUCT = %d\n", mult);
    printf("QUOTIENT = %f\n", div);
    printf("MODULUS = %d", mod);

    return 0; 
}

/* In computer programming divisions are performed differently. Apparently there are two types of division.

    1.Integer division
    2.Real division

    C performs integer division if both operands are integer type. Integer division always evaluates to 
    an integer discarding the fractional part.

    C performs real division if any of the two operands are real type (either float or double). 
    Real division evaluates to a real value containing integer as well as fractional part. 
*/
