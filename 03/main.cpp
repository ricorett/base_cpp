#include <iostream>
void isTrue(bool a, bool b){
    if (a == 1){
        std::cout << "true\t";
    } else {
        std::cout << "false\t";
    }
    if (b == 1){
        std::cout << "true\t";
    } else {
        std::cout << "false\t";
    }
}

void printOR(bool a, bool b) {
    isTrue(a, b);
    std::cout << (a || b ? "true" : "false") << std::endl;
}

void printAND(bool a, bool b) {
    isTrue(a, b);
    std::cout << (a && b ? "true" : "false") << std::endl;
}

int main() {
    bool a = 1, b = 1;
    printOR(a, b);
    a = 0;
    printOR(a, b);
    a = 1;
    b = 0;
    printOR(a, b);
    a = 0;
    printOR(a, b);
    std::cout<< std::endl;
    a = 1, b = 1;
    printAND(a, b);
    a = 0;
    printAND(a, b);
    a = 1;
    b = 0;
    printAND(a, b);
    a = 0;
    printAND(a, b);
    return 0;
}


