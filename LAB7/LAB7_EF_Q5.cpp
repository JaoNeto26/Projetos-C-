#include <iostream>
using namespace std;

unsigned char ligarbit(unsigned char, int);
unsigned char desligarbit(unsigned char, int);
bool testarbit(unsigned char, int);

int main()
{
	cout << "Digite a posição do bit a ser ligado:\n(TODOS OS BITS ESTÂO DESLIGADOS)\n[7][6][5][4][3][2][1][0]\n_\b";
	int n;
	cin >> n;
	unsigned char ligar = 1;
	cout << ligarbit(ligar, n);
	cout << endl;
	cout << "Digite a posição do bit a ser desligado:\n(TODOS OS BITS ESTÃO LIGADOS)\n[7][6][5][4][3][2][1][0]\n_\b";
	int d;
	cin >> d;
	unsigned char estado = 1;
	desligarbit(estado, d);
	cout << endl;
	cout << "Digite qual bit quer testar:\n[7][6][5][4][3][2][1][0]\n[1][0][0][1][0][0][1][1]\n_\b";
	int t;
	unsigned char mask = 147;
	cin >> t;
	testarbit(mask, t);
	cout << endl;

}
unsigned char ligarbit(unsigned char ch, int n)
{
	ch = ch << n;
	cout << "Após ligar o bit o número representado é: " << (int)ch;
	cout << endl;
	return 0;
}

unsigned char desligarbit(unsigned char ch, int n)
{
	ch = ch << n;
	unsigned char mask = 255;
	unsigned char total = ~ (ch & mask);
	
	cout << "Após desligar o bit o número representado é: " << (int)total;
	cout << endl;
	return 0;
}

bool testarbit(unsigned char ch, int n)
{
	int mask = 1;
	mask = mask << n;

	if (ch & mask)
	{
		cout << "Bit ligado";
	}
	else
	{
		cout << "Bit desligado";
	}
	cout << endl;
	return 0;
}