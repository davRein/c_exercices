#include <stdio.h>
#include "fib.h"

int fib(int n){
  return n <= 1 ? n : fib(n-1) + fib(n-2);
}

int main(){
  printf("Fibunacci Stelle: ");
  int n = 0;
  scanf("%d", &n);
  printf("FIB(%d): %d\n", n, fib(n));
  return 0;
}
