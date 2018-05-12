#include <iostream>
#include <cstdio>


int main () {

	char num [1000000] = {0};
	num [0] = 1;
	int n, e = 0;
	std::cin >> n;
	for (int a = 0; a < n; a += 1) {
		bool flag = false;
		for (int b = 0; b < e+1; b += 1) {

			num [b] *= 2;

			if (b == e && num [b] / 10 >= 1)
				flag = true;
		}
		for (int b = 0; b < e+1; b += 1) {
			num [b+1] += num [b] / 10;
			num [b] %= 10;
		}
		if (flag) e += 1;
	}
	num [0] -= 1;
	std::cout << e+1 << std::endl;
	for (int a = 499; a >= 0; a -= 1) {
		printf ("%d", num [a]);
		if (a % 50 == 0) {
			printf ("\n");
		}
	}








	return 0;
}