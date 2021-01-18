#include <iomanip>
#include <iostream>
#include <locale>

struct employee {
  int numb;
  float allowance;
};

int main() {
  std::locale::global(std::locale("ru_RU.UTF-8"));

  employee one, two, three;
  std::wcout << L"Введите номер первого сотрудника: ";
  std::cin >> one.numb;
  std::wcout << L"Введите размер пособия: ";
  std::cin >> one.allowance;
  
  std::wcout << L"Введите номер второго сотрудника: ";
  std::cin >> two.numb;
  std::wcout << L"Введите размер пособия: ";
  std::cin >> two.allowance;

  std::wcout << L"Введите номер третьего сотрудника: ";
  std::cin >> three.numb;
  std::wcout << L"Введите размер пособия: ";
  std::cin >> three.allowance;

  std::wcout << L"Сотрудник по номеру: " << one.numb \
	     << L" имеет размер пособия " << one.allowance << "$." \
	     << std::endl;
  std::wcout << L"Сотрудник по номеру: " << two.numb \
	     << L" имеет размер пособия " << two.allowance << "$." \
	     << std::endl;
  std::wcout << L"Сотрудник по номеру: " << three.numb \
	     << L" имеет размер пособия " << three.allowance << "$." \
	     << std::endl;
  
  return 0;
}
