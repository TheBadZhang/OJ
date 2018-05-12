#include <iostream>

int main () {

	int a, b, day;
	std::cin >> b;

	for (int c = 0; c < b; c += 1) {
		day = day * a;
		if (day > 7) {
			day %= 7;
		}
	}
	std::cout << day;




	return 0;
}