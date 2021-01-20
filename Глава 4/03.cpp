#include <iomanip>
#include <iostream>
#include <locale>

struct Distance {
  int feet;
  float inches;
};

struct Volume {
  Distance length;
  Distance width;
  Distance height;
};

int main() {
  std::locale::global(std::locale("ru_RU.UTF-8"));

  Volume volume;
  std::wcout << L"Введите длину." << std::endl;
  std::wcout << L"Футы: ";  
  std::cin >> volume.length.feet;
  std::wcout << L"Дюймы: ";
  std::cin >> volume.length.inches;
  
  std::wcout << L"Введите ширину." << std::endl;
  std::wcout << L"Футы: ";  
  std::cin >> volume.width.feet;
  std::wcout << L"Дюймы: ";
  std::cin >> volume.width.inches;
  
  std::wcout << L"Введите высоту." << std::endl;
  std::wcout << L"Футы: ";  
  std::cin >> volume.height.feet;
  std::wcout << L"Дюймы: ";
  std::cin >> volume.height.inches;

  float l = volume.length.feet + volume.length.inches/12;
  float w = volume.width.feet + volume.width.inches/12;
  float h = volume.height.feet + volume.height.inches/12;

  std::wcout << L"Объес равен " << l*w*h << L" квадратных футов." << std::endl;
  return 0;
}
