#include <iomanip>
#include <iostream>
#include <locale>

struct Volume {
  float;
  float;
  float;
};

int main() {
  std::locale::global(std::locale("ru_RU.UTF-8"));

  Volume volume;
  
  return 0;
}
