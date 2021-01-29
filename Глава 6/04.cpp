#include <iomanip>
#include <iostream>
#include <locale>

class employee {
private:
  int numb;
  float allowance;
public:
  void set() {
    std::wcout << L"Введите номер сотрудника: ";
    std::cin >> numb;
    std::wcout << L"Введите размер пособия: ";
    std::cin >> allowance;
  }

  void display() {
    std::wcout << L"Сотрудник по номеру: " << numb		   \
	       << L" имеет размер пособия " << allowance << "$."	\
	       << std::endl;
  }
};

int main() {
  std::locale::global(std::locale("ru_RU.UTF-8"));

  employee one, two, three;

  one.set();
  two.set();
  three.set();
  
  one.display();
  two.display();
  three.display();
  
  return 0;
}
