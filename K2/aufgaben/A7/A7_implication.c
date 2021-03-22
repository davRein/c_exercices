#include <stdio.h>

int implication(int a, int b){
  return !a || b;
}

int main(){
  printf("implication(1==0, 1>2): %i\n", implication(1==0, 1>2));
  printf("implication(1>2, 1==0): %i\n", implication(1>2, 1==0));
  return 0;
}
