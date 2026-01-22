#include <iostream>
using namespace std;

int main() {
	system("chcp 1252>nul");
	int number;
	cout << "Você quer que eu conte de 1 até que número? ";
	cin >> number;

	

	for (int i = 1; i <= number; i++) {
		cout << i << " ";
	}
	cout << endl;
	for (int i = number; i > 0; i--) {
		cout << i << " ";
	}
	cout << endl;

	for (int i = 0; i <= number; i++) {
		if (i % 2 != 0) {
			cout << i << " ";
		}
	}
	cout << endl;
	for (int i = number; i > 0; i--) {
		if (i % 2 != 0) {
			cout << i << " ";
		}
	}
	cout << endl;
	for (int i = 1; i <= number; i++) {
		if (i % 2 == 0) {
			cout << i << " ";
		}
	}
	cout << endl;
	for (int i = number; i > 0; i--) {
		if (i % 2 == 0) {
			cout << i << " ";
		}
	}
	cout << endl;
	return 0;
}