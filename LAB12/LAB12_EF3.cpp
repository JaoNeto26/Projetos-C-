#include <iostream>
using namespace std;

// registro para representar uma data
struct Data {
    int dia;
    int mes;
    int ano;
};

int converterEmDias(Data);
int diasDeVida(Data, Data);

int main() {
    system("chcp 1252>nul"); 

    Data nasc, hoje;
    char lixo;

    cout << "Data de nascimento (dd mm aaaa): ";
    cin >> nasc.dia >> lixo >> nasc.mes >> lixo >> nasc.ano;

    cout << "Data de hoje (dd mm aaaa): ";
    cin >> hoje.dia >> hoje.mes >> hoje.ano;

    int dias = diasDeVida(nasc, hoje);

    cout << "Você tem " << dias << " dias de vida." << endl;

    return 0;
}


// Função para converter uma data em "dias totais"
int converterEmDias(Data d) {
    return d.dia + (d.mes * 31) + ((d.ano * 12) * 31);
}

// Função para calcular a diferença em dias entre duas datas
int diasDeVida(Data nascimento, Data atual) {
    return  converterEmDias(nascimento) - converterEmDias(atual);
}