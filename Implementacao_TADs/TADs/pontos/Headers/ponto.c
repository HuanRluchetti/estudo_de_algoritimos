#include <stdlib.h>
#include "ponto.h"

static int mdc(int num, int dem){
    int resto;
    int demo;

    while (dem != 0) {
        resto = num % dem;
        num = dem;
        dem = resto;

    }
    demo = dem;
    return demo;
}

Fracao cria_fracao(int num, int den ) {
    Fracao fracao1 = malloc( sizeof(Fracao));
    fracao1->numerador = num;
    fracao1->denominador = den;

    return fracao1;
}

void libera_fracao(Fracao *f) {
    free(f);
}

int get_numerador(Fracao f){
    return f->numerador;
}

int get_denominador(Fracao f){
    return f->denominador;
}

Fracao somar_fracoes(Fracao f1, Fracao f2) {
    Fracao fracao = malloc(sizeof(Fracao));

    if (f1->denominador == f2->denominador) {
        fracao->numerador = f1->numerador + f2->numerador;
        return fracao;
    } else {
        int novo_num = (f1->numerador * f2->denominador) + (f2->numerador * f1->denominador) ;
        int novo_den = f1->denominador * f2->denominador;

        fracao->numerador = novo_num;
        fracao->denominador = novo_den;
        return fracao;
    }
}

Fracao subtrair_fracoes(Fracao f1, Fracao f2) {
    Fracao fracao = malloc(sizeof (Fracao));

    if (f1->denominador == f2->denominador) {
        int novo_num = f1->numerador - f2->numerador;
        fracao->numerador = novo_num;

        return fracao;
    } else {
        int novo_num = (f1->numerador * f2->denominador) - (f2->numerador * f1->denominador) ;
        int novo_den = f1->denominador * f2->denominador;

        fracao->numerador = novo_num;
        fracao->denominador = novo_den;
        return fracao;
    }
}

void forma_irredutivel(fracao *f) {
    int mdC = mdc(f->numerador, f->denominador);
    f->numerador /= mdC;
    f->denominador /= mdC;
}