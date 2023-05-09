#include <iostream>
#include <math.h>

using namespace std;

struct Ponto
{
    float x1;
    float y1;
    float x2;
    float y2;
};

int main()
{
    Ponto coordenada;

    cout << "Escreva o valor do primeiro ponto x: ";
    cin >> coordenada.x1;

    cout << "Escreva o calor do primeiro ponto y: ";
    cin >> coordenada.y1;

    cout << "Escreva o valor do segundo ponto x: ";
    cin >> coordenada.x2;

    cout << "Escreva o calor do segundo ponto y: ";
    cin >> coordenada.y2;

    float proc1 = coordenada.x1 - coordenada.y1;
    proc1 = proc1 * proc1;
    float proc2 = coordenada.x2 - coordenada.y2;
    proc2 = proc2 * proc2;
    float res = sqrt(proc1 + proc2);
    cout << "O resultado e: " << res << endl;
}