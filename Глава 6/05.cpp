#include <iomanip>
#include <iostream>
#include <locale>

class Date {
private:
  int day;
  int month;
  int year;
public:
  void getdate(int d, int m, int y, char ch) {
    if (ch != '/' || m > 12 || m < 1) {
      std::wcout << L"Неправильно указана дата." << std::endl;
    } else if (m == 2 && d > 29) {
      std::wcout << L"Неправильно указана дата." << std::endl;
    } else if (m & 1 && d > 31 || y < 2000) {
      std::wcout << L"Неправильно указана дата." << std::endl;
    } else if (!(m & 1) && d > 30 || d < 1){ 
      std::wcout << L"Неправильно указана дата." << std::endl;
    } else {
      day = d;
      month = m;
      year = y;
    }
  }

  void showdate() const {
    std::wcout << L"Дата: " << day << '/' << month << '/' << year << std::endl;
  }
};

int main() {
  std::locale::global(std::locale("ru_RU.UTF-8"));

  Date date;
  int d, m, y;
  char ch;
  
  std::wcout << L"Введите дату, месяц и год (Д/М/Г): ";
  std::cin >> d >> ch >> m >> ch >> y;

  date.getdate(d, m, y, ch);
  date.showdate();
  
  return 0;
}
