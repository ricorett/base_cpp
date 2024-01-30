#include "main.hpp"

int main() {

    const int size_a = 9, size_b = 4, size_c = 5;
    int arr_a[size_a], arr_b[size_b], arr_c[size_c];

    srand(time(NULL));

    filling_arr(arr_a, size_a);
    filling_arr(arr_b, size_b);
    filling_arr(arr_c, size_c);

    print_arr(arr_a, size_a);
    std::cout << std::endl;
    print_arr(arr_b, size_b);
    std::cout << std::endl;
    print_arr(arr_c, size_c);

}

void filling_arr(int *arr, const int &size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
    }
}

void print_arr(int *arr, const int &size){
    for (int i = 0; i < size; i++){
        std::cout << arr[i] << " ";
    }
}
