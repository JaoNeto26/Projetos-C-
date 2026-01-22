#include <iostream>
using namespace std;

int main() {
	system("chcp 1252>null");

	int horaPartida, minutoPartida, horaChegada, minutoChegada;
	char separador;

	cout << "Informe a hora e minuto de partida do onibus (hh mm): ";
	// separador vai pergar somente o ":" da entrada
	cin >> horaPartida >> separador >> minutoPartida;
	cout << "Informe a hora e minuto de chegada do onibus (hh mm): ";
	cin >> horaChegada >> separador >> minutoChegada;

	// transformando as horas em minutos para facilitar a conversão
	int totalMinutosPartida = horaPartida * 60 + minutoPartida;
	int totalMinutosChegada = horaChegada * 60 + minutoChegada;

	int duracaoViagem = totalMinutosChegada - totalMinutosPartida;


	// pegando somente as horas na divisão "duracaoViagem/60"
	int duracaoHoras = duracaoViagem / 60;
	// pegando somente os minutos no modulo da divisão "duracaoViagem%60"
	int duracaoMinutos = duracaoViagem % 60;


	cout << "A duracao da viagem foi de " << duracaoHoras << " horas e " << duracaoMinutos << " minutos." << endl;



	return 0;
}