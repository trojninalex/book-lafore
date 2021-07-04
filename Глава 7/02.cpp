#include <iomanip>
#include <iostream>
#include <locale>

#define MAX 100

class employee
{
private:
  std::string name;
  long number;
public:
  void getdata(std::string str, float n) {name = str; number = n;}
  void putdata() {
    std::wcout << L"Номер сотрудника:"<< std::setw(4) << number;
    std::wcout << std::setw(18) << L"Имя сотрудника: " << name.c_str() << std::endl;
  }
};

int main() {
  std::locale::global(std::locale("ru_RU.UTF-8"));
		      
  employee emp[MAX];
  std::string name;
  long number;
  
  for (int i = 0; i < MAX; i++) {
    std::wcout << L"Введите номер: ";
    std::cin >> number;
    std::wcout << L"Введите имя сотрудника: ";
    std::cin >> name;
    emp[i].getdata(name, number);
  }

  for (int i = 0; i < MAX; i++) {
    emp[i].putdata();
  }

  return 0;
}
