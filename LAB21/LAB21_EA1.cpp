#include <iostream>
using namespace std;

int main() {
	system("chcp 1252>nul");

	char ch;
	int idade, x, num;
	float peso, altura;

	// a) ch não é 'q' nem 'k'
	bool A1 = (ch != 'q' && ch != 'k');             // forma direta
	bool A2 = !(ch == 'q' || ch == 'k');            // usando negação e De Morgan

	// b) idade NÃO está entre 15 e 26
	bool B1 = !(idade >= 15 && idade <= 26);        // negando o intervalo
	bool B2 = (idade < 15 || idade > 26);           // versão explícita

	// c) x é ímpar e maior que 30
	bool C1 = (x % 2 == 1 && x > 30);               // direta
	bool C2 = (!(x % 2 == 0) && x > 30);            // usando negação

	// d) num é múltiplo de 5 OU de 8
	bool D1 = (num % 5 == 0 || num % 8 == 0);       // direta
	bool D2 = !(!(num % 5 == 0) && !(num % 8 == 0));  // De Morgan (bem expandida)
	// versão XOR (apenas múltiplo de um deles, não ambos)
	bool D3 = (num % 5 == 0) ^ (num % 8 == 0);

	// e) peso NÃO é menor que 50 E altura > 160
	bool E1 = (peso >= 50 && altura > 160);         // direta
	bool E2 = (!(peso < 50) && altura > 160);       // usando negação


	return 0;
}