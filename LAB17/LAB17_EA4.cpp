#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

struct Login {
	char Nome[50];
	char senha[20];
};

bool iguais(const char a[], const char b[]);

int main() {
	system("chcp 1252>nul");

    // login do administrador (armazenado no programa)
    Login admin;
    strcpy(admin.Nome,"admin");   // exemplo: nome do administrador
    strcpy(admin.senha,"1234");   // exemplo: senha do administrador

    // entrada do usuário
    Login entrada;
    cout << "Nome: ";
    cin >> entrada.Nome;   // leitura simples (sem espaços)
    cout << "Senha: ";
    cin >> entrada.senha;

    // verifica nome e senha, caractere a caractere (usando a função com for interno)
    if (iguais(entrada.Nome, admin.Nome) && iguais(entrada.senha, admin.senha))
        cout << "Login e senha corretos\n";
    else
        cout << "Login ou senha incorretos\n";


	return 0;
}


// Compara duas strings, caractere a caractere usando um laço for
bool iguais(const char a[], const char b[]) {
    for (int i = 0; ; ++i) {
        if (a[i] != b[i])            // diferença encontrada, retorna falso e para o for
            return false;
        if (a[i] == '\0' && b[i] == '\0') // ambas terminaram ao mesmo tempo, retorna verdadeiro e para o for
            return true;
        // continua o laço para comparar o próximo caractere
    }
}
