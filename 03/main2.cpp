#include <iostream>

int main() {
    std::cout << "Введите первое число: ";
    int a = 0;
    std::cin >> a;
    std::cout << std::endl;
    std::cout << "Введите второе число: ";
    int b = 0;
    std::cin >> b;
    std::cout << std::endl;
    std::cout << "Введите третье число: ";
    int c = 0;
    std::cin >> c;
    std::cout << std::endl;
    int max = 0, min = 0, mid = 0;
    max  = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    min = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
    mid =(a > b) ? ((a < c) ? a : ((b > c) ? b : c)) : ((b < c) ? b : c);

    std::cout << "Результат: " << max << " " << mid << " " << min <<   std::endl;

        return 0;
}
