#include <iostream>
#include <cmath>

bool
isprime (int x) {
	int sx = sqrt (x);
	for (int a = 2; a <= sx; a ++) {
		if (x % a == 0) return false;
	}
	return true;
}

int main () {

	int x, y, c = 0;
	std::cin >> x >> y;
	if (x > y) {
		// 有两个测试点的数据 x > y 
		// 注意交换数据
		c = x;
		x = y;
		y = c;
		c = 0;
	}
	for (int a = x; a <= y ; a += 1) {
		if (a == 1) {
			continue;
		} else {
			if (isprime (a))
				c += 1;
		}
	}

	std::cout << c;

	return 0;
}