#include <iostream>
#include <iomanip>

// charset utf-8

int main() {
  std::cout << "Введите количество фунтов: ";
  float funt;
  std::cin >> funt;
  std::cout << "Введите количество шиллингов: ";
  float shilling;
  std::cin >> shilling;
  std::cout << "Введите количество пенсов: ";
  float pence;
  std::cin >> pence;

  float newMoney;
  newMoney += ((funt * 20 + shilling) * 12 + pence) / 240;
  std::cout << std::setprecision(3);
  std::cout << "Десятичных фунтов: " << "\u00A3 " << newMoney;

  return 0;
}
