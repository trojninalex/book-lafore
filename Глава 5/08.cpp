#include <iomanip>
#include <iostream>
#include <locale>

void swap(int &a, int &b);

int main() {
  std::locale::global(std::locale("ru_RU.UTF-8"));

  std::wcout << L"Введите два числа: ";
  int a, b;
  std::cin >> a >> b;

  swap(a, b);
  std::wcout << L"Число A=" << a << ", число B=" << b << '.' << std::endl;

  return 0;
}

void swap(int &a, int &b) {
  a += b;
  b = a - b;
  a = a - b;
}
