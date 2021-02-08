#include <cmath>
#include <iomanip>
#include <iostream>
#include <locale>

class Fraction {
private:
  int a;
  int b;
public:
  void fadd(Fraction a, Fraction b);
  void fsub(Fraction a, Fraction b);
  void fmul(Fraction a, Fraction b);
  void fdiv(Fraction a, Fraction b);
  void lowterms();
  void set(int A, int B) { a = A; b = B; lowterms(); }
  void setA(int A) { a = A; }
  void setB(int B) { b = B; }
  void show() const { std::wcout << a << L'\\' << b; }
  int showA() const { return a; }
  int showB() const { return b; }
};

int main() {
  std::locale::global(std::locale("ru_RU.UTF-8"));

  int tmp;
  Fraction first, second, answer;
  char operand, ch;
  
  std::wcout << L"Введите знаменатель: ";
  std::cin >> tmp;

  std::wcout << "    ";

  for (int i = 1; i < tmp; i++) {
    first.set(i, tmp);
    std::wcout << std::setw(3);
    first.show();
    std::wcout << L' ';
  }
  std::wcout << std::endl;

  std::wcout << L"-------------------------------------------" << std::endl;
  
  for (int i = 1; i < tmp; i++) {
    first.set(i, tmp);
    first.show();
    std::wcout << L' ';
    for (int j = 1; j < tmp; j++) {
      second.set(j, tmp);
      answer.fmul(first, second);
      std::wcout << std::setw(3);
      answer.show();
    }
    std::wcout << std::endl;
  }
  
  return 0;
}

void Fraction::fadd(Fraction first, Fraction second) {
  a = (first.a * second.b) + (first.b * second.a);
  b = first.b * second.b;
  lowterms();
}

void Fraction::fsub(Fraction first, Fraction second) {
  a = (first.a * second.b) - (first.b * second.a);
  b = first.b * second.b;
  lowterms();
}

void Fraction::fmul(Fraction first, Fraction second) {
  a = first.a * second.a;
  b = first.b * second.b;
  lowterms();
}

void Fraction::fdiv(Fraction first, Fraction second) {
  a = first.a * second.b;
  b = first.b * second.a;
  lowterms();
}

void Fraction::lowterms() {
  long tnum, tden, temp, gcd;
  tnum = labs(a);
  tden = labs(b);

  if (tden == 0) {
    std::wcout << L"Недопустимый знаменатель!" << std::endl;
    exit(1);
  } else if (tnum == 0) {
    a = 0; b = 1;
    return;
  }

  while (tnum != 0) {
    if (tnum < tden) {
      temp = tnum;
      tnum = tden;
      tden = temp;
    }

    tnum -= tden;
  }

  gcd = tden;
  a = a / gcd;
  b = b / gcd;
}
