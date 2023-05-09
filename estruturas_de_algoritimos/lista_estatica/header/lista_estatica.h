//
// Created by huanl on 22/04/2023.
//

#ifndef LISTA_LISTA_ESTATICA_H
#define LISTA_LISTA_ESTATICA_H

#define MAX 20
#include <stdbool.h>

struct dado {
    int chave;
    char *nome[50];
    float nota_1,nota_2,nota_3,nota_4;
};
typedef struct dado aluno;
typedef struct dado dado;

typedef struct lista* Lista;

Lista cria_lista();
void libera_lista(Lista li);

void insere_fim_lista(Lista li, aluno alu);
void insere_inicio_lista(Lista li, aluno alu);

void imprimir_lista(Lista li);

int tamanho_lista (Lista li);
int lista_cheia (Lista li);
int lista_vazia (Lista li);

void remove_lista(Lista li, aluno ch);

aluno consulta_lista_chave (Lista li, int ch, aluno *al);

aluno consulta_lista_posicao(Lista li, int p, aluno *al);

#endif //LISTA_LISTA_ESTATICA_H
