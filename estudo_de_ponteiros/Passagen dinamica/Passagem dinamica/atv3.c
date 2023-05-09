#include <stdio.h>
#include <stdlib.h>

char *aloca(int t) {

  char *p = (char *)malloc(t * sizeof(char));
  return p;
}

int main() {
  int tam;
  char *str;

  printf("Insira o tamanho da string: ");
  scanf("%d", &tam);

  str = aloca(tam);

  printf("Insira a string: ");
  scanf("%s", str);

  for (int i = 0; i < tam; i++) {
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||str[i] == 'o' || str[i] == 'u') {

      for (int k = i; k < tam; k++) {
        str[k] = str[k + 1];
      }
      tam--;
      str = (char *)realloc(str, tam * sizeof(char));
    }
  }

  printf("%s\n", str);

  void free(void *str);
  return 0;
}
