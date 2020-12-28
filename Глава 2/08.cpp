#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  long pop1 = 8425785, pop2 = 47, pop3 = 9761;

  wcout << setfill(L'.') << endl;
  wcout << setw(9) << L"Город" << setw(12) << L"Население" << endl;
  wcout << setw(9) << L"Москва" << setw(12) << pop1 << endl;
  wcout << setw(9) << L"Киров" << setw(12) << pop2 << endl;
  wcout << setw(9) << L"Угрюмовка" << setw(12) << pop3 << endl;

  return 0;
}
