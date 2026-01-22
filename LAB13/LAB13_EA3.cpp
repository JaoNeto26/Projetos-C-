#include <iostream>
#include <string>

using namespace std;

struct Data {
	int dia;
	int mes;
	int ano;
};
struct Horario {
	int Hora;
	int min;
};
struct evento {
	Data data;
	Horario hora;
	char descriçao[18];
};

int main() {
	system("chcp 1252>nul");
	evento EVENTOS[10];
	cout << "Entre com 2 eventos: \n"
		<< "#1 \n"
		<< "Data: ";
	cin >> EVENTOS[0].data.dia >> EVENTOS[0].data.mes >> EVENTOS[0].data.ano;
	cout << "Hora: ";
	cin >> EVENTOS[0].hora.Hora >> EVENTOS[0].hora.min;
	cin.ignore();
	cout << "descrição: ";
	cin.getline(EVENTOS[0].descriçao,18);

	
	cout << "#2 \n"
		<< "Data: ";
	cin >> EVENTOS[1].data.dia >> EVENTOS[1].data.mes >> EVENTOS[1].data.ano;
	cout << "Hora: ";
	cin >> EVENTOS[1].hora.Hora >> EVENTOS[1].hora.min;
	cin.ignore();
	cout << "descrição: ";
	cin.getline(EVENTOS[1].descriçao, 18);

	cout << "--------------------" << endl;
	cout << "Eventos Cadastrados" << endl;

	cout << EVENTOS[0].data.dia << "/" << EVENTOS[0].data.mes << "/" << EVENTOS[0].data.ano
		 << " " << EVENTOS[0].hora.Hora << ":" << (EVENTOS[0].hora.min < 10 ? "0" : "") << EVENTOS[0].hora.min 
		 << " " << EVENTOS[0].descriçao << endl;

	cout << EVENTOS[1].data.dia << "/" << EVENTOS[1].data.mes << "/" << EVENTOS[1].data.ano
		<< " " << EVENTOS[1].hora.Hora << ":" << (EVENTOS[1].hora.min < 10 ? "0" : "") << EVENTOS[1].hora.min
		<< " " << EVENTOS[1].descriçao << endl;

	return 0;
}