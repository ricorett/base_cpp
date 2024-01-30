#include <ctime>
#include <iostream>

int main() {

    int arr[3][6], min = 1000, max = 0, min_i = 0, min_j = 0, max_i = 0, max_j = 0;
    srand(time(nullptr));

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            arr[i][j] = rand() % 101;
        }
    }
    std::cout << "Массив: " << std::endl;

                                     for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            if (arr[i][j] < min) {
                min = arr[i][j];
                min_i = i;
                min_j = j;
            }
            if (arr[i][j] > max) {
                max = arr[i][j];
                max_i = i;
                max_j = j;
            }
            std::cout << arr[i][j] << '\t';
        }
        std::cout << std::endl;
    }
    std::cout << "Индекс минимального элемента массива: " << min_i << ' ' << min_j << std::endl;
            std::cout << "Индекс максимального элемента массива: " << max_i << ' ' << max_j << std::endl;

        return 0;
}
