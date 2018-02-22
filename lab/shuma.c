#include <stdio.h>

int shuma(int a,int b){
    int sh;
    sh = a+b;
    return sh;
}

int diferenca(int a,int b){
    int diff;
    diff = a-b;
    return diff;
}

int main(){

    int a,b;

    scanf("%d %d", &a, &b);

    printf("Shuma e %d me %d eshte: %d dhe diferenca: %d",a,b,shuma(a,b),diferenca(a,b));
    return 0;
}
