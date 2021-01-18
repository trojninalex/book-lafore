#include <iomanip>
#include <iostream>
#include <locale>

int main() {
  std::locale::global(std::locale("ru_RU.UTF-8"));

  unsigned int numb;
  unsigned long fact = 1;

  do {
    std::wcout << L"Для выхода нажмите 0" << std::endl;
    std::wcout << L"Введите целое число: ";
    std::cin >> numb;

  
    for (int j = numb; j > 0; j--)
      fact *= j;
    
    std::wcout << L"Факториал числа равен " << fact << std::endl;
    fact = 1;
  } while (numb);
  
  return 0;
}
  
