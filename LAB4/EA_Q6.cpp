#include <iostream>
#include <cstdlib>  // rand(), srand()
#include <ctime>    // time()

using namespace std;


// esqueleto das funções
void ligar();
void Verificar();
void Ativar();
int Inicializar();


int main() {
	system("chcp 1252 > null");

    // Garante que a cada execução os valores sejam diferentes
    srand(time(0));

    
    int resultado = Inicializar();

    // Verifica resultado
    if (resultado > 16384)
        cout << "Sistema em funcionamento." << endl;
    else
        cout << "Falha na inicializacao." << endl;

	return 0;
}



// Funções auxiliares
void Ligar() {
    cout << "- Ligando dispositivos" << endl;
}

void Verificar() {
    cout << "- Verificando integridade" << endl;
}

void Ativar() {
    cout << "- Ativando processos" << endl;
}

// Função principal de inicialização
int Inicializar() {
    cout << "Inicializando Sistema:" << endl;
    Ligar();
    Verificar();
    Ativar();
    cout << "Inicializacao concluida." << endl << endl;

    // Retorna número aleatório simulando resultado
    return rand();
}