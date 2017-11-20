#include <stdio.h>

int main(){
    int i, n, a=1, b=2;
    float s=0;    


    printf("Vendosni nje numer. \n");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        s += ((float)a/b);
        a++;
        b++;
    }
    printf("%f",s);
    return 0;
}

// day-2