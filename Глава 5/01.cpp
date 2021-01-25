#include <iomanip>
#include <iostream>
#include <locale>

float circarea(float);

int main() {
  std::locale::global(std::locale("ru_RU.UTF-8"));

  float rad;
  std::wcout << L"Введите радиус окружности: ";
  std::cin >> rad;
  std::wcout << L"Площадь круга равна " << circarea(rad) << '.' << std::endl;
  
  return 0;
}

float circarea(float rad) {
  return 3.14159 * rad * rad;
}
