#include <iostream>

int main() {
    short a;
    int b;
    long c;
    long long d;
    float g;
    double e;
    long double f;
    bool h;
    std::cout << "short: " << &a << " " << sizeof(a) << std::endl;
    std::cout << "int: " << &b << " " << sizeof(b) << std::endl;
    std::cout << "long: " << &c << " " << sizeof(c) << std::endl;
    std::cout << "long long: " << &d << " " << sizeof(d) << std::endl;
    std::cout << "float: " << &g << " " << sizeof(g) << std::endl;
    std::cout << "double: " << &e << " " << sizeof(e) << std::endl;
    std::cout << "long double: " << &f << " " << sizeof(f) << std::endl;
    std::cout << "bool: " << &h << " " << sizeof(h) << std::endl;
    return 0;
}
