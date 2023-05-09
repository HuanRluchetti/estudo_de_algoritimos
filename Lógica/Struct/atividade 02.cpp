#include <iostream>

using namespace std;

struct Pessoa
{
    string nome;
    string cpf;
    string telefone;
    string endereco;
};
void escreverStruct(Pessoa p[])
{
    for (int i = 0; i < 4; i++)
    {
        cout << "Nome: " << p[i].nome << " "
             << "CPF: " << p[i].cpf << " "
             << "Telefone: " << p[i].telefone << " "
             << "Endereco: " << p[i].endereco << endl;
    }
}

int main()
{
    Pessoa agenda[4];

    for (int i = 0; i < 4; i++)
    {
        cout << "Pessoa: " << i + 1 << endl;
        cout << endl;

        cout << "Informe o nome: ";
        cin >> agenda[i].nome;

        cout << "Informe o CPF: ";
        cin >> agenda[i].cpf;

        cout << "Informe o Telefone: ";
        cin >> agenda[i].telefone;

        cout << "Informe o Endereco: ";
        cin >> agenda[i].endereco;

        cout << endl;
        cout << "<------------------------->" << endl;
        cout << endl;
    }

    escreverStruct(agenda);

    return 0;
}