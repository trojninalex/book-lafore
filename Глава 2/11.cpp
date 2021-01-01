#include <iostream>
#include <iomanip>

int main() {
  std::wcout << std::left;
  std::wcout << std::setw(20) << L"Фамилия" << std::setw(20) << L"Имя" ;
  std::wcout << std::setw(20) << L"Адрес" << std::setw(21) << L"Город" << std::endl;
  
  std::wcout << std::setw(20) << L"----------" << std::setw(20) << L"-----------" ;
  std::wcout << std::setw(20) << L"------------------" << std::setw(21) << L"---------------------" << std::endl;

  
  std::wcout << std::setw(20) << L"Петров" << std::setw(20) << L"Василий" ;
  std::wcout << std::setw(20) << L"Кленовая 16" << std::setw(21) << L"Санкт-Петербург" << std::endl;

  std::wcout << std::setw(20) << L"Иванов" << std::setw(20) << L"Сергей" ;
  std::wcout << std::setw(20) << L"Осиновая 3" << std::setw(21) << L"Находка" << std::endl;

  std::wcout << std::setw(20) << L"Сидоров" << std::setw(20) << L"Иван" ;
  std::wcout << std::setw(20) << L"Березовая 21" << std::setw(21) << L"Калининград" << std::endl;

  return 0;
}
