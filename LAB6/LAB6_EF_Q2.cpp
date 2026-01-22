#include <iostream>

using namespace std;

int main() {
	system("chcp 1252>null");

	// O problema pergunta se "É possível obter um resultado sempre correto usando apenas valores e variáveis 
	// do tipo inteiro" a resposta é não, pois se o usuario digitar valores quebrados, o codigo vai colocar o valor aprocimado
	// logo, deixei o valor em double, para que faça um calculo mais preciso.
	// Exemplo: 10.5 km e 2.5 L, o resultado correto é 4.2 km/l, se fosse inteiro, o resultado seria 4 km/l

	double km, L;
	cout << "Digite a distância percorrida em km: ";
	cin >> km;
	cout << "Digite o combustível gasto em litros: ";
	cin >> L;
	cout << "O consumo médio é de " << km / L << " km/l" << endl;



	return 0;
}