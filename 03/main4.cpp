#include <iostream>
#include <string>

void findMax(int a, int b, int& max, int& min) {
    if (a > b) {
        max = a;
        min = b;
    } else {
        max = b;
        min = a;
    }
}

std::string printInWord(int a) {

    std::string word;
    std::string tens, units, negative;

    if (a < 0) {
        negative = "минус ";
        a *= -1;
    }

    if (a == 0) {
        word = "ноль";
    } else if (a == 100) {
        word = "сто";
    } else if (a == 10) {
        word = "десять";
    } else if (a > 10 && a < 20) {
        switch (a % 10) {
        case 1: word = "одиннадцать"; break;
        case 2: word = "двенадцать"; break;
        case 3: word = "тринадцать"; break;
        case 4: word = "четырнадцать"; break;
        case 5: word = "пятнадцать"; break;
        case 6: word = "шестнадцать"; break;
        case 7: word = "семнадцать"; break;
        case 8: word = "восемнадцать"; break;
        case 9: word = "девятнадцать"; break;
        }
    } else {
        switch (a % 10) {
        case 1: units = "один"; break;
            case 2: units = "два"; break;
            case 3: units = "три"; break;
            case 4: units = "четыре"; break;
        case 5: units = "пять"; break;
            case 6: units = "шесть"; break;
            case 7: units = "семь"; break;
            case 8: units = "восемь"; break;
        case 9: units = "девять"; break;
        }
        switch (a / 10) {
        case 2: tens = "двадцать "; break;
            case 3: tens = "тридцать "; break;
            case 4: tens = "сорок "; break;
            case 5: tens = "пятьдесят "; break;
        case 6: tens = "шестьдесят "; break;
        case 7: tens = "семьдесят "; break;
        case 8: tens = "восемьдесят "; break;
        case 9: tens = "девяносто "; break;
        }
        word = negative + tens + units;
    }

    return word;
}

int main() {
    int a = 0, b = 0, min = 0, max = 0;
    std::string word_a, word_b;

    std::cout << "Введите первое число: ";
    std::cin >> a;
    std::cout << std::endl;
    std::cout << "Введите второе число: ";
    std::cin >> b;
    std::cout << std::endl;

    if ((a < -100) || (a > 100) || (b < -100) || (b > 100)) {
        std::cout << "Ошибка! Одно из чисел вне диапазона!\n";
    } else {
        findMax(a, b, max, min);
        word_a = printInWord(a);
        word_b = printInWord(b);

        if (a == b) {
            std::cout << word_a << " равно " << word_b << std::endl;
        } else if (a == max) {
            std::cout << word_a << " больше чем " << word_b << std::endl;
        } else {
            std::cout << word_b << " больше чем " << word_a << std::endl;
        }
    }

    return 0;
}
