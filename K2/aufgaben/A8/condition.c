#include <stdio.h>
#include "condition.h"

int trace(int i){
  printf("Zahl: %d\n", i);
  return i;
}

int condition(int cond, int altTrue, int altFalse){
  return cond ? altTrue : altFalse;
}

int main(){
  printf("condition: %i\n", condition(trace(1),trace(17),trace(4)));
  printf("operator: %i\n", trace(1)?trace(17):trace(4));
  return 0;
}
