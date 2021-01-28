#include <iomanip>
#include <iostream>
#include <locale>

class Int
{
private:
  int i;
public:
  Int() : i(0) {}
  Int(int a) : i(a) {}

  void set(int a) {
    i = a;
  }

  int get() const {
    return i;
  }

  void add(Int a, Int b) {
    i = b.get() + a.get();
  }

};

int main() {
  std::locale::global(std::locale("ru_RU.UTF-8"));
  Int a = 3, b = 5, c;

  std::wcout << L"a=" << a.get() << L"\nb=" << b.get() << L"\nc=" << c.get() << std::endl;
  c.add(a, b);
  std::wcout << L"\na=" << a.get() << L"\nb=" << b.get() << L"\nc=" << c.get() << std::endl;

  return 0;
}
