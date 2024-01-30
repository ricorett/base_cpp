#include <iostream>

void swap(int &x, int &y);

int main(int argc, char** argv)
{
    int a = 5, b = 8;

    std::cout << "a = " << a << ", b = " << b << std::endl;

    swap(a, b);

    std::cout << "a = " << a << ", b = " << b << std::endl;

    return 0;
}

void swap (int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}
