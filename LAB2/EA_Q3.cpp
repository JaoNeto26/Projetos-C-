#include <iostream>
using namespace std;
int main()
{
	/*
	cout << left; → faz com que o próximo valor seja alinhado à esquerda na largura definida.

	cout.width(10); → define a largura mínima do campo para o próximo valor.
	Ex.: "Produto" vai ocupar 10 espaços no console.

	cout << "Produto"; → imprime a palavra "Produto" dentro desses 10 espaços.

	cout << right; → define alinhamento à direita para os próximos valores.

	cout.width(6); cout << "Quant"; → imprime "Quant" alinhado à direita em um espaço de 6 caracteres.

	cout.width(8); cout << "Valor"; → imprime "Valor" alinhado à direita em 8 caracteres.

	endl → pula para a próxima linha.
	*/

	cout << left; cout.width(10); cout << "Produto";
	cout << left; cout.width(12); cout << "Preco/KG";
	cout << left; cout.width(15); cout << "Pedido (kg)";
	cout.width(15); cout << "Total Parcial" << endl;

	cout << left; cout.width(10); cout << "-------";
	cout << left; cout.width(12); cout << "--------";
	cout << left; cout.width(15); cout << "-----------";
	cout.width(15); cout << "-------------" << endl;

	cout << left; cout.width(10); cout << "Alface";
	cout << left; cout.width(12); cout << "R$ 1,25/Kg";
	cout << left; cout.width(15); cout << "3,2Kg";
	cout.width(15); cout << "R$ 4,00" << endl;

	cout << left; cout.width(10); cout << "Beterraba";
	cout << left; cout.width(12); cout << "R$ 0,65/Kg";
	cout << left; cout.width(15); cout << "6,0Kg";
	cout.width(15); cout << "R$ 3,90" << endl;

	cout << left; cout.width(10); cout << "Cenoura";
	cout << left; cout.width(12); cout << "R$ 0,90/Kg";
	cout << left; cout.width(15); cout << "10,0Kg";
	cout.width(15); cout << "R$ 9,00" << endl;
	
	return 0;
}
