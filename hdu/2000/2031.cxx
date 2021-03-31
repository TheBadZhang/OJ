#include <iostream>

int main () {

	int n, base, i;
	bool minus;
	char number[] = "0123456789ABCDEF";
	while (std::cin >> n >> base) {
		char numbers [100] = { 0 };
		i = 0;
		minus = false;
		if (n < 0) {
			minus = true;
			n = -n;
		}
		while (n > 0) {
			numbers [i++] = n%base;
			n /= base;
		}
		if (minus) {
			printf ("-");
		}
		for (int j = i-1; j >= 0; j--) {
			printf ("%c", number[numbers[j]]);
		}
		printf ("\n");
	}




	return 0;
}