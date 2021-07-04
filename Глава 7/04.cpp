#include <iomanip>
#include <iostream>
#include <locale>

#define MAX 10

int maxint(int *array, size_t length) {
  int iMax = 0;

  for (size_t i = 1; i < length; i++) {
    if (array[i] > array[iMax]) {
      iMax = i;
    }
  }

  return iMax;
}

int main() {
  std::locale::global(std::locale("ru_RU.UTF-8"));

  int number[MAX];

  for (size_t i = 0; i < MAX; i++) {
    std::wcout << L"Индекс " << i+1 << L". Введите число: ";
    std::cin >> number[i];
  }

  int max = maxint(number, MAX);
  std::wcout << L"Наибольшее число " << number[max] << L" находится по индексу: " << max+1 << std::endl;

  return 0;
}
