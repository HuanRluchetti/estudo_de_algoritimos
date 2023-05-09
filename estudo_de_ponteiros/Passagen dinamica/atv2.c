#include <stdio.h>
#include <stdlib.h>


int main () {
  int tam;

  printf("Insira o tamanho do vetor: ");
  scanf("%d", &tam);
  
  int *p;
  p = (int *) malloc(tam*sizeof(int));

  for (int i = 0; i < tam; i++) {
    scanf("%d",&p[i]);    
  }

  for (int i = 0;i < 5;i++) {
    printf("%d\n",p[i]);
  }

  void free(void*p);
  return 0;
}

