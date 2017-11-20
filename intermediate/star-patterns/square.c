#include <stdio.h>

int main(){

    int i, j, rreshta;

    printf("Numri i rreshtave: ");

    scanf("%d",&rreshta);

    for(i=1; i<=rreshta; i++){
        for(j=1; j<= rreshta; j++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}