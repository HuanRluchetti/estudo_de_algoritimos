#include <iostream>

using namespace std;

struct Ponto
{
    float x;
    float y;
};

int main()
{
    Ponto coordenada;

    cout << "Escreva o valor do ponto x: ";
    cin >> coordenada.x;

    cout << "Escreva o valor do ponto y: ";
    cin >> coordenada.y;

    cout << "Coordenada"
         << "(x" << coordenada.x << ", y" << coordenada.y << ")";
}