#ifndef PONTOS_PONTO_H
#define PONTOS_PONTO_H

struct fracao {
    int numerador, denominador;
};
typedef struct fracao fracao;
typedef struct fracao* Fracao;

Fracao cria_fracao(int num, int dem );

void libera_fracao(Fracao *f);

int get_numerador(Fracao f);
int get_denominador(Fracao f);
float get_forma_decimal(Fracao f);

Fracao somar_fracoes(Fracao f1, Fracao f2);
Fracao subtrair_fracoes(Fracao f1, Fracao f2);

void forma_irredutivel(fracao *f);


#endif //PONTOS_PONTO_H