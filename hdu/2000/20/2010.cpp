#include <iostream>
#include <cmath>

int main () {

	/*
	for (int i = 100; i < 1000; i ++) {
		if (i==pow(i/100,3)+pow(i/10%10,3)+pow(i%10,3)) {
			std::cout << i << std::endl;
		}
	}
	*/
	int a [] = { 153, 370, 371, 407 };
	bool flag = true, flag2 = false;
	int m, n;
	while (std::cin >> m >> n) {
		flag = true;
		flag2 = false;
		for (int i = 0; i < 4; i++) {
			if (a [i] >= m && a[i] <= n) {
				if (flag2) std::cout << " ";
				std::cout << a[i];
				flag2 = true;
				flag = false;
			}
		}
		if (flag) std::cout << "no";
		std::cout << std::endl;
	}

	return 0;
}