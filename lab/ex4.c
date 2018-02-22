#include <stdio.h>

void checkForX();

int main(){
    checkForX();
}

void checkForX(){

    char val;
    scanf("%c", &val);
    if(val == 'x'){
        printf("\n");
    }else {
        checkForX();
        printf("%c",val);
     }

}

/* shkruani nje program i cili lexon karakterin nga tastiera deri sa te shtypet karakteri x
kur shtypet karakteri x, ne rreshtin me poshte vizualizohen karakteret ne rendin e kundert*/