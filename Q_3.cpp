 // Variável soma terá o valor 77.

#include <iostream>
using namespace std;

int main() {
    int INDICE = 12;
    int SOMA = 0;
    int K = 1;

    while (K < INDICE) {
        K = K + 1;
        SOMA = SOMA + K;
    }

    cout << "A soma é: " << SOMA << endl;

    return 0;
}
