#include <stdio.h>

int main(){
    int m = 5;  // deklarojme 5 shites
    int n = 10; // 10 shitje secili
    int i=0,index=0;      // helpers
    int FITIMI[] = {0, 0, 0, 0, 0}; // initialize all elements to 0 because i don't know pointers (O_O)

    int K[] = {8, 28, 30, 21, 70};
    int SHITJE[] = {8, 21, 8, 30, 70, 21, 21, 28, 70, 28};
    int VLERA[] = {293, 294, 254, 330, 298, 354, 345, 297, 364, 20};

    /** +---+---------------+
     *  |ID | VLERA         |
     *  +---+---------------+
     *  |8  | (293,254)     |
     *  +---+---------------+ 
     *  |28 | (297,20)      |
     *  +---+---------------+
     *  |30 | (330)         |
     *  +---+---------------+
     *  |21 | (294,354,345) | (expect ID:21, and sum: 993 )
     *  +---+---------------+
     *  |70 | (298,364)     |
     *  +-------------------+
     */
    while(index < m){
        for(i = 0; i < n; i++){
            if(K[index] == SHITJE[i]){
                FITIMI[index] += VLERA[i];
            }
        }
        index++;
    }
        
    int max = FITIMI[0];
    for(i = 1; i < m; i++){
        if(FITIMI[i] > max){
            max = FITIMI[i];
            index = i;
        }
    }
    //output shitesin me index: {index}
    printf("Shitesi me Kod %d ka %d te ardhura\n",K[index],FITIMI[index]);
    return 0;
}

/** 
 * shitesit 
 * kod unik ne tabelen  K[1...M]
 * shitje ne tabelen    SHITJE[1...N]
 * vlera e shitjes      VLERA[1...N]
 * 
 * @TODO: gjej shitesin qe ka gjeneruar me shume te ardhura
 */