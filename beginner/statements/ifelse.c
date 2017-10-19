#include <stdio.h>

int main()
{
    /* Declare constant name of weeks */
    const char * WEEKS[] = { "Monday", "Tuesday", "Wednesday", 
                            "Thursday", "Friday", "Saturday", 
                            "Sunday"};
    int week;

    /* Input week number from user */
    printf("Enter week number (1-7): ");
    scanf("%d", &week);
	
    if(week > 0 && week < 8)
    {
        /* Print week name using array index */
        printf("%s\n", WEEKS[week-1]);
    }
    else
    {
        printf("Invalid input! Please enter week number between 1-7.");
    }

    return 0;
}