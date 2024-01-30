#include <iostream>
#include <ctime>
int main() {

    int arr[10];
    srand(time(nullptr));

    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 100;
        if(i == 9){
            std::cout << arr[i];
        } else {
            std::cout << arr[i] << ", ";
        }
    }

    std::cout << std::endl;
    return 0;
}
