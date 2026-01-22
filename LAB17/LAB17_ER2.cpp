#include <iostream>
using namespace std;

int main() {
	system("chcp 1252>nul");
	int i = 1;
	cout << i << " ";
	for (int i = 2; i <= 64; i *= 2) {
		cout << i << " ";
	}

	return 0;
}