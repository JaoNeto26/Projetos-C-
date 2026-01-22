#include <iostream>
#include <string>

using namespace std;

struct Data {
	int dia;
	int mes;
	int ano;
};

struct Horario {
	int hora;
	int minutos;
	int segundos;
};

struct evento {
	Data data;
	Horario horario;
	string local;
};

int main() {
	system("chcp 1252>nul");
	evento EVENTO;
	char lixo;
	cout << "entre com os valores dia/mês/ano do evento: ";
	cin >> EVENTO.data.dia >> lixo >> EVENTO.data.mes >> lixo >> EVENTO.data.ano;
	cin.ignore();
	cout << "entre com os valores hora:minutos:segundos do evento: ";
	cin >> EVENTO.horario.hora >> lixo >> EVENTO.horario.minutos >> lixo >> EVENTO.horario.segundos;
	cin.ignore();
	cout << "Entre com o local do Evento: ";
	getline(cin, EVENTO.local);

	cout << "INFORMES DO EVENTO" << endl;
	cout << "Data: " << EVENTO.data.dia << "/" << EVENTO.data.mes << "/" << EVENTO.data.ano << endl;
	cout << "Horario: " << EVENTO.horario.hora << ":" << EVENTO.horario.minutos << ":" << EVENTO.horario.segundos << endl;
	cout << "local: " << EVENTO.local;

	return 0;
}