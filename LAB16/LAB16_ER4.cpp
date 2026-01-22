#include <iostream>

using namespace std;

struct jogador
{
	char nome[20];
	float salario;
	unsigned gols;
};
void exibir_jogador(jogador vetor[], int );

int main() {
	system("chcp 1252>nul");
	jogador vetor[] = {
		{"joao", 2000, 5 },
		{"marcos", 3000, 10},
		{"jose" , 4000, 30}

	};
	int tamanho = sizeof(vetor) / sizeof(vetor[0]);

	exibir_jogador(vetor, tamanho);

	return 0;
}
void exibir_jogador(jogador vetor[], int tamanho) {
	cout << "jogadores no vetor: " << endl;
	for (int i = 0; i < tamanho; i++) {
		cout << vetor[i].nome << " ";
		cout << vetor[i].salario << " ";
		cout << vetor[i].gols << " ";
		cout << endl;
	}

}