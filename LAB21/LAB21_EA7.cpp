#include <iostream>
#include <string>
using namespace std;

struct Nadador {
    string nome;
    int idade;
    string categoria;
};

string determinarCategoria(int idade) {
    if (idade >= 5 && idade <= 7)
        return "Infantil";
    else if (idade >= 8 && idade <= 10)
        return "Juvenil";
    else if (idade >= 11 && idade <= 15)
        return "Adolescente";
    else if (idade >= 15 && idade <= 30)
        return "Adulto";
    else if (idade > 30)
        return "Senior";
    else
        return "Sem categoria";
}

int main() {
    Nadador n;

    cout << "Digite o nome do nadador: ";
    getline(cin, n.nome);

    cout << "Digite a idade do nadador: ";
    cin >> n.idade;

    n.categoria = determinarCategoria(n.idade);

    cout << "\n=== Resultado ===\n";
    cout << "Nome: " << n.nome << endl;
    cout << "Idade: " << n.idade << endl;
    cout << "Categoria: " << n.categoria << endl;

    return 0;
}
