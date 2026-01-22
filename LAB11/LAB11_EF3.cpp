#include <iostream>

using namespace std;

int main() {
	system("chcp 1252>nul");

	char vet[] = { 'v','e','t','o','r' };
	char str[] = { 's','t','r','i','n','g','\0' };

	cout << str << endl;
	cout << vet << endl;

	return 0;
}