#include <iostream>

int main() {
  float temp;
  float far;

  std::cout << "Введите температуру в цельсии: ";
  std::cin >> temp;

  far = (temp * 9) / 5 + 32;

  std::cout << "Температура в фарингейт: " << far << std::endl;

  return 0;
}
