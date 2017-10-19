/**
 * C program to find sum of two numbers
 */

#include <stdio.h>

int main()
{
    int num1, num2, sum;
    
    /*
     * Input two numbers from user
     */
    printf("Enter any two numbers : ");
    
    scanf("%d%d", &num1, &num2);
    
    sum = num1 + num2;
    
    /* Prints the sum of two numbers */
    printf("Sum of %d and %d = %d\n", num1, num2, sum);
    
    return 0;
}