#include <iostream>
#include <string> // biblioteca para usar string

using namespace std;

int main() {
    system("chcp 1252>nul"); // apenas para acentuação correta no Windows

    string nomeCompleto;
    string primeiroNome;
    string sobrenome;

    cout << "Digite seu nome e sobrenome: ";
    getline(cin, nomeCompleto); // lê o nome completo (incluindo espaços)

    // encontrar o espaço que separa nome e sobrenome
    int posEspaco = nomeCompleto.find(' ');

    // separa o primeiro nome e o sobrenome
    primeiroNome = nomeCompleto.substr(0, posEspaco);
    sobrenome = nomeCompleto.substr(posEspaco + 1);

    cout << "Bom dia senhor, " << sobrenome << ". ";
    cout << "Ou devo chama-lo de " << primeiroNome << "?" << endl;

    return 0;
}
