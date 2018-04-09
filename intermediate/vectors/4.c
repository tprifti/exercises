#include <stdio.h>

void remove_element(int*, int, int);
void current_state(int, int*);

int main(){
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i, K = 4;

    int size = sizeof(A)/sizeof(A[0]);

    int newsize = size;
    for(i = 0; i < size-1; i++){
        while(A[i] < K){
            remove_element(A, i, size);
            newsize--;
            current_state(newsize, A);
        }
    }
    return 0;
}

void current_state(int size, int *A){
    printf("Array size after removing : %d\n", size);
    for(int i = 0; i < size; i++) printf("%d,", A[i]);
    printf("\n");
}

void remove_element(int *array, int index, int size){
   int i;
   for(i = index; i < size - 1; i++) array[i] = array[i + 1];
}