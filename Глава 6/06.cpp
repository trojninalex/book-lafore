#include <iomanip>
#include <iostream>
#include <locale>


class Date {
private:
  int day;
  int month;
  int year;
public:
  void getDate(int d, int m, int y, char ch) {
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

  void showDate() const {
    std::wcout << L"Дата: " << day << '/' << month << '/' << year << std::endl;
  }
};

class employee {
private:
  enum etype {laborer, secretary, manager, accountant, executice, researcher };

  
  int numb;
  float allowance;

  Date date;
  
  etype type;

  void getEmploy() {
    std::wcout << L"Введите первую букву должности (laborer, secretary, " \
	       << L"manager, accountant, executive, researcher): ";
    char ch;
    std::cin >> ch;

    switch (ch) {
    case 'l':
      type = laborer;
      break;
    case 's':
      type = secretary;
      break;
    case 'm':
      type = manager;
      break;
    case 'a':
      type = accountant;
      break;
    case 'e':
      type = executice;
      break;
    case 'r':
      type = researcher;
      break;
    default: break;
    }
  }

  void putEmploy() {  std::wcout << L"Полное название должности: ";
    switch (type) {
    case laborer:
      std::wcout << L"laborer." << std::endl;
      break;
    case secretary:
      std::wcout << L"secretary." << std::endl;
      break;
    case manager:
      std::wcout << L"manager." << std::endl;
      break;
    case accountant:
      std::wcout << L"accountant." << std::endl;
      break;
    case executice:
      std::wcout << L"executice." << std::endl;
      break;
    case researcher:
      std::wcout << L"researcher." << std::endl;
      break;
    default:
      std::wcout << L"Нет такой професии." << std::endl;
      break;
    }
  }
  
public:
  void set() {
    std::wcout << L"Введите номер сотрудника: ";
    std::cin >> numb;
    std::wcout << L"Введите размер пособия: ";
    std::cin >> allowance;

    int d, m, y;
    char ch;
  
    std::wcout << L"Введите дату, месяц и год (Д/М/Г): ";
    std::cin >> d >> ch >> m >> ch >> y;

    date.getDate(d, m, y, ch);
    getEmploy();
  }

  void display() {
    std::wcout << L"Сотрудник по номеру: " << numb		   \
	       << L" имеет размер пособия " << allowance << "$."	\
	       << std::endl;
    date.showDate();
    putEmploy();
  }
};

int main() {
  std::locale::global(std::locale("ru_RU.UTF-8"));

  employee one, two, three;

  one.set();
  two.set();
  three.set();
  
  one.display();
  two.display();
  three.display();
  
  return 0;
}
