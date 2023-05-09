#include <iostream>

using namespace std;

struct Aluno
{
    string nome;
    int matricula;
    string curso;
    float bimestre1;
    float bimestre2;
};

void screverStruct(Aluno a)
{
    float media = (a.bimestre1 + a.bimestre2) / 2;

    cout << "Nome: " << a.nome << endl;
    cout << "Matricula: " << a.matricula << endl;
    cout << "Curso: " << a.curso << endl;
    cout << "Nota primeiro Bimestre: " << a.bimestre1 << endl;
    cout << "Nota segundo Bimestre: " << a.bimestre2 << endl;
    cout << "Media final: " << media << endl;

    if (media < 7)
    {
        cout << "Esta Reprovado!" << endl;
    }
    else
    {
        cout << "Parabens esta Aprovado!!!" << endl;
    }
}

int main()
{
    Aluno a;

    cout << "Informe o nome: ";
    cin >> a.nome;

    cout << "Informe o numero de matricula: ";
    cin >> a.matricula;

    cout << "Informe o Curso: ";
    cin >> a.curso;

    cout << "Informe a nota do primeiro bimestre: ";
    cin >> a.bimestre1;

    cout << "Informe a nota do segundo bimestre: ";
    cin >> a.bimestre2;

    screverStruct(a);

    return 0;
}