#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	system("chcp 1252>nul");
	int number = 25;
	int media = 0;
	int matrix[5][5] = {
		{38, 51, 50, 56, 98},
		{17, 65, 25, 62, 54},
		{23, 23, 64, 45, 92},
		{41, 39, 19, 68, 87},
		{65, 10, 12, 22, 13}
	};
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			media += matrix[i][j];
		}
	}
	for (int i = 0; i < 5; i++) {
		cout << " | ";
		for (int j = 0; j < 5; j++) {
			cout << matrix[i][j] << " | ";
		}
		cout << endl;
	}
	cout << endl << endl;
	cout << "A media dos elementos da matrix é " << fixed << setprecision(2) << (float)media / number << endl;
	return 0;
}