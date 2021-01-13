#include <iostream>
#include <iomanip>
#include <locale>

int main() {
  std::locale::global(std::locale("ru_RU.UTF-8"));
  int funt, shilling, pence;
  int fFunt, fShilling, fPence;
  int sFunt, sShilling, sPence;
  char tmp;

  do {
    std::wcout << L"Введите первую сумму: \u00A3";
    std::cin >> fFunt >> tmp >> fShilling >> tmp >> fPence;
    //std::cin.clear();
    //std::cin.ignore(100, '\r');
    
    std::wcout << L"Введите вторую сумму: \u00A3";
    std::cin >> sFunt >> tmp >> sShilling >> tmp >> sPence;
    //std::cin.clear();
    //std::cin.ignore(100, '\r');

    funt = fFunt + sFunt;
    shilling = fShilling + sShilling;
    pence = fPence + sPence;

    shilling += pence / 12;
    pence %= 12;
    funt += shilling / 20;
    shilling %= 20;
    
    std::wcout << L"Всего: \u00A3" << funt << '.' << shilling << '.'	\
	       << pence << std::endl;
    
    do {
      std::wcout << L"Продолжить (y/n)? ";
      std::cin >> tmp;
      if (tmp != 'y' && tmp != 'n') {
	std::wcout << L"Неправильный ввод." << std::endl;
      }
    } while (tmp != 'y' && tmp != 'n');
  } while (tmp == 'y');

  return 0;
}
