#include <stdio.h>
int main(){
  printf("signum(42) = %i\n",(42>0)?1:((42<0)?-1:0));
  return 0;
}
