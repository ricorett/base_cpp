#include <iostream>
#include <ctime>

int main() {
    int arr[10] = {0};
    bool swapped = false;

    srand(time(nullptr));

    std::cout << "Массив до сортировки: ";

    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 100;
    }
    for (int i = 0; i < 10; i++)
    {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl << "Массив после сортировки: ";

    do
    {
        swapped = false;
        for (int i = 9; i > 0; i--)
        {
            if (arr[i] < arr[i - 1])
            {
                int temp = arr[i - 1];
                arr[i - 1] = arr[i];
                arr[i] = temp;
                swapped = true;
            }
        }
    } while (swapped);



    for (int i = 0; i < 10; i++)
    {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;
    return 0;
}
