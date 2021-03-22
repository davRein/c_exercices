#include <stdio.h>

int calcArea(int nLength, int nWidth){
  int area = nLength * nWidth;
  return area;
}


int main(){
  int nLength, nWidth = 0;
  printf("Length: ");
  scanf("%d", &nLength);
  printf("Width: ");
  scanf("%d", &nWidth);

  printf("Area: %d", calcArea(nLength, nWidth));
}
