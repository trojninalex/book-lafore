#include <iomanip>
#include <iostream>
#include <locale>

struct number {
  int city;
  int station;
  int subscriber;
};

int main() {
  std::locale::global(std::locale("ru_RU.UTF-8"));

  number you, my = { 900, 555, 2222};
  std::wcout << L"Введите код города, номер станции иномер абонента: ";
  std::cin >> you.city >> you.station >> you.subscriber;
  if (you.city > 1000 || you.station > 1000 || you.subscriber > 10000) {
    std::wcout << L"Неправильно введен номер телефона." << std::endl;
  } else {
    std::wcout << L"Мой номер (" << my.city << ") " << my.station \
	       << '-' << my.subscriber << std::endl;
    std::wcout << L"Ваш номер (" << you.city << ") " << you.station \
	       << '-' << you.subscriber << std::endl;
  }

  return 0;
}
