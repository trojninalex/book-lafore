#include <iomanip>
#include <iostream>
#include <locale>

struct Fraction {
  int a;
  int b;
};

Fraction fadd(Fraction a, Fraction b);
Fraction fsub(Fraction a, Fraction b);
Fraction fmul(Fraction a, Fraction b);
Fraction fdiv(Fraction a, Fraction b);

int main() {
  std::locale::global(std::locale("ru_RU.UTF-8"));

  Fraction first, second, answer;
  char operand, ch;
  
  do {
    std::wcout << L"Введите первый операнд: ";
    std::cin >> first.a >> ch >> first.b;
    std::wcout << L"Введите операцию: ";
    std::cin >> operand;
    std::wcout << L"Введите второй операнд: ";
    std::cin >> second.a >> ch >> second.b;

    switch (operand) {
    case '+':
      answer = fadd(first, second);
      break;
    case '-':
      answer = fsub(first, second);
      break;
    case '*':
      answer = fmul(first, second);
      break;
    case '/':
      answer = fdiv(first, second);
      break;
    default:
      std::wcout << L"Неправильная операция." << std::endl;
      break;
    }

    std::wcout << L"Результат равен: " << answer.a << '/' << answer.b \
	       << std::endl;
    do {
      std::wcout << L"Выполнить еще одну операцию?(y/n) ";
      std::cin >> ch;;
      if (ch != 'y' && ch != 'n')
	std::wcout << L"Неправильный ответ." << std::endl;
    } while (ch != 'y' && ch != 'n');

  } while (ch == 'y');
  
  return 0;
}

Fraction fadd(Fraction first, Fraction second) {
  Fraction answer;
  answer.a = (first.a * second.b) + (first.b * second.a);
  answer.b = first.b * second.b;
  return answer;
}

Fraction fsub(Fraction first, Fraction second) {
  Fraction answer;
  answer.a = (first.a * second.b) - (first.b * second.a);
  answer.b = first.b * second.b;
  return answer;
}

Fraction fmul(Fraction first, Fraction second) {
  Fraction answer;
  answer.a = first.a * second.a;
  answer.b = first.b * second.b;
  return answer;
}

Fraction fdiv(Fraction first, Fraction second) {
  Fraction answer;
  answer.a = first.a * second.b;
  answer.b = first.b * second.a;
  return answer;
}
