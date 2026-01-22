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
	chocolate lanche = { "change",2.3,350 };

	cout << lanche.marca << endl;
	cout << lanche.peso << endl;
	cout << lanche.cal << endl;

	return 0;
}