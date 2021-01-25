#include <iomanip>
#include <iostream>
#include <locale>

double power(double n, int p = 2);

int main() {
  std::locale::global(std::locale("ru_RU.UTF-8"));

  std::wcout << L"Введите число: ";
  double n;
  std::cin >> n;
  std::wcout << L"Введите степень: ";
  int p;
  std::cin >> p;
  std::wcout << L"Число " << n << L" в степени " << p << L" равно: " \
	     << power(n, p) << std::endl;

  return 0;
}

double power(double n, int p) {
  if (p < 2)
    return n;
  else
    return n * power(n, p-1);
}
