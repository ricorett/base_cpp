#include "main.hpp"

double* create_array(int size) {
    return  new double[size]();
}

void print_array(double *arr, int size){
    std::cout << "Массив: ";

    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
}

int main() {
    int size = 0;
    ;
    std::cout << "Введите размер массива: ";
    std::cin >> size;
    std::cout << std::endl;

    double *arr = create_array(size);
    print_array(arr, size);
    delete[] arr;
    return 0;
}
