#include <iostream>

int main () {

	int n;
	std::cin >> n;
	int max = 1;
	// 所以要将这里设为1
	int maxnum=-10086, num;
	int count;
	for (int a = 0; a < n; a += 1) {
		std::cin >> num;
		if (num != maxnum) {
			maxnum = num;
			count = 1;
			// 若数字只有一个则不会初始化max
		} else {
			count += 1;
			if (count > max) {
				// maxnum = num;
				max = count;
			}
		}
	}
	std::cout << max;

	return 0;
}