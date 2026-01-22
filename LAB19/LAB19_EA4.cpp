#include <iostream>

using namespace std;

void exibeVetor(int v[], int tamanho);

int main() {
	system("chcp 1258>nul");

    int mat[2][3] =
    {
        {1,2,3},
        {4,5,6}
    };

    cout << "mat[0][0] = " << mat[0][0] << endl;
    cout << "mat[0]    = " << mat[0] << endl;
    cout << "&mat[0][0] = " << &mat[0][0] << endl;

    cout << "\nExibindo vetor mat[0] com a função:\n";
    exibeVetor(mat[0], 3);

	return 0;
}

void exibeVetor(int v[], int tamanho) {
    for (int i = 0; i < tamanho; i++)
        cout << v[i] << " ";
    cout << endl;
}