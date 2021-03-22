#include <stdio.h>
#include "fak.h"

int fak(int n){
  return n <= 1 ? n : n * fak(n-1);
}

int main(){
  int i;
  printf("Wert: ");
  scanf("%d", &i);
  printf("Fakultät von %d ist %d\n", i, fak(i));
}
