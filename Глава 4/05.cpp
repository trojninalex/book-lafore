#include <iomanip>
#include <iostream>
#include <locale>

struct Date {
  int day;
  int month;
  int year;
};

int main() {
  std::locale::global(std::locale("ru_RU.UTF-8"));

  Date date;
  char ch;
  std::wcout << L"Введите дату, месяц и год (Д/М/Г): ";
  std::cin >> date.day >> ch >> date.month >> ch >> date.year;

  if (ch != '/' || date.month > 12 || date.month < 1) {
    std::wcout << L"Неправильно указана дата." << std::endl;
    return 0;
  } else if (date.month == 2 && date.day > 29) {
    std::wcout << L"Неправильно указана дата." << std::endl;
    return 0;
  } else if (date.month & 1 && date.day > 31 || date.year < 2000) {
    std::wcout << L"Неправильно указана дата." << std::endl;
    return 0;
  } else if (!(date.month & 1) && date.day > 30 || date.day < 1){ 
    std::wcout << L"Неправильно указана дата." << std::endl;
    return 0;
  } else {
    std::wcout << L"Дата: " << date.day << '/' << date.month << '/'	\
	       << date.year << std::endl;
  }
  
  return 0;
}
