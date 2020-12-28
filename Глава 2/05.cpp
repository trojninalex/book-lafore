#include <ctype.h>
#include <iostream>

int main() {
  char ch;
  std::cout << "Ввести букву: ";
  std::cin >> ch;

  std::cout << "0 = буква заглавная.\n0 != буква строчная.\n";
  std::cout << "Буква: " << islower(ch) << std::endl;
  
  return 0;
}
