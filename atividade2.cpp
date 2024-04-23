#include <iostream>

int buscaBinaria(int vetor[], int tamanho, int X){
    int inicio = 0;
    int fim = tamanho - 1;

    while (inicio <= fim){
        int meio = (inicio + fim) / 2;
        if (vetor[meio] == X)
            return meio;
        else if (vetor[meio] < X)
            inicio = meio + 1;
        else
            fim = meio - 1;
    }

    return -1;
}

int main() {
    int X;
    std::cout << "Digite o valor a ser buscado: ";
    std::cin >> X;

    int tamanho;
    std::cout << "Digite o tamanho do vetor a ser gerado: ";
    std::cin >> tamanho;
    int vetor[tamanho];

    std::cout << "Vetor gerado: ";
    for(int i = 0; i < tamanho; i++){
        vetor[i] = rand() % 100;
        std::cout << vetor[i] << " ";
    }

    std::cout << std::endl;

    int resultado = buscaBinaria(vetor, tamanho, X);
    if (resultado !=-1)
        std::cout << "O valor " << X << " foi encontrado no indice " << resultado << std::endl;
    else
        std::cout << "O valor " << X << " nao foi encontrado" << std::endl;
    
    return 0;
}