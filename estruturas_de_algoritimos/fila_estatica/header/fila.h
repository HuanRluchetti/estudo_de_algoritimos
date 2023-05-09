#ifndef FILAS_FILA_H
#define FILAS_FILA_H
#define MAX 20
#include <stdbool.h>

struct fila{
    int quantidade;
    int vetor[MAX];
    int inicio ;
    int fim;
};

typedef struct fila fila;
typedef struct fila* Fila;

Fila cria_fila ();

void inserir_item(Fila fila,int element);

bool verifica_fila_vazia(Fila fila);

int consulta (Fila fila);

int tamanho(Fila fila);

int remover_elemento(Fila fila);

int proximo (Fila fila);
#endif //FILAS_FILA_H