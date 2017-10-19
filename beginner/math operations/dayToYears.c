/**
 * C program to convert days in to years, weeks and days
 */

#include <stdio.h>

int main()
{
    int days, years, weeks;

    /* Input total number of days from user */
    printf("Enter days: ");
    scanf("%d", &days);

    /* Conversion */
    years = (days / 365);   // Ignoring leap year
    weeks = (days % 365) / 7;
    days  = days - ((years * 365) + (weeks * 7));

    /* Print all resultant values */
    printf("YEARS: %d\n", years);
    printf("WEEKS: %d\n", weeks);
    printf("DAYS: %d\n", days);

    return 0;
}