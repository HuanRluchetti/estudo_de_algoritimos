#include <stdio.h>

int main() {
  int inteiro = 1;
  double real = 1;
  char carater[5] = "testa";

  printf("Antes -> %d, %f, %s\n",inteiro,real,carater);

  int *pi = &inteiro;
  double *pr = &real;
  char *pc = carater;

  *pi = 3;
  *pr = 5.5;
  *(pc + 4) = 'e';

  printf("Depois -> %d, %f, %s\n",inteiro,real,carater);
  
  return 0;
}