#include <iostream>
#include <iomanip>
#include <locale>

int main() {

  std::locale::global(std::locale("ru_RU.UTF-8"));
  std::wcout << std::left;
  std::wcout << std::setw(10) << L"Фамилия" << std::setw(11) << L"Имя" ;
  std::wcout << std::setw(18) << L"Адрес" << std::setw(21) << L"Город" << std::endl;
  
  std::wcout << std::setw(10) << L"----------" << std::setw(11) << L"-----------" ;
  std::wcout << std::setw(18) << L"------------------" << std::setw(21) << L"---------------------" << std::endl;

  
  std::wcout << std::setw(10) << L"Петров" << std::setw(11) << L"Василий" ;
  std::wcout << std::setw(18) << L"Кленовая 16" << std::setw(21) << L"Санкт-Петербург" << std::endl;

  std::wcout << std::setw(10) << L"Иванов" << std::setw(11) << L"Сергей" ;
  std::wcout << std::setw(18) << L"Осиновая 3" << std::setw(21) << L"Находка" << std::endl;

  std::wcout << std::setw(10) << L"Сидоров" << std::setw(11) << L"Иван" ;
  std::wcout << std::setw(18) << L"Березовая 21" << std::setw(21) << L"Калининград" << std::endl;

  return 0;
}
