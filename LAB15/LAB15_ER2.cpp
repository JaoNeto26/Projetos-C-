#include <iostream>
#include <cstring>  
using namespace std;

struct peixe
{
    char tipo[20];     // nome ou espécie do peixe (string)
    float peso;        // peso do peixe (em kg, por exemplo)
    unsigned comp;     // comprimento do peixe (em cm)
};

int main() {
	system("chcp 1252>nul");

    peixe p1;  // variável do tipo peixe
    peixe* p2 = new peixe; // alocação dinâmica


    // Exemplo de preenchimento
    cout << "Digite o tipo do peixe: ";
    cin >> p1.tipo;
    cout << "Digite o peso: ";
    cin >> p1.peso;
    cout << "Digite o comprimento: ";
    cin >> p1.comp;

    cout << "Digite o tipo do peixe: ";
    cin >> p2->tipo;     
    cout << "Digite o peso: ";
    cin >> p2->peso;
    cout << "Digite o comprimento: ";
    cin >> p2->comp;

    cout << "\nPeixe cadastrado:\n";
    cout << "Tipo: " << p1.tipo << endl;
    cout << "Peso: " << p1.peso << " kg" << endl;
    cout << "Comprimento: " << p1.comp << " cm" << endl;

    cout << "\nPeixe cadastrado dinamicamente:\n";
    cout << "Tipo: " << p2->tipo << endl;
    cout << "Peso: " << p2->peso << " kg" << endl;
    cout << "Comprimento: " << p2->comp << " cm" << endl;

    delete p2;
	return 0;
}