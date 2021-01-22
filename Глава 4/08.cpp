#include <iomanip>
#include <iostream>
#include <locale>

struct fraction {
  int a;
  int b;
};

int main() {
  std::locale::global(std::locale("ru_RU.UTF-8"));

  fraction a, b;
  
  std::wcout << L"Введите первую дробь: ";
  char dummychar;
  std::cin >> a.a >> dummychar >> a.b;

  std::wcout << L"Введите вторую дробь: ";
  std::cin >> b.a >> dummychar >> b.b;

  std::wcout << L"Сумма равна: " << (a.a*b.a + a.b*b.b) << '/' \
	     << a.b*b.b << std::endl;
  
  return 0;
}
