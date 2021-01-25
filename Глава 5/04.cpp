#include <iomanip>
#include <iostream>
#include <locale>

struct Distance
{
  int feet;
  float inches;
};

Distance bigDistance(Distance d1, Distance d2);

int main() {
  std::locale::global(std::locale("ru_RU.UTF-8"));

  Distance d1, d2;
  std::wcout << L"Дистанция 1." << std::endl;
  std::wcout << L"Футы: ";
  std::cin >> d1.feet;
  std::wcout << L"Дюймы: ";
  std::cin >> d1.inches;

  std::wcout << L"Дистанция 2." << std::endl;
  std::wcout << L"Футы: ";
  std::cin >> d2.feet;
  std::wcout << L"Дюймы: ";
  std::cin >> d2.inches;

  Distance d3 = bigDistance(d1, d2);
  std::wcout << L"Наибольшая дистанция: " << std::endl;
  std::wcout << L"Футы: " << d3.feet << std::endl;
  std::wcout << L"Дюймы: " << d3.inches << std::endl;
  return 0;
}

Distance bigDistance(Distance d1, Distance d2) {
  float a = d1.feet * 12 + d1.inches;
  float b = d2.feet * 12 + d2.inches;

  if (a > b) {
    return d1;
  } else {
    return d2;
  }
}
