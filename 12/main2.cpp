#include <iostream>
#include <fstream>

int main() {

    std::string size;
    std::ifstream fin ("in.txt");

    fin >> size;

    int size_arr = std::stoi(size);
    int *arr = new int[size_arr];

    for (int i = 0; i < size_arr; i++) {
        fin >> arr[i];
    }

    for (int i = size_arr - 1; i >= 0; i--) {
        std::cout << arr[i] << " ";
    }
    fin.close();
    delete[] arr;
    return 0;
}
