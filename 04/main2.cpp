#include <iostream>

int main() {
    std::cout << "Введите целое число\n";
    int a = 0, count = 0;
    std::cin >> a;
    while(a != 0){
        count += a%10;
        a /= 10;
    }
    std::cout << "Сумма цифр равна: " << count;
}
