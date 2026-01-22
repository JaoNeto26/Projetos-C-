#include <iostream>
#include <cmath>

using namespace std;

int main() {
	system("chcp 1252 > null");
	double seno, x;
	const double PI = 3.14;

	cout << "Digite o angulo: ";
	cin >> x;
	seno = sin(x * PI /180);
	cout << "seno: " << seno << endl;

	return 0;
}	