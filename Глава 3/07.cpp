#include <iostream>
#include <iomanip>
#include <locale>

int main() {
  std::locale::global(std::locale("ru_RU.UTF-8"));

  float bank, percent;
  int year;
  
  std::wcout << L"Введите начальный вклад: ";
  std::cin >> bank;
  std::wcout << L"Введите число лет: ";
  std::cin >> year;
  std::wcout << L"Введите процентную ставку: ";
  std::cin >> percent;

  for (; year; year--) {
    bank += bank * percent / 100;
  }
  
  std::wcout << L"Через " << year << L" лет вы получите " << bank \
	     << L" доллара." << std::endl;

  return 0;
}
