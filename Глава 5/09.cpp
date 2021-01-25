#include <iomanip>
#include <iostream>
#include <locale>

struct Time {
  int hours;
  int minutes;
  int seconds;
};

void swap(Time &a, Time &b);

int main() {
  std::locale::global(std::locale("ru_RU.UTF-8"));

  Time t1, t2;
  char ch;
  std::wcout << L"Введите первое время (ч:м:с:): ";
  std::cin >> t1.hours >> ch >> t1.minutes >> ch >> t1.seconds;
  
  std::wcout << L"Введите второе время (ч:м:с:): ";
  std::cin >> t2.hours >> ch >> t2.minutes >> ch >> t2.seconds;

  swap(t1, t2);

  std::wcout << L"Первое время: " << t1.hours << ':' << t1.minutes << ':' \
	     << t1.seconds << '.' << std::endl;
  
  std::wcout << L"Второе время: " << t2.hours << ':' << t2.minutes << ':' \
	     << t2.seconds << '.' << std::endl;
  
  return 0;
}

void swap(Time &a, Time &b) {
  a.hours += b.hours;
  b.hours = a.hours - b.hours;
  a.hours -= b.hours;

  a.minutes += b.minutes;
  b.minutes = a.minutes - b.minutes;
  a.minutes -= b.minutes;

  a.seconds += b.seconds;
  b.seconds = a.seconds - b.seconds;
  a.seconds -= b.seconds;
}
