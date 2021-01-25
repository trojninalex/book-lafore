#include <iomanip>
#include <iostream>
#include <locale>

struct Sterling {
  int pounds;
  int shillings;
  int pence;
};

Sterling func1();
Sterling func2(Sterling s1, Sterling s2);
void func3(Sterling tmp);

int main() {
  std::locale::global(std::locale("ru_RU.UTF-8"));

  Sterling s1, s2, s3;
  char tmp;
  
  do {
    s1 = func1();
    s2 = func1();
    s3 = func2(s1, s2);
    func3(s3);
    do {
      std::wcout << L"Продолжить (y/n)? ";
      std::cin >> tmp;
      if (tmp != 'y' && tmp != 'n') {
	std::wcout << L"Неправильный ввод." << std::endl;
      }
    } while (tmp != 'y' && tmp != 'n');
  } while (tmp == 'y');

  return 0;
}

Sterling func1() {
  Sterling sterling;
  char ch;
  
  std::wcout << L"Введите сумму: \u00A3 ";
  std::cin >> sterling.pounds >> ch >> sterling.shillings >> ch \
	   >> sterling.pence;
  return sterling;
}

Sterling func2(Sterling s1, Sterling s2) {
  Sterling tmp = {0, 0, 0};

  tmp.pence = s1.pence + s2.pence;
  if (tmp.pence >= 12) {
    tmp.shillings = tmp.pence / 12;
    tmp.pence %= 12;
  }
  tmp.shillings += s1.shillings + s2.shillings;
  if (tmp.shillings >= 20) {
    tmp.pounds = tmp.shillings / 20;
    tmp.shillings %= 20;
  }
  tmp.pounds += s1.pounds + s2.pounds;

  return tmp;
}

void func3(Sterling tmp) {
  std::wcout << L"Сумма равна: \u00A3 " << tmp.pounds << '.' \
	     << tmp.shillings << '.' << tmp.pence << '.' << std::endl;
}
