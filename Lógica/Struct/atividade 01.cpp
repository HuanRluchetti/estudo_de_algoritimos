#include <iostream>

using namespace std;

struct Pessoa
{
    string nome;
    string cpf;
    string telefone;
    string endereco;
};

void escreverStruct(Pessoa p)
{
    cout << "Nome: " << p.nome << endl;
    cout << "CPF: " << p.cpf << endl;
    cout << "Telefone: " << p.telefone << endl;
    cout << "Endereco: " << p.endereco << endl;
}

int main()
{
    Pessoa p1;
    p1.nome = "Huan";
    p1.cpf = "000.000.000-00";
    p1.telefone = "(67) 9999-6666";
    p1.endereco = "Rua 10";

    escreverStruct(p1);

    return 0;
}