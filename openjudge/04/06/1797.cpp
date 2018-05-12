#include <iostream>
#include <cstdio>

struct T {
	int n;
	double v;
}t [100] = {0};

int main () {
	

	int k;
	std::cin >> k;

	for (int a = 0; a < k; a += 1) {

		int beg, w, c = 0;
		double money = 0.0;
		std::cin >> beg >> w;
		for (int b = 0; b < w; b += 1) {
			std::cin >> t [b].n >> t [b].v;
			t [b].v = t [b].v / (double)t [b].n;
		}
		// 数据输入
		for (int x = 0; x < w; x += 1) {
			for (int y = x+1; y < w; y += 1) {
				if (t [x].v < t [y].v) {
					T te = t [x];
					t [x] = t [y];
					t [y] = te;
				}
			}
		}
		// 数据排序，按照单位金属价值降序
		while (beg >= 0 && c <= w) {
			if (beg - t [c].n >= 0) {
				beg -= t [c].n;
				money += (double)t [c].n * t [c].v;
				c += 1;
			} else {
				money += (double)beg * t [c].v;
				break;
			}
		}
		// std::cout << money << std::endl;
		printf ("%.2lf\n", money);
	}



	return 0;
}