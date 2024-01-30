#include <iostream>

void calcPower(int value, int power, int result);
void printPower(int value, int power, int result);

int main(int argc, char** argv) {

    int value = 5, power = 2, result = 1;

    calcPower(value, power, result);


    value = 3;
    power = 3;
    result = 1;

    calcPower(value, power, result);

    value = 4;
    power = 4;
    result = 1;

    calcPower(value, power, result);

    return 0;
}


void calcPower(int value, int power, int result){
    for (int i = 0; i < power; ++i){
        result *= value;
    }
    printPower(value, power, result);

}


void printPower(int value, int power, int result){
    std::cout << value << " в степени " << power << " = " << result << std::endl;

}
