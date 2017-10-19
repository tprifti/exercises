/*
* C program to find perimeter of rectangle
*/

#include <stdio.h>

int main()
{
   float length, width, perimeter;

   /*
    * Input length and width of rectangle from user
    */
   printf("Enter length of the rectangle: ");
   scanf("%f", &length);
   printf("Enter width of the rectangle: ");
   scanf("%f", &width);

   /* Calculate perimeter of rectangle */
   perimeter = 2 * (length + width);

   /* Print perimeter of rectangle */
   printf("Perimeter of rectangle = %f units\n", perimeter);

   return 0;
}