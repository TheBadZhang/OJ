#include <cstdio>
#include <cmath>
#include <ctime>
#include <cstdlib>
#define sum 10000
int main () {
	
	int list [sum];
	srand (time (nullptr) + clock ());
	for (auto &a : list) a = rand ()% 100;

	for (int a = 0; a < sum; a += 1)
		for (int b = 0; b < a; b += 1)
			if (list [b] > list [a]) {
				int numnew = list [a];
				// 保存 比较值 的值
				for (int c = a; c > b; c -= 1)
					list [c] = list [c-1];
				// 移动数列
				list [b] = numnew;
				// 将 比较值 赋到 最终位置
				break;
			}

	return 0;
}