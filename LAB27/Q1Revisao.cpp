#include <iostream>
using namespace std;

/*Considerando os fragmentos de código abaixo, quais funções são boas candidatas para serem inline? 
(as respostas são os comentários no código)*/

double Multiplicar(double x, double y) //** ESSA É BOA! pois é pequena, simples e ocupa apenas uma linha
{
	return x * y;
}
void Atribuir(CharSet* dest, const char* texto)
{
	dest->tam = strlen(texto) + 1;
	if (dest->str != nullptr)
		delete[] dest->str;
	dest->str = new char[dest->tam];
	int i = 0;
	while (texto[i])
		dest->str[i++] = texto[i];
	dest->str[dest->tam - 1] = '\0';
}
int Tamanho(CharSet* texto) //** ESSA É BOA! pois é pequena, simples, ocupa apenas uma linha e só retorna um valor
{
	return texto->tam;
}
int Minimo(int a, int b) //** ESSA É BOA! pois é pequena, simples, ocupa apenas uma linha... mesmo caso das anteriores
{
	return (a < b ? a : b); 
}

int main() {

}