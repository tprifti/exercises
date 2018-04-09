#include <stdio.h>
void swap(int*, int*);
void sort(int[]);
void otest(int[]);

/** 
 * @Sort array, 
 * even numbers in the left
 * odd numbers in the right
 * Time complexity: O(n)
 * 
 * I : {1, 2, 3, 4, 5, 6, 7}
 * O :  Pass Number: 1
        1,2,3,4,5,6,7,
        
        Pass Number: 2
        1,7,3,4,5,6,2,
        
        Pass Number: 3
        1,7,3,5,4,6,2,
 */
int main(){
    int test[] = {1, 2, 3, 4, 5, 6, 7}; // 7 numbers
    sort(test);
    return 0;
}

void sort(int arr[]){
    int size = 7, left = 0, right = size-1, k=1; // k is not useful in logic, just helper

    while(left < right){
        while(arr[left] % 2 == 1) left++;
        while(arr[right] % 2 == 0) right--;
        
        printf("Pass Number: %d\n", k);
        otest(arr); // just print current state of array
        printf("\n");

        swap(&arr[left], &arr[right]);
        k++;    
    }   
}

void otest(int arr[]){
    for(int i=0; i<7; i++){
        printf("%d,", arr[i]);
    }
}

void swap(int *a, int *b){
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}