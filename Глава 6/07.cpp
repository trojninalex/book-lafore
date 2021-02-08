#include <iomanip>
#include <iostream>
#include <locale>

class Angle {
private:
  int degress;
  float minutes;
  char direction;
public:
  Angle(int d, float m, char dr) : degress(d), minutes(m), direction(dr) {}
  void show() const {
    std::wcout << degress << L'\u00B0' << minutes << '\'' << ' ' << direction << std::endl;
  }

  void setDegress(int d) { degress = d; }
  void setMinutes(float m) { minutes = m; }
  void setDirection(char d) { direction = d; };
};

int main() {
  std::locale::global(std::locale("ru_RU.UTF-8"));

  Angle angle(179, 15, 'E');
  std::wcout << L"Координаты: ";
  angle.show();

  int d;
  float m;
  char dr;

  char tmp;
  
  do {
    std::wcout << L"Укажите градусы: ";
    std::cin >> d;
    angle.setDegress(d);

    std::wcout << L"Укажите минуты: ";
    std::cin >> m;
    angle.setMinutes(m);

    std::wcout << L"Укажите направление (NSEW): ";
    std::cin >> dr;
    angle.setDirection(dr);

    angle.show();

    do {
      std::wcout << L"Желаете повторить (y,n)?: ";
      std::cin >> tmp;
    } while (tmp != 'y' && tmp != 'n');

  } while (tmp != 'n');


  return 0;
}
