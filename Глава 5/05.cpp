#include <iomanip>
#include <iostream>
#include <locale>

long hms_to_secs(int hours, int minutes, int seconds);

int main() {
  std::locale::global(std::locale("ru_RU.UTF-8"));

  int h, m, s;
  char ch;
  do {
    std::wcout << L"Введите время." << std::endl;
    std::wcout << L"Часы: ";
    std::cin >> h;
    std::wcout << L"Минуты: ";
    std::cin >> m;
    std::wcout << L"Секунды: ";
    std::cin >> s;

    std::wcout << L"Указанное время равно " << hms_to_secs(h, m, s) \
	       << " секунд." << std::endl;
    
    std::wcout << L"Хотите повторить (y/n)? ";

    do {
      std::cin >> ch;
      if (ch != 'y' && ch !='n') {
	std::wcout << L"Введите y для продолжения или n для завершения: ";
      }
    } while (ch != 'y' && ch != 'n');
  } while (ch == 'y');
  
  return 0;
}

long hms_to_secs(int hours, int minutes, int seconds) {
  return hours * 3600 + minutes * 60 + seconds;
}
