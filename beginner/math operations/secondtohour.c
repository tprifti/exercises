#include <stdio.h>
#include <math.h>

int main (){
    int hour, min, sec;

    printf("Shkruaj sekondat:");
    scanf("%d", &sec);

    hour = sec / 3600;
    min = (sec - (hour * 3600))/60;
    sec = sec - (hour * 3600) - (min * 60);

    printf("Ore: %d\n", hour);
    printf("Minuta: %d\n", min);
    printf("Sekonda: %d\n", sec);
    return 0;
}