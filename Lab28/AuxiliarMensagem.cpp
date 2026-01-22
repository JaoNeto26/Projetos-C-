#include <iostream>
using namespace std;

extern void (*print)(const char[]);

void mensagem()
{
    print("Finalizando programa!");
}