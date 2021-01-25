#include <iomanip>
#include <iostream>
#include <locale>

int global = 0;

void func1();
int func2();

int main() {
  std::locale::global(std::locale("ru_RU.UTF-8"));

  for(int i = 0; i < 10; i++) {
    func1();
  }

  std::wcout << L"Функция с глобальной переменной вызывалась: " << global \
	     << L" раз." <<std::endl;

  int var;
  for(int i = 0; i < 10; i++) {
    var = func2();
  }

  std::wcout << L"Функция с статической переменной вызывалась: " << var \
	     << L" раз." <<std::endl;
  
  return 0;
}

void func1() {
  global++;
}

int func2() {
  static int statVar = 0;
  statVar++;
  return statVar;
}
