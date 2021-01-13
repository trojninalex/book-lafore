#include <iostream>
#include <iomanip>
#include <locale>

int main() {
  std::locale::global(std::locale("ru_RU.UTF-8"));

  float first, second, answer;
  char operand, ch;
  
  do {
    std::wcout << L"Введите первый операнд, операцию и второй операнд: ";
    std::cin >> first >> operand >> second;
    switch (operand) {
    case '+':
      answer = first + second;
      break;
    case '-':
      answer = first - second;
      break;
    case '*':
      answer = first * second;
      break;
    case '/':
      answer = first / second;
      break;
    default:
      break;
    }

    std::wcout << L"Результат равен: " << answer << std::endl;
    do {
      std::wcout << L"Выполнить еще одну операцию?(y/n) ";
      std::cin >> ch;;
      if (ch != 'y' && ch != 'n')
	std::wcout << L"Неправильный ответ." << std::endl;
    } while (ch != 'y' && ch != 'n');

  } while (ch == 'y');

  return 0;
}
