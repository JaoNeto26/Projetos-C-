#include <iostream>
using namespace std;

int main() {
	system("chcp 1252>nul");
	int i = 0;
	int number;
	while (cin >> number && number != 0) {
		if (number >= 18) {
			i++;
		}
	}
	cout << "Nesse grupo " << i << " pessoas são maiores de idade." << endl;

	return 0;
}