#include <cmath>       // para sqrt, pow e atan2
#include "funcoes.h"   // importa os protótipos

// Calcula o módulo do vetor
double ModuloVetor(double x, double y) {
    return sqrt(pow(x, 2) + pow(y, 2));
}

// Calcula o ângulo em graus
double AnguloVetor(double x, double y) {
    const double PI = 3.14159;
    return atan2(y, x) * 180.0 / PI;
}
