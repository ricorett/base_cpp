#include <iostream>

int main() {
    std::cout << "Введите целое число: \n";
    int a = 0;
    std::cin >> a;
    for (int i = 1; i <= 10; i++){
        std::cout<< a << "\tx\t" << i << "\t=\t" << a * i << "\n";
    }
    return 0;
}
