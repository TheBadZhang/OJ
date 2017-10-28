#include <cstdio>
// #include <iostream>
// #include <string>
#include <vector>


#define size 1000000

int main () {
	
	int *list = new int [size];

	for (int a = 0; a < size; a += 1) {
		list [a] = 0;
	}
	list [0] = 1;
	int n = 0;
	scanf ("%d", &n);
	int max = 1;

	for (int a = 2; a <= n; a += 1) {
		for (int b = 0; b < max; b += 1) {
			list [b] *= a;
		}
		for (int b = 0; b < max; b += 1) {
			if (list [b] >= 10) {
				if (b+1 >= max) {
					max += 1;
				}
				list [b+1] += list [b] / 10;
				// 此处要使用 += 
				// 原本写成了 = ，导致结果错误
				// 修正后AC
				list [b] %= 10;
			}
		}
	}
	bool flag = false;
	for (int a = max+1; a >= 0; a -= 1) {
		if (!flag && list [a] != 0) {
			flag = true;
		}
		if (flag) {
			printf ("%d", list [a]);
		}
	}

	return 0;
}