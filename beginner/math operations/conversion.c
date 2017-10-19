/**
 * C program to convert centimeter into meter and kilometer
 */

#include <stdio.h>

int main()
{
    float cm, meter, km;

    /* Input length in centimeter from user */
    printf("Enter length in centimeter: ");
    scanf("%f", &cm);

    /* Convert centimeter into meter and kilometer */
    meter = cm / 100.0;
    km    = cm / 100000.0;

    printf("Length in Meter = %.2f m \n", meter);
    printf("Length in Kilometer = %.2f km \n", km);

    return 0;
}