#include <stdio.h>

int main(){
  int z1, z2 = 0;

  printf("Zahl 1: ");
  scanf("%d", &z1);
  printf("Zahl 2:");
  scanf("%d", &z2);

  printf("%s", z1 > z2 ? "größer" : "kleiner");
}
