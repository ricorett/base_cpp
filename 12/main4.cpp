#include <fstream>
#include <iostream>

int** create_two_dim_array(int row, int cols);
void delete_two_dim_array(int **arr, int row, int cols);

int main() {
    int rows = 0, cols = 0;
    std::ifstream file("in.txt");

    file >> rows >> cols;
    int **arr = create_two_dim_array(rows,cols);


    for (int i = 0; i < rows; i++) {
        for (int j = cols - 1; j >= 0; j--) {
            file >> arr[i][j];
        }
        std::cout << std::endl;
    }

    file.close();

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
    delete_two_dim_array(arr, rows, cols);
    return 0;
}

int** create_two_dim_array(int row, int cols){
    int** arr = new int*[row];
    for (int i = 0; i < row; i++){
        arr[i] = new int[cols]();
    }
    return arr;
}
void delete_two_dim_array(int **arr, int row, int cols){
    for(int i = 0; i < row; i++){
        delete[] arr[i];
    }
    delete [] arr;
}
