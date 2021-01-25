#include <iomanip>
#include <iostream>
#include <locale>

struct Time {
  int hours;
  int minutes;
  int seconds;
};

long time_to_secs(Time t);
Time secs_to_time(long seconds);

int main() {
  std::locale::global(std::locale("ru_RU.UTF-8"));
  
  Time time, t1, t2;
  char ch;
  std::wcout << L"Введите первое время (ч:м:с:): ";
  std::cin >> t1.hours >> ch >> t1.minutes >> ch >> t1.seconds;
  
  long totalsecs1 = time_to_secs(t1);

  std::wcout << L"Введите второе время (ч:м:с:): ";
  std::cin >> t2.hours >> ch >> t2.minutes >> ch >> t2.seconds;
  
  long totalsecs2 = time_to_secs(t2);
  long totalsecs = totalsecs1 + totalsecs2;

  time = secs_to_time(totalsecs);
  
  std::wcout << L"Сумма времени составляет: " << time.hours << ':'	\
	     << time.minutes << ':' << time.seconds << std::endl;
  
  return 0;
}

long time_to_secs(Time t) {
  return t.hours * 3600 + t.minutes * 60 + t.seconds;
}

Time secs_to_time(long seconds) {
  Time t;
  t.seconds = seconds % 60;
  t.minutes = seconds / 60;
  t.hours = t.minutes / 60;
  t.minutes %= 60;

  return t;
}
