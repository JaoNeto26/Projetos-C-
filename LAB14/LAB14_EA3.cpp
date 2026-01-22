#include <iostream>
using namespace std;
int main()
{
	int valor = 10, * temp, soma = 0;
	temp = &valor; //Faz o ponteiro temp apontar para a variável 
				  //valor (temp contém o endereço de valor).

	*temp = 20; // Acessar o temp e escreve 20 no local 
				//apontado (ou seja, escreve em valor).

	temp = &soma; //Acessar o temp e copia o conteúdo de valor (20) para soma.
				 //Agora soma == 20; valor continua 20.

	*temp = valor; // Desreferencia temp e copia o conteúdo de valor (20) para soma.
	              // Agora soma == 20; resumo: valor continua o mesmo.

	cout << "valor: " << valor << "\nsoma: " << soma << endl;

	/*
		valor: 20
		soma: 20
	*/
}