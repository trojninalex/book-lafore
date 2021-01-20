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

  Time time;
  char ch;
  std::wcout << L"Введите время (ч:м:с:): ";
  std::cin >> time.hours >> ch >> time.minutes >> ch >> time.seconds;
  
  long totalsecs = time.hours*3600 + time.minutes*60 + time.seconds;

  std::wcout << L"В указанном времени " << totalsecs << L" секунд." \
	     << std::endl;
  
  return 0;
}
