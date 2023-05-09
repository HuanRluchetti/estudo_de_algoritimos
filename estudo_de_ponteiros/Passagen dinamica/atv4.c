#include <stdio.h>
#include <stdlib.h>

struct registro {
    int matricula, ano_nascimento;
    char sobrenome[50];
};
typedef struct registro Registro;

int main() {
    int t;
    Registro *aluno[t];

    printf("Insira quantos alunos deseja cadastrar: ");
    scanf("d%",t);



    return 0;
}