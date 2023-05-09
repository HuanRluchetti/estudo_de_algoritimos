#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "fila.h"

bool verifica_fila_vazia (Fila fila) {
    if (fila->inicio == fila->fim) {
        return true;
     } else {
        return false;
    }
};




Fila cria_fila() {
    Fila fila = (Fila) (Fila *) malloc(sizeof(Fila));
    fila -> inicio = 0;
    fila -> fim = 0;
    return fila;
}

int consulta (Fila fila) {
    if(verifica_fila_vazia(fila)) {
        printf("Fila vazia insira um item.");
        exit(1);
    } else {
        return fila->vetor[fila->inicio];
    }
}

void inserir_item (Fila fila,int element) {
    if (fila->fim >= MAX-1){
        printf("\nFila cheia.");
        exit(1);
    } else {
        fila -> vetor[fila->fim] = element;
        fila->fim++;
    }
}

int tamanho (Fila fila) {
    return fila->fim;
}

int proximo (Fila fila) {
    return fila->vetor[0];
}

int remover_elemento(Fila fila){
    if (verifica_fila_vazia(fila)) {
        printf("Não se pode remover um item com a lista vazia, ANIMAL!");
        exit(1);
    } else {
        int x, i;

        x = proximo (fila);

        for (i=0;i<tamanho(fila);i++){
            fila->vetor[i] = fila->vetor[i+1];
        }

        fila->fim--;

        return x;
    }
}
