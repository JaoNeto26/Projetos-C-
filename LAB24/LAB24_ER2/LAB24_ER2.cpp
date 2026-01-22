#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

struct peixe {
	char nome[20];
	unsigned peso;
	float comp;
};

int main() {

	ifstream entrada("pescado.bin", ios::binary);
	if (entrada.is_open()) {
		peixe p;
		cout << "Peixes cadastrados no arquivo:\n";
		int idx = 1;
		while (entrada.read(reinterpret_cast<char*>(&p), sizeof(p))) {
			cout << idx++ << ". " << p.nome
				<< "  peso: " << p.peso << " g"
				<< "  comp.: " << fixed << setprecision(2) << p.comp << " cm\n";
		}
		entrada.close();
	}
	else {
		// arquivo pode não existir ainda; isso não é erro
		cout << "Nenhum registro anterior encontrado (arquivo inexistente).\n";
	}

	// 2) Ler dados de um novo peixe do usuário
	peixe novo;
	cout << "\nDigite os dados de um novo peixe:\n";
	cout << "Nome (sem espaços, max 19 caracteres): ";
	cin >>  novo.nome;
	cout << "Peso em gramas (valor inteiro): ";
	if (!(cin >> novo.peso)) {
		cout << "Entrada de peso invalida. Programa encerrando.\n";
		return 0;
	}
	cout << "Comprimento em centimetros (ex: 12.5): ";
	if (!(cin >> novo.comp)) {
		cout << "Entrada de comprimento invalida. Programa encerrando.\n";
		return 0;
	}

	// 3) Abrir arquivo em modo binário para acrescentar o novo registro
	ofstream saida("pescado.bin", ios::binary | ios::app);
	if (!saida.is_open()) {
		cout << "Erro ao abrir/criar o arquivo para gravacao.\n";
		exit(EXIT_FAILURE);
	}
	
    saida.write(reinterpret_cast<const char*>(&novo), sizeof(novo));
	saida.close();

	cout << "Registro gravado com sucesso.\n";
	return 0;
}