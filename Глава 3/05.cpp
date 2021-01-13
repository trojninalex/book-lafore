#include <iostream>
#include <iomanip>
#include <locale>

int main() {
  std::locale::global(std::locale("ru_RU.UTF-8"));

  for (int i = 0; i < 20; i++) {
    for (int j = 0; j < 40; j++) {
      if (j < (40/2-i) || j > (40/2+i)) {
	std::cout << ' ';
      } else {
	std::cout << 'X';
      }
    }
    std::cout << std::endl;
  }

  return 0;
}
