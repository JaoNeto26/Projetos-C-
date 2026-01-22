#include <iostream>
#include <climits>
using namespace std;

bool isInt(long long);
bool isShort(long long);

int main() {
	system("chcp 1252>nul");
	long long num;
	cout << "Digite um numero: ";
	cin >> num;
	if (isShort(num)){
		cout << num << " cabe em 16 bits" << endl;
	}
	else {
		cout << num << " não cabe em 16 bits" << endl;
	}

	if (isInt(num)) {
		cout << num << " cabe em 32 bits" << endl;
	}
	else {
		cout << num << " não cabe em 32 bits" << endl;
	}
	return 0;
}

bool isInt(long long num) {
	if (num >= INT_MIN && num <= INT_MAX) {
		return true;
	}
	else {
		return false;
	}
}

bool isShort(long long num) {
	if (num >= SHRT_MIN && num <= SHRT_MAX) {
		return true;
	}
	else {
		return false;
	}
}