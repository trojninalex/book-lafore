#include <iomanip>
#include <iostream>
#include <locale>

enum etype {laborer, secretary, manager, accountant, executice, researcher };

int main() {
  std::locale::global(std::locale("ru_RU.UTF-8"));

  std::wcout << L"Введите первую букву должности (laborer, secretary, " \
	     << L"manager, accountant, executive, researcher): ";
  char ch;
  std::cin >> ch;

  etype type;
  switch (ch) {
  case 'l':
    type = laborer;
    break;
  case 's':
    type = secretary;
    break;
  case 'm':
    type = manager;
    break;
  case 'a':
    type = accountant;
    break;
  case 'e':
    type = executice;
    break;
  case 'r':
    type = researcher;
    break;
  default: break;
  }

  std::wcout << L"Полное название должности: ";
  switch (type) {
  case laborer:
    std::wcout << L"laborer." << std::endl;
    break;
  case secretary:
    std::wcout << L"secretary." << std::endl;
    break;
  case manager:
    std::wcout << L"manager." << std::endl;
    break;
  case accountant:
    std::wcout << L"accountant." << std::endl;
    break;
  case executice:
    std::wcout << L"executice." << std::endl;
    break;
  case researcher:
    std::wcout << L"researcher." << std::endl;
    break;
  default:
    std::wcout << L"Нет такой професии." << std::endl;
    break;
  }

  return 0;
}
