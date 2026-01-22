#include <iostream>

using namespace std;

int main() {
	system("chcp 1252>nul");
    char letra = 'A';  
    char* ptr;         

    ptr = &letra;       

    *ptr = 'B';         

    cout << "Conteudo da variavel: " << letra << endl;
    cout << "Conteudo apontado pelo ponteiro: " << *ptr << endl;
	return 0;
}