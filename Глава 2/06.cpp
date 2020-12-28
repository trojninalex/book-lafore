#include <iostream>

int main() {
  float funt = 1.487;
  float frank = 0.172;
  float mark = 0.584;
  float ien = 0.00955;
  float dollar;

  std::cout << "Введите колличество доллара для конвертирования в другие валюты: ";
  std::cin >> dollar;

  std::cout << "Фунт: " << dollar / funt << std::endl;
  std::cout << "Франк:" << dollar / frank << std::endl;
  std::cout << "Марка: " << dollar / mark << std::endl;
  std::cout << "Йена: " << dollar / ien << std::endl;
  
  return 0;
}
