// 不需要高精，重复，不需要高精
// 题目里根本没有 99 这样的大的输入……

#include <iostream>

int main () {

	int list [100] = {0};
	list [0] = 1;
	list [1] = 2;
	list [2] = 4;
	for (int a = 3; a < 100; a += 1) {
		list [a] = list [a-1] + list [a - 2] + list [a - 3];
	}

	while (true) {
		int n;
		std::cin >> n;
		if (n == 0) return 0;
		else std::cout << list [n-1] << std::endl;
	}




	return 0;
}