#include <stdio.h>

int main(){
    int arr[3][7] = {{1,0,1,1,1,1,1}, // 5
                     {1,1,0,1,1,1,1}, // 4
                     {1,1,1,1,1,1,1}};// 7
    
    int c, count=0;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 7; j++){
            if(arr[i][j] == 1){
                c++;
            } else{ 
                count = c;
                c=0;
            }
        }
        if(c > count){
            count = c;
        }
        c = 0;
        printf("%d\n", count);
    }   
}

/** 
 * OUTPUT : 5,4,7
 */