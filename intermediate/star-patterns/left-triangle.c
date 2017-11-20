#include <stdio.h>

int main(){

    int i, j, rreshta;

    printf("Shkruaj numrin e rreshtave: ");
    scanf("%d", &rreshta);

    for(i=1; i<=rreshta; i++){
        for(j=i; j<=rreshta; j++){
            printf(" ");
        }

        for(j=1; j<=i; j++){
            printf("*");
        }

        printf("\n");
    }
    return 0;
}