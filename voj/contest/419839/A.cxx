#include <iostream>
// #include <array>
#include <algorithm>


int main () {
	int i, count, n;
	// std::array <int, 15> lists {0};
	int lists[15] = {0};
	bool flag = true;
	while (flag) {
		i = 0;
		count = 0;
		while (std::cin >> n) {
			if (n == 0) break;
			else if (n == -1) {
				flag = false;
			} else {
				lists [i++] = n;
			}
		}
		if (flag) {
			// std::sort (lists.begin(), lists.begin()+i);
			std::sort (lists, lists+i);
			for (int a = 0; a < i; ++a) {
				for (int b = a+1; b < i; ++b) {
					if (lists[b] == 2*lists[a]) {
						++ count;
					}
				}
			}
			std::cout << count << std::endl;
		}
	}
	return 0;
}