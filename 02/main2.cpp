#include <iostream>
#include <string>

int main (){
    setlocale(LC_ALL, "rus");

    std::cout << "Введите слово: " << std::endl;
        std::string word;
    std::cin >> word;
    std::cout << "Вы ввели слово: " << word;

    return 0;
}
