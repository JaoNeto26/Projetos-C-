#include <iostream>
using namespace std;

// Estrutura para representar um horário
struct Horario {
    int hora;
    int minuto;
};


Horario lerHorario();
void exibirHorario(Horario);
int subtrairHorarios(Horario, Horario);


int main() {
    system("chcp 1252>nul");
    Horario inicio, fim;

    cout << "início: ";
    inicio = lerHorario();

    cout << "término: ";
    fim = lerHorario();

    int diferenca = subtrairHorarios(inicio, fim);

    int horas = diferenca / 60;
    int minutos = diferenca % 60;

    cout << "\nInício: ";
    exibirHorario(inicio);
    cout << "\nFim: ";
    exibirHorario(fim);

    cout << "\n\nEntre ";
    exibirHorario(inicio);
    cout << " e ";
    exibirHorario(fim);
    cout << " existem " << diferenca << " minutos, isto é, "
        << horas << "h e " << minutos << " minutos.\n";

    return 0;
}



Horario lerHorario() {
    Horario h;
    char lixo;
    cin >> h.hora >> lixo >> h.minuto;
    return h;
}


void exibirHorario(Horario h) {
    cout << (h.hora < 10 ? "0" : "") << h.hora << ":"
        << (h.minuto < 10 ? "0" : "") << h.minuto;
}


int subtrairHorarios(Horario inicio, Horario fim) {
    int minutosInicio = inicio.hora * 60 + inicio.minuto;
    int minutosFim = fim.hora * 60 + fim.minuto;
    return minutosFim - minutosInicio;
}