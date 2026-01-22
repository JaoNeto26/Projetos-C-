#include <iostream>
#include <cmath>   // para sqrt()
using namespace std;

// Função que calcula e mostra as raízes da equação ax² + bx + c = 0
void bhaskara(double a, double b, double c) {
    if (a == 0) {
        cout << "Nao e uma equacao quadratica (a=0)." << endl;
        return;
    }

    double delta = b * b - 4 * a * c;

    cout << "Discriminante (delta) = " << delta << endl;

    if (delta > 0) {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "Duas raizes reais distintas: x1 = " << x1
            << ", x2 = " << x2 << endl;
    }
    else if (delta == 0) {
        double x = -b / (2 * a);
        cout << "Uma raiz real (dupla): x = " << x << endl;
    }
    else {
        cout << "Nao ha raizes reais (delta < 0)." << endl;
    }
}

int main() {
    double a, b, c;

    cout << "Digite os coeficientes a, b e c: ";
    cin >> a >> b >> c;

    bhaskara(a, b, c);

    return 0;
}
