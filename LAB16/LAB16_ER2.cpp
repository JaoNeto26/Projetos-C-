#include <iostream>

using namespace std;

int main() {
	system("chcp 1252>nul");

    char vetor[] = "Pratique muito";  

    // Laço for que percorre até encontrar o caractere nulo '\0'
    for (int i = 0; vetor[i] != '\0'; i++) {
        cout << vetor[i];  
    }

	return 0;
}