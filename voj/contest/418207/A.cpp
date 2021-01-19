#include <iostream>


int s2AN (int num, int base) {
	int sum = 0;
	while (num > 0) {
		sum += num % base;
		num /= base;
	}
	return sum;
}

int main () {

	for (int a = 2992; a < 10000; a++) {
		if (s2AN (a, 12) == s2AN (a, 10) && s2AN (a, 16) == s2AN (a, 10)) {
			std::cout << a << std::endl;
		}
	}

	return 0;
}