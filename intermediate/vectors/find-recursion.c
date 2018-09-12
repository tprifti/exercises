#include <stdio.h>

int find(int T[], int size, int n);

int main(){

    int T[] = {1,2,3,4,5,6,7,8,9,10,10,10,10,12,10};
    printf("%d\n",find(T,15,10));
    return 0;
}

/**
 * find elements equal to n parameter
 * using recursion
 */
int find(int T[], int size, int n){
    if(size < 0) return 0;
    int count = 0;

    if(T[size] == n) count++;

    return count + find(T, size-1, n);
}