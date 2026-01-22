#include <iostream>
#include <fstream>
using namespace std;

/*A função operator<< pode ser utilizada para ensinar ao cout como exibir variáveis de um tipo definido pelo programador.
Utilize referências para construir uma função operator<< que exiba um par de elementos na tela. 
Use o mesmo tipo par definido na questão 4 dos exercícios de fixação. Agora construa um programa para 
ler um arquivo texto contendo um número indefinido de pares de números separados por espaço e exiba-os com cout, 
de forma que cada par seja exibido como mostrado abaixo: 
Pares: [2,4] [3,7] [8,5] [9,2]*/

// como não fiz os exercícios de fixação, criei um tipo par

struct par
{
    int num1;
    int num2;
};

ostream& operator<<(ostream& out, const par& p)
{
    out << "[" << p.num1 << "," << p.num2 << "]";
    return out;
}

int main()
{
    ifstream fin("pares.txt");
    par p;

    cout << "Pares: ";

    while (fin >> p.num1 >> p.num2)
    {
        cout << p << " ";
    }

    fin.close();
}
