#include <iostream>
#include <cstdlib>
#include <ctime>

int buscaSequencial(int vetor[], int tamanho, int X, int indice){
    if (indice == tamanho)
        return -1;
    if (vetor[indice] == X)
        return indice;
    return buscaSequencial(vetor, tamanho, X, indice + 1);
}

int main() {
    srand(time(0));

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

    int resultado = buscaSequencial(vetor, tamanho, X, 0);
    if (resultado !=-1)
        std::cout << "O valor " << X << " foi encontrado no indice " << resultado << std::endl;
    else
        std::cout << "O valor " << X << " nao foi encontrado" << std::endl;

    return 0;
}