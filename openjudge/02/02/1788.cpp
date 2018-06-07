#include <iostream>

int main () {

	int l [1000000] = {0};
	l [1] = 1;
	l [2] = 2;
	for (int a = 3; a < 1000000; a += 1) {
		l [a] = (2 * l [a-1] + l [a-2]) % 32767;
		// 此处必须直接 模 32767，否则只有五分
		// 本来我是 模 100000 的，结果理应更准确，但只有五分
		// printf ("%8d", l [a]);
		// if (a == 20) printf ("\n");
	}

	int n;
	std::cin >> n;
	for (int a = 0; a < n; a += 1) {
		int b;
		std::cin >> b;
		std::cout << l [b] << std::endl;
	}



	return 0;
}