#include <iostream>
#include <cmath>


int main () {

	int n, r = 0;
	// r 存储结果；
	std::cin >> n;
	for (--n; n >= 0; n --) {
		r += 9 * pow(10, n/2);
	}
	// 结果呈现一种神奇的规律
	// n = 1: 9 = 0 + 9，
	// n = 2: 18 = 9 + 9，
	// n = 3: 108 = 18 + 90，
	// n = 4: 198 = 108 + 90，
	// n = 5: 1098 = 198 + 900，
	// ……
	std::cout << r;

	return 0;
}