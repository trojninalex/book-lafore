#include <iostream>
#include <iomanip>
#include <locale>

int main() {
  std::locale::global(std::locale("ru_RU.UTF-8"));
  std::wcout << L"Введите число: ";
  char ch = '0';
  long number = 0;

  do {
    number = number * 10 + (ch - '0');
  } while (std::cin >> ch);

  std::wcout << L"Вы ввели: " << number << std::endl;

  return 0;
}
