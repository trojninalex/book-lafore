#include <iostream>
#include <locale>

int main() {
  std::locale::global(std::locale("ru_RU.UTF-8"));
  std::wcout << L"Введите число десятичных фунтов: ";
  float money;
  std::cin >> money;

  int  funt = 0, shilling = 0, pence = 0;
  float decfrac;
  funt = static_cast<int>(money);
  decfrac = money - funt;

  shilling = decfrac * 20;
  pence =  (decfrac* 20 - shilling) * 12;

  std::wcout << L"Эквивалентная сумма в старой форме записи: \u00A3" << funt << '.' << shilling << '.' << pence << std::endl;
  return 0;
}
