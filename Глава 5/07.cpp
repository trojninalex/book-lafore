#include <iomanip>
#include <iostream>
#include <locale>

double power(int n);
double power(long n);
double power(float n);
double power(char n);

int main() {
  std::locale::global(std::locale("ru_RU.UTF-8"));

  int i;
  long l;
  float f;
  char ch;
  std::wcout << L"Введите число: ";
  std::cin >> i;
  std::wcout << L"Степень числа равна: " << power(i) << std::endl;
  
  std::wcout << L"Введите число: ";
  std::cin >> l;
  std::wcout << L"Степень числа равна: " << power(l) << std::endl;
  
  std::wcout << L"Введите число: ";
  std::cin >> f;
  std::wcout << L"Степень числа равна: " << power(f) << std::endl;
  
  std::wcout << L"Введите число: ";
  std::cin >> ch;
  std::wcout << L"Степень числа равна: " << power(ch) << std::endl;
  
  return 0;
}

double power(int n) {
  return n * n;
}

double power(long n) {
  return n * n;
}

double power(float n) {
  return n * n;
}

double power(char ch) {
  int n = ch - '0';
  return n * n;
}
