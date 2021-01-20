#include <iomanip>
#include <iostream>
#include <locale>

struct Time {
  int hours;
  int minutes;
  int seconds;
};

int main() {
  std::locale::global(std::locale("ru_RU.UTF-8"));
  
  Time time, t1, t2;
  char ch;
  std::wcout << L"Введите первое время (ч:м:с:): ";
  std::cin >> t1.hours >> ch >> t1.minutes >> ch >> t1.seconds;
  
  long totalsecs1 = t1.hours*3600 + t1.minutes*60 + t1.seconds;

  std::wcout << L"Введите второе время (ч:м:с:): ";
  std::cin >> t2.hours >> ch >> t2.minutes >> ch >> t2.seconds;
  
  long totalsecs2 = t2.hours*3600 + t2.minutes*60 + t2.seconds;
  long totalsecs = totalsecs1 + totalsecs2;

  time.seconds = totalsecs % 60;
  time.minutes = totalsecs / 60;
  time.hours = time.minutes / 60;
  time.minutes %= 60;
  
  std::wcout << L"Сумма времени составляет: " << time.hours << ':'	\
	     << time.minutes << ':' << time.seconds << std::endl;
  
  
  return 0;
}
