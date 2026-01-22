#include <iostream>

using namespace std;

int main() {
	system("chcp 1252>nul");

    int n;

    cout << "Quantos valores deseja guardar? ";
    cin >> n;

    // Alocação dinâmica de vetor de inteiros
    int* vetor = new int[n];

    cout << "Quais os valores? ";
    for (int i = 0; i < n; i++) {
        cin >> vetor[i];
    }

    cout << "Os valores ";
    for (int i = 0; i < n; i++) {
        cout << vetor[i];
        // Esse IF adiciona uma vírgula somente entre os valores, evitando que apareça uma vírgula após o último número.
        if (i < n - 1) cout << ", ";
    }
    cout << " foram armazenados." << endl;

    // Liberação de memória
    delete[] vetor;


	return 0;
}