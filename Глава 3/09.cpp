#include <iomanip>
#include <iostream>
#include <locale>

int main() {
  std::locale::global(std::locale("ru_RU.UTF-8"));

  int stul, gosti;
  std::wcout << L"Введите число гостей: ";
  std::cin >> gosti;
  std::wcout << L"Введите число стульев: ";
  std::cin >> stul;
  if (stul > gosti) {
    std::wcout << L"Стульев не может быть больше гостей." << std::endl;
    return 0;
  }

  int answer = 1;
  for (; stul; stul--) {
    answer *= gosti;
    gosti--;
  }

  std::wcout << L"Число возможных рассадок равна: " << answer << std::endl;

  return 0;
}
