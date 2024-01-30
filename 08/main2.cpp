#include <iostream>

int calc(int x, int y);


namespace sum {
int calc(int x, int y){
    return x + y;
}
}

namespace sub {
int calc(int x, int y){
    return x - y;
}
}

namespace multi {
int calc(int x, int y){
    return x * y;
}
}

namespace division {
int calc(int x, int y){
    return x / y;
}
}
int main() {
    int x = 6, y = 9;
    std::cout << "Сложение: " <<  sum::calc(x, y) << std::endl;
            std::cout << "Вычитание: " << sub::calc(x, y) << std::endl;
                     std::cout << "Умножение: " << multi::calc(x, y) << std::endl;
                     std::cout << "Деление: " << division::calc(x, y) << std::endl;

        return 0;
}
