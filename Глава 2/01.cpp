#include <iostream>

using namespace std;

int main() {
  const float gallon = 7.481;
  float input, fut = 0;

  cout << "Введите число галлонов: ";
  cin >> input;

  fut = input / gallon;
  cout << "Колличество " << input << " галлонов эквивалентно " << fut << " футов." << endl;

  return 0;
}
