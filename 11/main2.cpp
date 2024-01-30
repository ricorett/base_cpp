#include <iostream>
#include <string>

int main() {
    std::string malina = "малина";
    std::string guess;

    while (malina != guess) {
        std::cout << "Угадай слово: ";
        std::cin >> guess;
        if (malina == guess) {

            std::cout << "Правильно! Загаданное слово: " << malina << "!"
                      << std::endl;
        } else {
            std::cout << "Неправильно" << std::endl;
        }

    }
}
