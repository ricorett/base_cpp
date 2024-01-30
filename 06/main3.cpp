#include <iostream>

int fibonacci(int n);
void printFibonacci(int n);

int main() {
    int n;

    std::cout << "Введите число: ";
    std::cin >> n;

    std::cout << "Числа Фибоначчи: ";
    printFibonacci(n);

    return 0;
}

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}


void printFibonacci(int n) {
    for (int i = 0; i < n; ++i) {
        std::cout << fibonacci(i) << " ";
    }
}
