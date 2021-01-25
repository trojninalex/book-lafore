#include <iomanip>
#include <iostream>
#include <locale>

void zeroSmaller(int&, int&);

int main() {
  std::locale::global(std::locale("ru_RU.UTF-8"));

  int a, b;
  std::wcout << L"Введите два числа: ";
  std::cin >> a >> b;

  zeroSmaller(a, b);

  std::wcout << L"Число А=" << a << L", число В=" << b << '.' << std::endl;

  return 0;
}

void  zeroSmaller(int &a, int &b) {
  if (a > b) {
    b = 0;
  } else if (a < b) {
    a = 0;
  }
}
