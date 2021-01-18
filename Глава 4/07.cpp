/*
 * Программа слеплена из кусков заданий 4, 5 и 6
 */

#include <iomanip>
#include <iostream>
#include <locale>

enum etype {laborer, secretary, manager, accountant, executice, researcher };

struct Date {
  int day;
  int month;
  int year;
};

struct employee {
  int numb;
  float allowance;
  etype type;
  Date date;
};


int main() {
  std::locale::global(std::locale("ru_RU.UTF-8"));

  employee one, two, three;
  std::wcout << L"Введите номер первого сотрудника: ";
  std::cin >> one.numb;
  std::wcout << L"Введите размер зарплаты сотрудника: ";
  std::cin >> one.allowance;

  std::wcout << L"Введите первую букву должности (laborer, secretary, " \
	     << L"manager, accountant, executive, researcher): ";
  char ch;
  std::cin >> ch;

  etype type;
  switch (ch) {
  case 'l':
    one.type = laborer;
    break;
  case 's':
    one.type = secretary;
    break;
  case 'm':
    one.type = manager;
    break;
  case 'a':
    one.type = accountant;
    break;
  case 'e':
    one.type = executice;
    break;
  case 'r':
    one.type = researcher;
    break;
  default: break;
  }

  std::wcout << L"Введите дату, месяц и год (Д/М/Г): ";
  std::cin >> one.date.day >> ch >> one.date.month >> ch >> one.date.year;

  if (ch != '/' || one.date.month > 12 || one.date.month < 1) {
    std::wcout << L"Неправильно указана дата." << std::endl;
    return 0;
  } else if (one.date.month == 2 && one.date.day > 29) {
    std::wcout << L"Неправильно указана дата." << std::endl;
    return 0;
  } else if (one.date.month & 1 && one.date.day > 31 || one.date.year < 2000) {
    std::wcout << L"Неправильно указана дата." << std::endl;
    return 0;
  } else if (!(one.date.month & 1) && one.date.day > 30 || one.date.day < 1){ 
    std::wcout << L"Неправильно указана дата." << std::endl;
    return 0;
  }

  std::wcout << L"Введите номер второго сотрудника: ";
  std::cin >> two.numb;
  std::wcout << L"Введите размер зарплаты сотрудника: ";
  std::cin >> two.allowance;

  std::wcout << L"Введите первую букву должности (laborer, secretary, " \
	     << L"manager, accountant, executive, researcher): ";
  std::cin >> ch;

  switch (ch) {
  case 'l':
    two.type = laborer;
    break;
  case 's':
    two.type = secretary;
    break;
  case 'm':
    two.type = manager;
    break;
  case 'a':
    two.type = accountant;
    break;
  case 'e':
    two.type = executice;
    break;
  case 'r':
    two.type = researcher;
    break;
  default: break;
  }

  std::wcout << L"Введите дату, месяц и год (Д/М/Г): ";
  std::cin >> two.date.day >> ch >> two.date.month >> ch >> two.date.year;

  if (ch != '/' || two.date.month > 12 || two.date.month < 1) {
    std::wcout << L"Неправильно указана дата." << std::endl;
    return 0;
  } else if (two.date.month == 2 && two.date.day > 29) {
    std::wcout << L"Неправильно указана дата." << std::endl;
    return 0;
  } else if (two.date.month & 1 && two.date.day > 31 || two.date.year < 2000) {
    std::wcout << L"Неправильно указана дата." << std::endl;
    return 0;
  } else if (!(two.date.month & 1) && two.date.day > 30 || two.date.day < 1){ 
    std::wcout << L"Неправильно указана дата." << std::endl;
    return 0;
  }

  std::wcout << L"Введите номер третьего сотрудника: ";
  std::cin >> three.numb;
  std::wcout << L"Введите размер зарплаты сотрудника: ";
  std::cin >> three.allowance;

  std::wcout << L"Введите первую букву должности (laborer, secretary, " \
	     << L"manager, accountant, executive, researcher): ";
  std::cin >> ch;

  switch (ch) {
  case 'l':
    three.type = laborer;
    break;
  case 's':
    three.type = secretary;
    break;
  case 'm':
    three.type = manager;
    break;
  case 'a':
    three.type = accountant;
    break;
  case 'e':
    three.type = executice;
    break;
  case 'r':
    three.type = researcher;
    break;
  default: break;
  }

  std::wcout << L"Введите дату, месяц и год (Д/М/Г): ";
  std::cin >> three.date.day >> ch >> three.date.month >> ch >> three.date.year;

  if (ch != '/' || three.date.month > 12 || three.date.month < 1) {
    std::wcout << L"Неправильно указана дата." << std::endl;
    return 0;
  } else if (three.date.month == 2 && three.date.day > 29) {
    std::wcout << L"Неправильно указана дата." << std::endl;
    return 0;
  } else if (three.date.month & 1 && three.date.day > 31 || three.date.year < 2000) {
    std::wcout << L"Неправильно указана дата." << std::endl;
    return 0;
  } else if (!(three.date.month & 1) && three.date.day > 30 || three.date.day < 1){ 
    std::wcout << L"Неправильно указана дата." << std::endl;
    return 0;
  }

  std::wcout << L"Первый сотрудник: " << std::endl;
  std::wcout << L"Номер: " << one.numb << std::endl;
  std::wcout << L"Зарплата: " << one.allowance << std::endl;

  std::wcout << L"Должность: ";
  switch (one.type) {
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

  std::wcout << L"Дата: " << one.date.day << '/' << one.date.month << '/' \
	     << one.date.year << std::endl << std::endl;

  std::wcout << L"Второй сотрудник: " << std::endl;
  std::wcout << L"Номер: " << two.numb << std::endl;
  std::wcout << L"Зарплата: " << two.allowance << std::endl;

  std::wcout << L"Должность: ";
  switch (two.type) {
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

  std::wcout << L"Дата: " << two.date.day << '/' << two.date.month << '/' \
	     << two.date.year << std::endl << std::endl;

  std::wcout << L"Третий сотрудник: " << std::endl;
  std::wcout << L"Номер: " << three.numb << std::endl;
  std::wcout << L"Зарплата: " << three.allowance << std::endl;

  std::wcout << L"Должность: ";
  switch (three.type) {
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

  std::wcout << L"Дата: " << three.date.day << '/' << three.date.month << '/' \
	     << three.date.year << std::endl << std::endl;
  
  return 0;
}
