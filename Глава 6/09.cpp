#include <iomanip>
#include <iostream>
#include <locale>

class Fraction {
private:
  int a;
  int b;
public:
  void add(Fraction f) {
    a = a * f.b + f.a * b;
    b = b * f.b;
  }
  void setA(int tmp) { a = tmp; }
  void setB(int tmp) { b = tmp; }
  void show() const { std::wcout << a << '/' << b << std::endl; }
};

int main() {
  std::locale::global(std::locale("ru_RU.UTF-8"));

  Fraction f1, f2;
  int tmp1, tmp2;
  char ch;
  
  std::wcout << L"Введите первую дробь: ";
  std::cin >> tmp1 >> ch >> tmp2;
  f1.setA(tmp1);
  f1.setB(tmp2);
  
  std::wcout << L"Введите вторую дробь: ";
  std::cin >> tmp1 >> ch >> tmp2;
  f2.setA(tmp1);
  f2.setB(tmp2);

  f1.add(f2);
  f1.show();
  
  return 0;
}
