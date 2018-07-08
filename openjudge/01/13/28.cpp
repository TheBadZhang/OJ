#include <iostream>


int main () {


	int l [110] {0};
	int n, max = 0, maxn = -100;
	std::cin >> n;
	for (int a = 0 ;a < n; a += 1) {
		int b;
		std::cin >> b;
		l [b+50] ++;
		if (l [b+50] > max) {
				max = l [b+50];
				maxn = b;
		}
	}

	if (max > n/2.0)
		std::cout << maxn;
	else std::cout << "no";

	return 0;

}
