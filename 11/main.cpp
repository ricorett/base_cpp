#include <iostream>
#include <string>
#include <ctime>

int main() {
    std::locale::global(std::locale(""));

    std::wstring name, surname;

    std::wcout << L"Введите имя: ";
    std::wcin >> name;
    std::wcout << L"\nВведите фамилия: ";
    std::wcin >> surname;

    std::wcout << L"\n Приветствую, " << name << " " << surname << "!" << std::endl;
}
