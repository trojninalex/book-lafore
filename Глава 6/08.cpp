#include <iomanip>
#include <iostream>
#include <locale>

class ObjClass {
private:
  static int number;
public:
  ObjClass() { number++; }
  void show() const { std::wcout << L"Мой порядковый номер: " << number << std::endl; }
};

int ObjClass::number;

int main() {
  std::locale::global(std::locale("ru_RU.UTF-8"));

  ObjClass obj1;
  obj1.show();
  
  ObjClass obj2;
  obj2.show();
  
  ObjClass obj3;
  obj3.show();
  
  return 0;
}
