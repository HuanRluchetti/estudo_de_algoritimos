//
// Created by huanl on 05/04/2023.
//

#ifndef ATVTADSQUESTOES_CILINDRO_H
#define ATVTADSQUESTOES_CILINDRO_H

struct cilindro {
    double altura;
    double raio;
};
typedef struct cilindro cilindro;
typedef struct cilindro* Cilindro;

void cria_cilindro(Cilindro cilindro, double altura, double raio);

double altura(Cilindro cilindro);

double raio(Cilindro cilindro);

double area(Cilindro cilindro);

double volume(Cilindro cilindro);





#endif //ATVTADSQUESTOES_CILINDRO_H
