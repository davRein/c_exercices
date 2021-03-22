#include <stdio.h>

long fak(int val){
  return val == 0 ? 1 : val * fak(val - 1);
}


int main(){
  int count = 0;
  printf("Wert eingeben: ");
  scanf("%d", &count);
  printf("Fak von %d ist %d\n", count, fak(count));
  return 0;
}

