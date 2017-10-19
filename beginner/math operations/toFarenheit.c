/**
 * C program to convert temperature from degree celsius to fahrenheit
 */

#include <stdio.h>

int main()
{
    float celsius, fahrenheit;

    /* Input temperature in celsius */
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    /* celsius to fahrenheit conversion formula */
    fahrenheit = (celsius * 9 / 5) + 32;

    printf("%.2f Celsius = %.2f Fahrenheit \n", celsius, fahrenheit);

    return 0;
}

/**
 * %.2f is used to print fractional numbers up to two decimal places.
 * You can also use %f to print fractional normally up to six decimal places.
 */