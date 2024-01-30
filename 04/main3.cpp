#include <iostream>

int main() {
    int a = 0, count = 0;

    do {
        std::cout << "Введите целое число или '0', чтобы закончить:\n";
        std::cin >> a;
        count += a;
    } while(a != 0);

    std::cout << "Сумма введенных чисел: " << count;

    return 0;
}
