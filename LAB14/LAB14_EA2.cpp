#include <iostream>

using namespace std;
struct horario {
	int hora;
	int minuto;
};

void MostrarHorario(horario* ptr);

int main() {
	system("chcp 1252>nul");
	horario Horario;
	horario * ptr = &Horario;
	char lixo;
	cout << "Que horas são? ";
	cin >> Horario.hora >> lixo >> Horario.minuto;

	MostrarHorario(ptr);

	return 0;
}

void MostrarHorario(horario* ptr) {
	cout << "Seu relógio está atrasado, o horário correto é " << ptr->hora + 1 << ":" << ptr->minuto << ".";
}