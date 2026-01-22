#include <iostream>

using namespace std;

int main() {
	system("chcp 1252>nul");

	float torque[10] = { 2.5, 8.1, 3.4, 9.2, 5.7, 9.6, 6.3, 8.0, 5.4, 4.9 };
	float * ptr1 = &torque[0];
	float * ptr2 = &torque[9];

	cout << "Primeiro: " << *ptr1 << endl;
	cout << "Ultimo: " << *ptr2 << endl;

	return 0;
}