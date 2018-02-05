#include <iostream>

int main () {
	bool L [1E6] = {0};
	int n, m, a;
	std::cin >> n;
	for (a = 0; a < n; a ++) {
		std::cin >> m;
		L [m] = true;
	}
	for (a = 0; a < 1E6; a ++)
		if (L [a]) printf ("%d ", a);
	// 可以参考《编程珠玑》
}