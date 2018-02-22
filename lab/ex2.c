#include <stdio.h>

int main(){
    unsigned char a;
    int i = 97;
    
    for(a = 'A'; a<= 254; ++a){
        printf("%c %d\n",a,i);
        i++;
    }

    return 0;
}

/* i cili vizualizon shkronjat e alfabetit 
    nga a-z e.g. a 97 */