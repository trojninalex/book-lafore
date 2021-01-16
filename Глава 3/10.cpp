#include <iostream>
#include <iomanip>
#include <locale>

int main() {
  std::locale::global(std::locale("ru_RU.UTF-8"));

  float bank, percent;
  int year = 0, summ;
  
  std::wcout << L"Введите начальный вклад: ";
  std::cin >> bank;
  std::wcout << L"Введите сумму требуемую для накопления: ";
  std::cin >> summ;
  std::wcout << L"Введите процентную ставку: ";
  std::cin >> percent;

  for (; bank < summ; ++year) {
    bank += bank * percent / 100;
    std::wcout << year << ' ' << bank << std::endl;
  }
  
  std::wcout << L"Для накопления " << summ << L" вам потребуется " \
	     << year << L" лет." << std::endl;

  return 0;
}
