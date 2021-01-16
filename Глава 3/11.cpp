#include <iostream>
#include <iomanip>
#include <locale>

int main() {
  std::locale::global(std::locale("ru_RU.UTF-8"));

  int funt, shilling, pence;
  int fFunt, fShilling, fPence;
  int sFunt, sShilling, sPence;
  char tmp, operand, ch;
  
  do {
    std::wcout << L"Введите первую сумму: \u00A3";
    std::cin >> fFunt >> tmp >> fShilling >> tmp >> fPence;
    
    std::wcout << L"Введите вторую сумму: \u00A3";
    std::cin >> sFunt >> tmp >> sShilling >> tmp >> sPence;

    std::wcout << L"Введите операнд (+,-): ";
    std::cin >> operand;
    
    switch (operand) {
    case '+':
      funt = fFunt + sFunt;
      shilling = fShilling + sShilling;
      pence = fPence + sPence;
      
      shilling += pence / 12;
      pence %= 12;
      funt += shilling / 20;
      shilling %= 20;
      break;
    case '-':
      funt = fFunt - sFunt;
      shilling = fShilling - sShilling;
      pence = fPence - sPence;

      if (pence < 0) {
	shilling--;
	pence += 12;
      }

      if (shilling < 0) {
	funt--;
	shilling += 20;
      }
      break;
    default:
      std::wcout << L"Неправильный операнд." << std::endl;
      continue;
      break;
    }

    std::wcout << L"Всего: \u00A3" << funt << '.' << shilling << '.'	\
	       << pence << std::endl;
    
    do {
      std::wcout << L"Выполнить еще одну операцию?(y/n) ";
      std::cin >> ch;;
      if (ch != 'y' && ch != 'n')
	std::wcout << L"Неправильный ответ." << std::endl;
    } while (ch != 'y' && ch != 'n');

  } while (ch == 'y');

  return 0;
}
