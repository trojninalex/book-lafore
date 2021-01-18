#include <iomanip>
#include <iostream>
#include <locale>

struct point {
  int x;
  int y;
};

int main() {
  std::locale::global(std::locale("ru_RU.UTF-8"));

  point p1, p2, p3;


  std::wcout << L"Введите координаты точки p1: ";
  std::cin >> p1.x >> p1.y;
  std::wcout << L"Введите координаты точки p2: ";
  std::cin >> p2.x >> p2.y;
  p3.x = p1.x+p2.x;
  p3.y = p1.y+p2.y;
  std::wcout << L"Координаты точки p1+p2 равны " << p3.x \
	     << ' ' << p3.y << std::endl;
  
  return 0;
}
