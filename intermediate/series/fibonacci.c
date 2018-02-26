#include<stdio.h>

int Fibonacci(int);

int main()
{
  int n, i = 0, c;

  scanf("%d",&n);


  for ( c = 1 ; c <= n ; c++ ){
     printf("%d\n", Fibonacci(i));
     i++; 
  }

  return 0;
}

int Fibonacci(int n){
    if(n == 1) return 1;
    if(n == 0) return 0;
    return ( Fibonacci(n-1) + Fibonacci(n-2) );
}