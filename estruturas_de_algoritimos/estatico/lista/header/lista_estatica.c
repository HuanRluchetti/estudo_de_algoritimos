#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "lista_estatica.h"

struct lista{
    int quantidade;
    aluno dados[MAX];
};


Lista cria_lista() {
    Lista li = *(Lista *) malloc(sizeof(struct lista));
    if(li != NULL)
        li->quantidade = 0;

    return li;
}

void libera_lista(Lista li){
    free(li);
}


int tamanho_lista (Lista li) {
    if (li == NULL)
        return -1;
    else
        return li->quantidade;
}

int lista_cheia (Lista li) {
    if (li == NULL)
        return -1;
    return (li -> quantidade == MAX);
    //caso retorne 1 é verdade
}

int lista_vazia (Lista li) {
    if (li == NULL)
        return -1;
    return (li -> quantidade == 0);
    // caso retorne 1 é verdade
}

void inserir_fim_lista (Lista li,aluno al) {
    if (lista_vazia(li)){
        printf("Lista vazia!\n Insira algum elemento.");
        return;
    }

    if (lista_cheia(li)){
        printf("Lista cheia!");
        return;
    }

    li-> dados[li->quantidade] = al;
    li->quantidade++;
}

void insere_inicio_lista(Lista li, aluno al) {
    if (lista_vazia(li)){
        printf("Lista vazia!\n Insira algum elemento.");
        return;
    }

    if (lista_cheia(li)){
        printf("Lista cheia!");
        return;
    }

    for (int i = li->quantidade-1; i>=0; i--)
        li->dados[i+1] = li->dados[i];

    li->dados[0] = al;
    li->quantidade++;
}

void imprimir_lista(Lista li) {

    if (lista_vazia(li)){
        printf("Lista vazia!\n Insira algum elemento.");
        return;
    } else {
        for(int i = 0; i < li->quantidade;i++){
            printf("%d \n",li->dados[i].chave);
        }
    }
}

void remove_lista(Lista li, aluno ch){
    if (lista_vazia(li)){
        printf("Lista vazia!\n Insira algum elemento.");
        return;
    }
    if (li->quantidade == 0) {
        printf("Lista vazia!\n Insira algum elemento.");
        return;
    }

    int j,i = 0;

    while(i < li->quantidade && li->dados[i].chave != ch){
        i++;
    }

    if(i == li->quantidade){
        printf("Elemento não encontrado!")
        return;
    }

    li->quantidade--;
}

aluno consulta_lista_posicao(Lista li, int p, aluno al){
    if(li==NULL || p <= 0 || p > li->quantidade){
        exit(1);
    }
    return al = li->dados[p-1];
}


aluno consulta_lista_chave (Lista li, int ch, aluno *al){
    if (lista_vazia(li)){
        printf("Lista vazia!\n Insira algum elemento.");
        return;
    }
    int k,i =0;
    while (i < li->quantidade && li->dados[i].matricula != mat){
        i++;
    }

    if(i == li -> quantidade) {
        printf("Elemento não encontrado!")
        return;
    }

    return *al = li->dados[i];
}

