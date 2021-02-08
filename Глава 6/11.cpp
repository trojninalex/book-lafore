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
  void setA(int A) { a = A; }
  void setB(int B) { b = B; }
  int showA() const { return a; }
  int showB() const { return b; }
};

int main() {
  std::locale::global(std::locale("ru_RU.UTF-8"));

  int tmpA, tmpB;
  Fraction first, second, answer;
  char operand, ch;
  
  do {
    std::wcout << L"Введите первый операнд: ";
    std::cin >> tmpA >> ch >> tmpB;
    first.setA(tmpA);
    first.setB(tmpB);
    std::wcout << L"Введите операцию: ";
    std::cin >> operand;
    std::wcout << L"Введите второй операнд: ";
    std::cin >> tmpA >> ch >> tmpB;
    second.setA(tmpA);
    second.setB(tmpB);
    
    switch (operand) {
    case '+':
      answer.fadd(first, second);
      break;
    case '-':
      answer.fsub(first, second);
      break;
    case '*':
      answer.fmul(first, second);
      break;
    case '/':
      answer.fdiv(first, second);
      break;
    default:
      std::wcout << L"Неправильная операция." << std::endl;
      break;
    }

    std::wcout << L"Результат равен: " << answer.showA() << '/' << answer.showB() \
	       << std::endl;
    do {
      std::wcout << L"Выполнить еще одну операцию?(y/n) ";
      std::cin >> ch;
      if (ch != 'y' && ch != 'n')
	std::wcout << L"Неправильный ответ." << std::endl;
    } while (ch != 'y' && ch != 'n');

  } while (ch == 'y');
  
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
