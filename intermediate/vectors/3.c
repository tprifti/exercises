#include <stdio.h>

int main(){
    int T[] = {1, 2, 3, 4, 1, 2, 3, 4, 5, 2, 3, 5, 6, 71}; //random numbers (total: 14 numbers)
    int A[] = {2, 3, 4};
    int i;
    for(i = 0; i < 14-2; i++){
        if(T[i] == A[0] && T[i+1] == A[1] && T[i+2] == A[2]){
            T[i] = 0;
            T[i+1] = 0;
            T[i+2] = 0;
        }
    }

    for(i = 0; i < 14; i++){
        printf("%d, ",T[i]);        
    }
    printf("\n");
    
    
    return 0;
}

/** 
 * given vector T[] and A[], if vector A values 
 * exist in T vector, replace them with 0 , e.g.
 * T[] = {1, 0, 0, 0, 1, 0, 0, 0, 5}
 */
