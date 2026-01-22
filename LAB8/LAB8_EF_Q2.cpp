#include <iostream>
using namespace std;

int main() {
    system("chcp 1252>nul");
    double numero;

    cout << "Digite um ponto flutuante: ";
    cin >> numero;

    // Notação padrão
    // cout.unsetf(?) para remover formatações anteriores (scientific e fixed). 
    cout.unsetf(ios::scientific | ios::fixed);  // limpa formatações
    cout << "Notacao padrao: " << numero << endl;

    // Notação científica
    // O floatfield garante que o cout use a forma científica (a.be+xx).
    cout.setf(ios::scientific, ios::floatfield);
    cout << "Notacao cientifica: " << numero << endl;

    // Notação decimal (fixa)
    // ios::fixed para forçar a notação decimal fixa.
    cout.setf(ios::fixed, ios::floatfield);
    cout << "Notacao decimal: " << numero << endl;

    /*
    unsetf(...) → limpa formatações, volta ao modo padrão.

    setf(ios::scientific, ios::floatfield) → força notação científica.

    setf(ios::fixed, ios::floatfield) → força notação decimal fixa.

    cout.precision(#) --> usado com o formatação decimal, você fixa quantas 
    casas decimais vc quer que apareça

    */

    return 0;
}
