#include <stdio.h>

int f1(){
  //y wird nur beim 1. Aufruf der Funktion initialisiert. 
  static int y = 0;
  y++;
  return y;
}

int main(){
  for (int i = 0; i < 3; i++){
    printf("Runde %d: Y = %d\n", i, f1());
  }
  return 0;
}
