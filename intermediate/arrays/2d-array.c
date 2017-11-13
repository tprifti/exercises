#include <math.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>


int main(){
    int arr[6][6];
    for(int i = 0; i < 6; i++){
       for(int j = 0; j < 6; j++){
          scanf("%d",&arr[i][j]);
       }
    }
    
    long temp_sum = 0, MaxSum = LONG_MIN;
    
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 6; ++j) {
            if (j + 2 < 6 && i + 2 < 6) {
                temp_sum = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i + 1][j + 1] + arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];
                if (temp_sum >= MaxSum) {
                    MaxSum = temp_sum;
                }
            }
        }
    }
    printf( "%ld\n", MaxSum);
    return 0;
}
