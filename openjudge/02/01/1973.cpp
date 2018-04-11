#include <iostream>
#include <cmath>

int N2D (int num, int n) {

	int result = 0, a = 0, t;
	while (num > 0) {
		t = num%10;
		if (t >= n) {
			return -1;
			// B 进制数中不能存在大于 B 的数
		}
		result += t * pow (n, a);
		a += 1;
		num /= 10;
	}

	return result;
}


int main () {


	int p, q, r;
	std::cin >> p >> q >> r;
	
	for (int a = 0; a < 36; a += 1) {
		if (N2D (p, a) * N2D (q, a) == N2D (r, a)) {
			std::cout << a;
			return 0;
		}
	}
	std::cout << 0;






	return 0;
}