#include <stdio.h>

int fib(int var){
  return var <= 1 ? var : (fib(var - 1) + fib(var - 2));
}

int main(){
  int n = 0;
  printf("Anzahl: ");
  scanf("%d", &n);
  printf("FIB: %d", fib(n));
  return 0;
  
}
