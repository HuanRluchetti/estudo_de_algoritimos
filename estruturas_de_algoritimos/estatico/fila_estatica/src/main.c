#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main() {
    Fila fila = cria_fila();

    inserir_item(fila, 30);
    inserir_item(fila, 12);

    printf("\nConsulta: %d", consulta(fila));
    printf("\nprimeira posicao: %d", proximo(fila));
    printf("\n");
    printf("\nRemover elemento: %d",remover_elemento(fila));
    printf("\nprimeira posicao: %d", proximo(fila));

    return 0;


}