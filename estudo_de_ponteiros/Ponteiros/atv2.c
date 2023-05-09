#include <stdio.h>

int numMaior (int *a, int *b) {
  if (*a > *b) {
    return *a;
  } else {
    return *b;
  }
}

int main(void) {
  int maior = 1, menor = 20;
  int *pf = &maior;
  int *ps = &menor;

  const int resultado = numMaior(pf, ps);

  printf("%d",resultado);
  return 0;
}