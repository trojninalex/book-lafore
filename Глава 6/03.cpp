#include <iomanip>
#include <iostream>
#include <locale>

class Time {
private:
  int hourse;
  int minutes;
  int seconds;
public:
  Time(int a, int b, int c) : hourse(a), minutes(b), seconds(c) {}
  Time() : hourse(0), minutes(0), seconds(0) {}
  
  void display() const {
    std::wcout << std::setfill(L'0') << std::setw(2) << hourse << ':' \
	       << std::setw(2) << minutes << ':' << std::setw(2) \
	       << seconds << std::endl;
  }

  Time add(const Time t1) {
    Time tmp;
    tmp.seconds = t1.seconds + seconds;
    if (tmp.seconds >= 60) {
      tmp.minutes = tmp.seconds / 60;
      tmp.seconds %= 60;
    }

    tmp.minutes += t1.minutes + minutes;
    if (tmp.minutes >= 60) {
      tmp.hourse = tmp.minutes / 60;
      tmp.minutes %= 60;
    }

    tmp.hourse += t1.hourse + hourse;
    
    return tmp;
  }
};

int main() {
  std::locale::global(std::locale("ru_RU.UTF-8"));

  Time t1(1, 53, 56), t2(12, 6, 4);
  Time t3;

  t3 = t1.add(t2);
  t3.display();
  
  return 0;
}
