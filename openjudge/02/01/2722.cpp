#include <iostream>


int main () {

	int n, count = 0;
	// 忘了初始化导致一直 WA
	int list [110] = {0};
	bool l [10010] = {0};
	std::cin >> n;
	for (int a = 0; a < n; a += 1) {
		std::cin >> list [a];
	}

	for (int a = 0; a < n; a += 1) {
		for (int b = 0; b < n; b += 1) {
			for (int c = b+1; c < n; c += 1) {
				if (list [a] == list [b] + list [c]) {
					if (!l [list [a]]) {
						l [list [a]] = true;
						// 这两个检验数组下标我还设置错了
						count ++;
						b = n;
						c = n;
					}
				}
			}
		}
	}

	std::cout << count;





	return 0;
}