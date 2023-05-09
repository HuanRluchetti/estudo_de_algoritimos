#include <stdio.h>

void soma (int *a, int *b ) {
  *a = *a + *b;
}

int main () {
  int a = 1;
  int b = 2;

  soma(&a,&b);

  printf("%d",a);
  
  return 0;
}