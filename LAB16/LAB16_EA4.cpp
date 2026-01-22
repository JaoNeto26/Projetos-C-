#include <iostream>

using namespace std;

int main() {
	system("chcp 1252>nul");
	int B[] = { 32, 16, 47, 10, 82, 29, 30, 28, 15, 64 };
	for (int i = 0, f = 9; i <= 5 && f >= 5; i++, f--) {
		cout << "[" << B[i] << "," << B[f] << "] ";
	}
	cout << endl;
	return 0;
}