#include "main.hpp"

int** create_two_dim_array(int row, int cols){
    int** arr = new int*[row];
    for (int i = 0; i < row; i++){
        arr[i] = new int[cols]();
    }
    return arr;
}

void fill_two_dim_array(int **arr, int row, int cols){
    for (int i = 0; i < row; i++){
        for (int j = 0; j < cols; j++){
            arr[i][j] = (i+1) * (j+1);
        }
    }
}

void print_two_dim_array(int **arr, int row, int cols){
    for (int i = 0; i < row; i++){
        for (int j = 0; j < cols; j++){
            std::cout << '\t' << arr[i][j];
        }
        std::cout << std::endl;
    }

}

void delete_two_dim_array(int **arr, int row, int cols){
    for(int i = 0; i < row; i++){
        delete[] arr[i];
    }
    delete [] arr;
}

int main(){

    std::cout << "Введите количество строк: ";
    int row = 0, cols = 0;
    int **arr;
    std::cin >> row;
    std::cout << "Введите количество столбцов: " << std::endl;
    std::cin >> cols;
    std::cout << "Таблица умножения: " << std::endl;

    arr = create_two_dim_array(row, cols);
    fill_two_dim_array(arr, row, cols);
    print_two_dim_array(arr, row, cols);
    delete_two_dim_array(arr, row, cols);

    return 0;
}
