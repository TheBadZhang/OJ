#include <iostream>

int f(char ch) {
	if (ch >= 'A' && ch <= 'Z') {
		return ch - 'A' + 1;
	} else {
		return -(ch - 'A' - 32 + 1);
	}
}

int main () {

	int n, y;
	char ch;
	std::cin >> n;
	while (n--) {
		std::cin >> ch >> y;
		std::cout << f(ch) + y << std::endl;
	}
	return 0;
}