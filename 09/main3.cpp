#include "main.hpp"

int main() {

    srand(time(NULL));
    const int size_a  = 9;
    int arr[size_a];
    filling_arr(arr, size_a);
    print_arr(arr, size_a);
    std::cout << std::endl;
    reverse(arr, size_a);
    print_arr(arr, size_a);
    std::cout << std::endl;

    return 0;
}


void filling_arr(int *arr, const int &size) {
    for (int i = 0; i < size; i++) {
        arr[i] = 1 + rand() % 10;
    }
}

void print_arr(int *arr, const int &size){
    for (int i = 0; i < size; i++){
        std::cout << arr[i] << " ";
    }
}

void reverse (int *arr, const int &size){
    int temp;
    for (int i = 0; i < (size/2); i++){
        temp = arr[size - 1 - i];
        arr[size - 1 - i] = arr[i];
        arr[i] = temp;
    }
}
