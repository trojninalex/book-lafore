#include <iomanip>
#include <iostream>
#include <locale>

struct Sterling {
  int pounds;
  int shillings;
  int pence;
};
  
int main() {
  std::locale::global(std::locale("ru_RU.UTF-8"));
  
  Sterling oldSterlings = {0, 0, 0};
  double sterlings;
  char tmp;
  
  do {
    std::wcout << L"Введите сумму: \u00A3 ";
    std::cin >> sterlings;
    sterlings *= 100;
    std::wcout << sterlings << ' ' << (int)(sterlings) << std::endl;
    
    oldSterlings.shillings = (int)(sterlings) / 12;
    oldSterlings.pence = (int)(sterlings) % 12;
    oldSterlings.pounds = oldSterlings.shillings / 20;
    oldSterlings.shillings %= 20;
    
    std::wcout << L"Всего: \u00A3" << oldSterlings.pounds \
	       << '.' << oldSterlings.shillings << '.' \
	       << oldSterlings.pence << std::endl;
    
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
