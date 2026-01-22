#include <iostream>
using namespace std;

/* Um corredor deseja computar o tempo total de uma corrida a partir dos
tempos parciais de cada volta. Para ajudá-lo, crie uma função TempoDaVolta()
que recebe o tempo de uma volta, o acumula em uma variável local estática e
retorna o total acumulado. Crie um programa que leia o tempo de cada volta e
chame a função TempoDaVolta() com o valor lido. O programa deve rodar até
que o corredor entre com um valor inválido para o tempo da volta. */

double TempoDaVolta(double tempo)
{
    static double total = 0.0; 
    total += tempo;
    return total;
}

int main()
{
    double tempo;

    while (true)
    {
        cout << "Volta: ";
        cin >> tempo;

        if (!cin)
            break;

        double total = TempoDaVolta(tempo);
        cout << "Tempo total = " << total << " segs." << endl;
    }

    cout << "Volta: fim" << endl;
}
