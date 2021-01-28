#include <iomanip>
#include <iostream>
#include <locale>

#include "bookconsole.h"

class toolBooth {
private:
  unsigned int car;
  double  payment;
public:
  toolBooth() : car(0), payment(0) {}

  void payingCar() {
    car++;
    payment += 0.50;
  }

  void nopayCar() {
    car++;
  }

  void display() const {
    std::wcout << L"Машин проехало: " << car << L"\nОплачено: " << payment << L'\u0024' \
	       << std::endl;
  }
};

int main() {
  std::locale::global(std::locale("ru_RU.UTF-8"));

  toolBooth booth;
  char ch;
  do {
    std::wcout << L"Машина оплатила (y/n)? ";
    ch = getche();
    std::wcout << std::endl;
    if (ch == 'y') {
      booth.payingCar();
    } if (ch == 'n') {
      booth.nopayCar();
    }
  } while (ch != 27);

  booth.display();
  return 0;
}
      
