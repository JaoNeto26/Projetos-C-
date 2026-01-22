#include <iostream>
#include <string>

using namespace std;

int main() {
	system("chcp 1252>nul");
    // jeito moderno - com biblioteca string
    string d1, d2, d3;
    string natal = "Natal";

    cout << "Quais suas datas comemorativas preferidas?" << endl;
    getline(cin, d1);
    getline(cin, d2);
    getline(cin, d3);

    cout << d1 << ", " << d2 << " e " << d3 << " são belas festas." << endl;

    if (d1 == natal || d2 == natal || d3 == natal) {
        cout << "O Natal também é uma das minhas datas preferidas!" << endl;
    }

    // jeito antigo - vetores de caracteres (char)
    /*
    
    char d1[50], d2[50], d3[50];
    char frase[200];
    char natal[] = "Natal";

    cout << "Quais suas datas comemorativas preferidas?" << endl;
    cin.getline(d1, 50);
    cin.getline(d2, 50);
    cin.getline(d3, 50);

    // Montar a frase concatenando as três
    strcpy(frase, d1);
    strcat(frase, ", ");
    strcat(frase, d2);
    strcat(frase, " e ");
    strcat(frase, d3);
    strcat(frase, " são belas festas.");

    cout << frase << endl;

    // Verifica se o usuário digitou "Natal" em alguma das três
    if (strcmp(d1, natal) == 0 || strcmp(d2, natal) == 0 || strcmp(d3, natal) == 0) {
        cout << "O Natal também é uma das minhas datas preferidas!" << endl;
    }

    */

	return 0;
}