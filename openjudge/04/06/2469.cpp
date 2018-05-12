// 设最大寿命的为 x 
// 其他 n-1 电池的寿命和为 sum2 
// 如果 sum2 < x 那么无法均分成两半来使用

// 反之， 答案等于 总sum/2；即全部用光
#include <iostream>
#include <cstdio>

int main () {

	int N, B;

	while (std::cin >> N) {
		double X = 0, h = 0;
		for (int a = 0; a < N; a += 1) {
			std::cin >> B;
			h += B;
			if (X < B) X = B;
		}
		if (X > h-X) {
			printf ("%.1lf\n", h-X);
		} else {
			printf ("%.1lf\n", h/2);
		}
	}


	return 0;
}