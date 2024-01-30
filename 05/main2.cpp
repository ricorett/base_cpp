#include <ctime>
#include <iostream>

int main() {

    int arr[10], min = 1000, max = 0;
    srand(time(nullptr));

    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 101;
    }

    std::cout << "Массив: ";

    for (int i = 0; i < 10; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
        if (i == 9) {
            std::cout << arr[i] << std::endl;
        } else {
            std::cout << arr[i] << ", ";
        }
    }
    std::cout << "Минимальный элемент массива: " << min << std::endl;
    std::cout << "Максимальный элемент массива: " << max << std::endl;

    return 0;
}
