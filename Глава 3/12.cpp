#include <iomanip>
#include <iostream>
#include <locale>

int main() {
  std::locale::global(std::locale("ru_RU.UTF-8"));

  float firstA, firstB, secondA, secondB, answerA, answerB;
  char operand, ch;
  
  do {
    std::wcout << L"Введите первый операнд: ";
    std::cin >> firstA >> ch >> firstB;
    std::wcout << L"Введите операцию: ";
    std::cin >> operand;
    std::wcout << L"Введите второй операнд: ";
    std::cin >> secondA >> ch >> secondB;

    switch (operand) {
    case '+':
      answerA = (firstA * secondB) + (firstB * secondA);
      answerB = firstB * secondB;
      break;
    case '-':
      answerA = (firstA * secondB) - (firstB * secondA);
      answerB = firstB * secondB;
      break;
    case '*':
      answerA = firstA * secondA;
      answerB = firstB * secondB;
      break;
    case '/':
      answerA = firstA * secondB;
      answerB = firstB * secondA;
      break;
    default:
      std::wcout << L"Неправильная операция." << std::endl;
      break;
    }

    std::wcout << L"Результат равен: " << answerA << '/' << answerB \
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

