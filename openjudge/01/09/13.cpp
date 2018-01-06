#include <iostream>

int main () {
	
	bool list [100] = {0}, flag = false;
	int n, a;
	std::cin >> n;
	for (; n > 0; n -= 1) {
		std::cin >> a;
		if (!list [a]) {
			if (flag) std::cout << " ";
			std::cout << a;
			flag = true;
			list [a] = true;
		}
	}


	return 0;
}