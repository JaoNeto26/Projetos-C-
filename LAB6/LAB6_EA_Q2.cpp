#include <iostream>

#include <iomanip>  // necessário para usar fixed e setprecision


using namespace std;

#define pao 0.30
#define pastel 0.25

int main() 
{
	system("chcp 1252>null");

	int paes, pl;

	cout << "Pães&Cia" << endl << endl;

	cout << "Quantos pães? ";
	cin >> paes;
	cout << "Quantos pastéis? ";
	cin >> pl;

	double total = (paes * pao) + (pl * pastel);
	//fixed: garante que os números serão mostrados no formato decimal fixo (não em notação científica).
	//setprecision(2) : define que serão exibidas 2 casas decimais.
	cout << fixed << setprecision(2);

	cout << "Total: R$ " << total << endl;

	return 0;
}