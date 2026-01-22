#include <iostream>

using namespace std;

void Mais(int* n);
int Incrementa(int);

int main() {
	system("chcp 1252>nul");

    int valor;

    cout << "Digite um valor: ";
    cin >> valor;

    Mais(&valor);  // passa o endereço (ponteiro)
    cout << "\nResultado apos Mais: " << valor;

    valor = Incrementa(valor); // recebe o retorno
    cout << "\nResultado apos Incrementa: " << valor << endl;

	return 0;
}


void Mais(int* n) {
    (*n)++;   // incrementa o valor que o ponteiro aponta
}

int Incrementa(int n) {
    n++;      // incrementa apenas a cópia local
    return n; // devolve o novo valor
}
