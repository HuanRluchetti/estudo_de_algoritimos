#ifndef LISTA_DINAMICA_LISTA_H
#define LISTA_DINAMICA_LISTA_H

struct dado {
    int chave;
    char *nome[50];
    float nota_1,nota_2,nota_3,nota_4;
};
typedef struct dado aluno;
typedef struct dado dado;

struct node {
    dado dado;
    struct node *next;
};
typedef struct node node;

typedef struct queue* Queue;

Queue cria_lista();
void libera_lista(Queue li);

void insere_fim_lista(Queue li, dado alu);
void insere_inicio_lista(Queue li, dado alu);

void imprimir_lista(Queue li);

int tamanho_lista (Queue li);
int lista_cheia (Queue li);
int lista_vazia (Queue li);

void remove_lista(Queue li, dado ch);

dado consulta_lista_chave (Queue li, int ch, dado al);

dado consulta_lista_posicao(Queue li, int p, dado al);

#endif //LISTA_DINAMICA_LISTA_H
