#include <iostream>
using namespace std;

int main() {
	system("chcp 1252>nul");
	int i = 0;
	int soma = 0;
	while (i <= 100) {
		if (i % 2 != 0) {
			cout << i << " ";
			soma += i;
		}
		i++;
	}
	cout << endl;
	cout << "Soma dos numeros impares: " << soma << endl;
	soma = 0;
	i = 0;

	do {
		if (i % 2 != 0) {
			cout << i << " ";
			soma += i;
		 }
		i++;
	}
	while (i < 100);
	cout << endl;
	cout << "Soma dos numeros impares: " << soma << endl;

	return 0;
}