#include <stdio.h>

int toBit(int);

int main(){
    int a;
    scanf("%d",&a);
    printf("%d", toBit(a));
    return 0;
}

int toBit(int a){
    if (a==0){
        return 0;
    }
    return (a % 2) + 10 * toBit(a/2);
}

// int toBit(int a){
//     int t,mb;
//     if(a>0){
//         t = a/2;
//         mb = nr%2;
//         toBit(a);
//     }
// }

/*
    lexon int dhe afishon vleren binare te tij
    input=13 -> output: 1101
*/
