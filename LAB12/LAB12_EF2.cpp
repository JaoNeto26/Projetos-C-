#include <iostream>

using namespace std;

struct chocolate
{
	char marca[25];
	float peso = 0.0f;
	int cal;
};

int main() {
	system("chcp 1252>nul");

	chocolate vetor[3] = {
		{"change", 30.0, 5000},
		{"change", 10.0, 10 },
		{"change", 40.0, 500}
	};

	cout << "primeiro chocolate: " << endl;
	cout << vetor[0].marca << ", " << vetor[0].peso << ", " << vetor[0].cal << endl;
	cout << "segundo chocolate: " << endl;
	cout << vetor[1].marca << ", " << vetor[1].peso << ", " << vetor[1].cal << endl;
	cout << "terceiro chocolate: " << endl;
	cout << vetor[2].marca << ", " << vetor[2].peso << ", " << vetor[2].cal << endl;

	return 0;
}