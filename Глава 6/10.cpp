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
  Angle() {}
  void set(int d, float m, char dr) { degress = d; minutes = m; direction = dr; }
  void show() const {
    std::wcout << degress << L'\u00B0' << minutes << '\'' << ' ' << direction << std::endl;
  }
};

class Ship {
private:
  static int n;
  int number;
  Angle coordinatesNS;
  Angle coordinatesEW;

public:
  Ship() { number = ++n; }
  void setCoordinates() {
    int d;
    float m;
    char dr;
    std::wcout << L"Укажите координаты корабля под номером" << number << "  NS: ";
    std::cin >> d >> m >> dr;
    coordinatesNS.set(d, m, dr);
    
    std::wcout << L"Укажите координаты корабля под номером " << number << " EW: ";
    std::cin >> d >> m >> dr;
    coordinatesEW.set(d, m, dr);
  }

  void show() const {
    std::wcout << L"Координаты коробля под номером " << number << ' ';
    coordinatesNS.show();					\
    std::wcout << ' ';
    coordinatesEW.show();
  }
};

int Ship::n = 0;

int main() {
  std::locale::global(std::locale("ru_RU.UTF-8"));

  Ship ship1, ship2, ship3;

  ship1.setCoordinates();
  ship2.setCoordinates();
  ship3.setCoordinates();
  ship1.show();
  ship2.show();
  ship3.show();
  
  return 0;
}

