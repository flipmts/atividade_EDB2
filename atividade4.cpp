#include <iostream>

int fibonacci(int N) {
    if (N <= 1)
        return N;
    
    int fib1 = 0;
    int fib2 = 1;
    int fib = 0;

    for (int i = 2; i <= N; i++) {
        fib = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib;
    }

    return fib;
}

int main() {
    int N;
    std::cout << "Digite o valor de N: ";
    std::cin >> N;

    int resultado = fibonacci(N);
    std::cout << "O " << N << "o numero de Fibonacci e: " << resultado << std::endl;

    return 0;
}