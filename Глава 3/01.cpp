#include <iostream>
#include <iomanip>
#include <locale>

int main() {
  std::locale::global(std::locale("ru_RU.UTF-8"));
  std::wcout << L"Введите число: ";
  int number;
  std::cin >> number;

  int inc = 0;

  for (int i = 0; i < 20; i++) {
    for (int j = 0; j < 10; j++) {
      inc += number;
      std::wcout << std::setw(5) << inc;
    }
    std::wcout << std::endl;
  }

  return 0;
}
