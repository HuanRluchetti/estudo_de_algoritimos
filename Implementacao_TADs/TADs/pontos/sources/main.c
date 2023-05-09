#include <stdio.h>
#include "../Headers/ponto.h"

int main() {
    Fracao f1 = NULL, f2 = NULL;

    f1->numerador = 4;
    f1->denominador = 8;

    f2->numerador = 3;
    f2->denominador = 9;

    printf("%d/%d\n",get_numerador(f1),get_denominador(f1));
    printf("%d/%d",get_numerador(f2),get_denominador(f2));
    printf("hello world!");

    return 0;
}
