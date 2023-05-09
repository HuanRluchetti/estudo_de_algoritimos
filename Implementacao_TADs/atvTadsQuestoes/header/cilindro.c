#include <stdio.h>
#include <math.h>
#include "cilindro.h"


void cria_cilindro(Cilindro cilindro, double altura, double raio) {
    cilindro->altura = altura;
    cilindro->raio = raio;
}

double altura(Cilindro cilindro) {
    return cilindro->altura;
}

double raio(Cilindro cilindro) {
    return cilindro->raio;
}

double area(Cilindro cilindro) {
    return 2 * M_PI * cilindro->raio * (cilindro->raio + cilindro->altura);
}

double volume(Cilindro cilindro) {
    return M_PI * pow(cilindro->raio, 2) * cilindro->altura;
}