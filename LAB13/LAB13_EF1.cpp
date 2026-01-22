#include <iostream>

using namespace std;

union Cor {
    int numero;
    char codigo[5];
    char nome[20];
};

// Estrutura para representar um carro
struct Carro {
    string modelo;
    int ano;
    float preco;
    Cor cor;
    int tipoCor; // 1 = número, 2 = código, 3 = nome
};

void exibirCarro(const Carro);

int main() {
	system("chcp 1252>nul");

    Carro carros[10];

    // Inicializa os dois primeiros carros
    carros[0].modelo = "Vectra";
    carros[0].ano = 2009;
    carros[0].preco = 58000.00;
    carros[0].tipoCor = 3;
    strcpy(carros[0].cor.nome, "Azul");

    carros[1].modelo = "Polo";
    carros[1].ano = 2008;
    carros[1].preco = 45000.00;
    carros[1].tipoCor = 3;
    strcpy(carros[1].cor.nome, "Preto");

    // Entrada de dados do terceiro carro
    cout << "Digite o modelo do terceiro carro: ";
    getline(cin, carros[2].modelo);
    if (carros[2].modelo.empty()) getline(cin, carros[2].modelo); // garante leitura

    cout << "Digite o ano de fabricação: ";
    cin >> carros[2].ano;

    cout << "Digite o preço: ";
    cin >> carros[2].preco;

    cout << "\nEscolha o tipo de identificação da cor:\n";
    cout << "1 - Número\n2 - Código\n3 - Nome\n";
    cout << "Opção: ";
    cin >> carros[2].tipoCor;
    cin.ignore();

    if (carros[2].tipoCor == 1) {
        cout << "Digite o número da cor: ";
        cin >> carros[2].cor.numero;
    }
    else if (carros[2].tipoCor == 2) {
        cout << "Digite o código da cor: ";
        cin >> carros[2].cor.codigo;
    }
    else if (carros[2].tipoCor == 3) {
        cout << "Digite o nome da cor: ";
        cin.getline(carros[2].cor.nome, 20);
    }

    // Exibe os três carros cadastrados
    cout << "\n===== LISTA DE CARROS =====";
    exibirCarro(carros[0]);
    exibirCarro(carros[1]);
    exibirCarro(carros[2]);

    return 0;


}


// Função para exibir os dados de um carro
void exibirCarro(const Carro& c) {
    cout << "\nModelo: " << c.modelo;
    cout << "\nAno: " << c.ano;
    cout << "\nPreço: R$ " << c.preco;
    cout << "\nCor: ";
    if (c.tipoCor == 1)
        cout << c.cor.numero;
    else if (c.tipoCor == 2)
        cout << c.cor.codigo;
    else if (c.tipoCor == 3)
        cout << c.cor.nome;
    cout << endl;
}