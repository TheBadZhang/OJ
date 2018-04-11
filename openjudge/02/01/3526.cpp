#include <iostream>
int gcd (int a, int b) {
	// 最大公倍数
	return b == 0 ? a : gcd (b, a%b);
}

int main () {

	int n, count = 0;
	int list [600] = {0};

	std::cin >> n;
	for (int a = 0; a < n; a += 1)
		std::cin >> list [a];

	for (int a = 0; a < n; a += 1) {
		for (int b = 0; b < n; b += 1) {
			if (gcd (list [a], list [b]) == 1)
			// 当他们的最大公因数为 1 时，
			// 他们即为互质数（不能约分）
				count ++;
		}
	}

	std::cout << count/2;
	// 分子分母位置互换也算一种

	return 0;
}