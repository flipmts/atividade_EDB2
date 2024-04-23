#include <iostream>

bool estaOrdenado(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho - 1; ++i) {
        if (vetor[i] > vetor[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int vetor1[] = {1, 2, 3, 4, 5};
    int tamanho1 = sizeof(vetor1) / sizeof(vetor1[0]);
    std::cout << "O vetor1 esta ordenado: " << std::boolalpha << estaOrdenado(vetor1, tamanho1) << std::endl;

    int vetor2[] = {5, 4, 3, 2, 1};
    int tamanho2 = sizeof(vetor2) / sizeof(vetor2[0]);
    std::cout << "O vetor2 esta ordenado: " << std::boolalpha << estaOrdenado(vetor2, tamanho2) << std::endl;

    return 0;
}