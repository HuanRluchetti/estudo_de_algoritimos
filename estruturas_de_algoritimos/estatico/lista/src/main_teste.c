#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "../header/lista_estatica.h"

int main() {
    Lista li = cria_lista();

    aluno aluno1;
    aluno1.nome = "Yudi";
    aluno1.chave = 40028922;
    aluno1.nota_1 = 10.0;
    aluno1.nota_2 = 5.6;
    aluno1.nota_3 = 6.5;
    aluno1.nota_4 = 7.0;

    insere_inicio_lista(li,aluno1);

    imprimir_lista(li);

    return 0;
}
