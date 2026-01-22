#include <iostream>	
#include <cstdlib> // rand(), srand()
// #include <time> time()
using namespace std;
// os codigos mostrados aqui servem tanto para o exercicio 1 quanto para o 2, 
int main() {
	system("chcp 1252>null");

    // Define uma semente fixa (pode mudar o número para testar)
    srand(1);

    /*
    
    rand() sozinho → gera sempre a mesma sequência (porque a semente padrão é 1).

    srand(x) → muda a sequência, mas se repetir o mesmo x, gera sempre os mesmos números.

    srand(time(0)) → faz a sequência mudar a cada execução (porque a semente muda a cada segundo).

    time(0) (da <ctime>) retorna o número de segundos desde 1 de janeiro de 1970 (Unix epoch).
    Como o tempo está sempre mudando, usar srand(time(0)) faz o rand() gerar sequências diferentes
    
    */

    cout << "Gerando numeros pseudoaleatorios:" << endl;

    // Gera 5 números
    // o for não foi ensinado por judson, mas estou usando para facilitar o precesso de chamar a função
    for (int i = 0; i < 5; i++) {
        cout << rand() << " ";
    }
    cout << endl;

	return 0;
}