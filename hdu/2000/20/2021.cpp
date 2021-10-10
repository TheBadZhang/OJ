#include <iostream>

#define cc(t) c+=x/t;x%=t;
int main () {
	int n, c, x;
	while (std::cin >> n && n) {
		c = 0;
		for (int i = 0; i < n; ++i) {
			std::cin >> x;
			cc (100);cc (50);cc (10);cc (5);cc (2);cc (1);
		}
		std::cout << c << std::endl;
	}
	return 0;
}