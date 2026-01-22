#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
using namespace std;

/* Um	supermercado	vende	uma	unidade	de	um	produto	ao	seu	preço	normal,	mas	a	
partir	de	uma	certa	quantidade de	produtos,	ela	vende	por	um	preço	menor,	
chamado	de	preço	de	atacado.	Crie	um	registro	produto para	guardar	o preço	
normal	de	um	produto,	seu	preço	de	atacado	e	a	quantidade	a	partir	da	qual	o	
preço	de	atacado	deve	ser	utilizado.
Construa	uma	função	que	receba	um	registro	do	tipo	produto	e	a	quantidade	
pedida desse	produto	e	retorne	o	total	a	pagar.	A	função	deve analisar se	deve	
aplicar o	preço	normal	ou	o	preço	de	atacado de	acordo	com	a	quantidade	
solicitada.
Utilize	essa	função	dentro	de	outra	função,	cuja	tarefa	é	receber	um	vetor	de	
produtos e	um	vetor	de	pedidos e	retornar	o	total	do	pedido. A	função	principal	
deve	receber	os produtos	e	os	pedidos	através	de	dois	arquivos	texto	separados.	
Os	arquivos	possuem respectivamente	as	informações	dos	produtos	e	as	
quantidades	pedidas,	seguindo	o	formato	abaixo.	O	primeiro	número	de	cada	
arquivo	é	sempre	a	quantidade	de	linhas	de	informação.
 */

struct produto {
    float normal;
    float atacado;
    int qtdMin;
};

float totalProduto(produto p, int qtd) {
    if (qtd >= p.qtdMin)
        return qtd * p.atacado;
    else
        return qtd * p.normal;
}

float totalPedido(produto vetProd[], int vetQtd[], int n) {
    float total = 0.0f;

    for (int i = 0; i < n; i++)
        total += totalProduto(vetProd[i], vetQtd[i]);

    return total;
}

int main() {
    produto produtos[200];
    int pedidos[200];
    int n1, n2;

    ifstream finProd("Produtos.txt");
    ifstream finPed("Pedidos.txt");

    if (!finProd.is_open()) {
        cout << "Erro ao abrir Produtos.txt\n";
        exit(EXIT_FAILURE);
    }
    if (!finPed.is_open()) {
        cout << "Erro ao abrir Pedidos.txt\n";
        exit(EXIT_FAILURE);
    }

    finProd >> n1;

    for (int i = 0; i < n1; i++) {
        char lixo[10];

        finProd >> lixo >> produtos[i].normal
            >> lixo >> produtos[i].atacado
            >> lixo >> produtos[i].qtdMin;
    }

    finPed >> n2;
    for (int i = 0; i < n2; i++) {
        finPed >> pedidos[i];
    }

    if (n1 != n2) {
        cout << "Erro: quantidades diferentes nos arquivos.\n";
        return 1;
    }

    float total = totalPedido(produtos, pedidos, n1);

    cout << "Total do pedido: R$ " << total << endl;

}



