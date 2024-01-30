#include <iostream>
#include <string>
#include <locale>

void prediction(std::wstring sex, std::wstring zodiac, std::wstring& element, int age) {
  switch (zodiac[0]) {
    case L'с':
    case L'С':
      switch (zodiac[1]) {
        case L'т': element = L"water"; break;
        case L'к':
          element = L"fire";
          break;
      }
      break;

    case L'о':
    case L'О':
    case L'Л':
    case L'л':
      element = L"fire";
      break;

    case L'Р':
    case L'р':
      element = L"water";
      break;

    case L'К':
    case L'к':
    case L'Т':
    case L'т':
    case L'Д':
    case L'д':
      element = L"earth";
      break;

    case L'Б':
    case L'б':
    case L'В':
    case L'в':
      element = L"air";
      break;

    default:
      std::wcout << L"Incorrect zodiac sign" << std::endl;
  }

  switch (sex[0]) {
    case L'м':
    case L'М':
      if ((age <= 40) && (element == L"water")) {
        std::wcout << L"Сегодня очень плодотворный день. Можно добиться того, что прежде казалось почти невозможным." << std::endl;
      } else {
        std::wcout << L"Гороскоп для вас находится в разработке. Приходите чуточку позже ;)" << std::endl;
      }
      break;

    case L'ж':
    case L'Ж':
      if ((age >= 15) && (age <= 30) && (element == L"earth")) {
        std::wcout << L"Сегодняшний вечер подходит для общения с друзьями, проведения домашних праздников и импровизированных вечеринок. " << std::endl;
        std::wcout << L"Будет не только весело, но и интересно: найдётся дело, которое увлечёт всех." << std::endl;
      } else {
        std::wcout << L"Гороскоп для вас находится в разработке. Приходите чуточку позже ;)" << std::endl;
      }
      break;

    default:
      std::wcout << L"Incorrect sex" << std::endl;
  }
}

int main() {
  std::locale::global(std::locale(""));
  std::wstring element, zodiac, sex;
  int age;

  std::wcout << L"Введите пол: ";
  std::wcin >> sex;

  std::wcout << L"Введите знак зодиака: ";
  std::wcin >> zodiac;

  std::wcout << L"Введите возраст: ";
  std::wcin >> age;

  std::wcout << sex << ' ' << zodiac[0] << ' ' << age << std::endl;
  prediction(sex, zodiac, element, age);
  return 0;
}
