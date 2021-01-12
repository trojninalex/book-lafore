#include <iostream>
#include <iomanip>
#include <locale>

int main() {
  std::locale::global(std::locale("ru_RU.UTF-8"));
  std::wcout << L"Нажмите 1 для перевода шкалы Цельсия в шкалу Фаренгейта,\n";
  std::wcout << L"2 для перевода шкалы Фаренгейта в шкалу Цельсия: ";
  int bNum;
  std::cin >> bNum;
  if (std::cin.fail()) {
    std::cin.clear();
    std::cin.ignore(10, '\n');
  }

  float cel, far;
  if (bNum == 2) {
    std::wcout << L"Введите значение температуры по Цельсию: ";
    std::cin >> cel;
    far = cel * 1.8 + 32;
    std::wcout << L"Значение по Фаренгейту: " << far << std::endl;
  } else {
    std::wcout << L"Введите значение по Фаренгуйту: ";
    std::cin >> far;
    cel = (far - 32) / 1.8;
    std::wcout << L"Значение по Цельсию: " << cel << std::endl;
  }

  return 0;
}
