#include <iostream>
// biblioteca "climits" pra mostrar o tamanho dos tipos das variaveis em bits
#include <climits>

using namespace std;

int main() {
	system("chcp 1252>null");

	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	int N_INT = sizeof(int);
	int N_SHORT = sizeof n_short;
	int N_LONG = sizeof n_long;
	int N_LLONG = sizeof n_llong;
	int N_total = N_INT + N_SHORT + N_LONG + N_LLONG;


	// O TAMANHO DAS VARIAVEIS EM BITS
	cout << "short tem " << sizeof n_short << " bytes." << endl;
	cout << "int tem " << sizeof(int) << " bytes." << endl;
	cout << "long tem " << sizeof n_long << " bytes." << endl;
	cout << "long long tem " << sizeof n_llong << " bytes.\n" << endl;

	// VALORES REAIS QUE ESTÃO NAS VARIAVEIS, VALORES QUE ELAS PODEM ARMAZENAR SEM PERDER OS DADOS
	cout << "Valores Máximos:\n";
	cout << "short: " << n_short << endl;
	cout << "int: " << n_int << endl;
	cout << "long: " << n_long << endl;
	cout << "long long: " << n_llong << endl << endl;



	cout << "TOTAL\n";
	cout << "short: " << N_SHORT << endl;
	cout << "int: " << N_INT << endl;
	cout << "long: " << N_LONG << endl;
	cout << "long long: " << N_LLONG << endl;
	// COMO EU TAMBÉM PODERIA FAZER ISSO DIRETAMENTE
	// cout << "TOTAL: " << sizeof n_short + sizeof(int) + sizeof n_long + sizeof n_llong << endl;
	cout << "Total: " << N_total << endl << endl;
	return 0;
}