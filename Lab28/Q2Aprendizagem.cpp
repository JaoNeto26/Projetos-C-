#include <iostream>
using namespace std;

/* Considerando o registro tupla definido abaixo, construa uma função trocar()
que receba duas tuplas e inverta seus valores. Escreva um programa para
testar a função. */

struct tupla
{
    int a;
    int b;
    int c;
};

void trocar(tupla& x, tupla& y)
{
    tupla aux;
    aux = x;
    x = y;
    y = aux;
}

int main()
{
    tupla A = { 15, 20, 25 };
    tupla B = { 40, 50, 60 };

    cout << "Tupla A: " << A.a << " " << A.b << " " << A.c << endl;
    cout << "Tupla B: " << B.a << " " << B.b << " " << B.c << endl;

    cout << endl << "Invertendo..." << endl << endl;

    trocar(A, B);

    cout << "Tupla A: " << A.a << " " << A.b << " " << A.c << endl;
    cout << "Tupla B: " << B.a << " " << B.b << " " << B.c << endl;

}
