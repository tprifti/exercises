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
    return ( Fibonacci(n-1) + Fibonacci(n-2) );
}