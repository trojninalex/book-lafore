#include <iomanip>
#include <iostream>
#include <locale>

void reversit(char *str, size_t length) {
	length--;
	char tmp;
	for (int i = 0; i <= length/2; i++) {
		tmp = str[i];
		str[i] = str[length - 1 - i];
		str[length - 1 - i] = tmp;
	}
}

int main() {
	std::locale::global(std::locale("ru_RU.UTF-8"));
	char str[] = "!dloW, olleH";
	reversit(str, sizeof(str));
	std::wcout << str << std::endl;

	return 0;
}
