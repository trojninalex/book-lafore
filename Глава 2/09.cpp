#include <iostream>

using namespace std;

int main() {
  cout << "Введите первую дробь: ";
  int a, b;
  char dummychar;
  cin >> a >> dummychar >> b;

  cout << "Введите вторую дробь: ";
  int c, d;
  cin >> c >> dummychar >> d;

  cout << "Сумма равна: " << (a*d + b*c) << '/' << b*d << endl;

  return 0;
}
