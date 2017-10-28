#include <cstdio>
// #include <iostream>
// #include <string>
#include <vector>


#define size 1000000

int main () {
	
	int *list = new int [size];
	int *result = new int [size];
	for (int a = 0; a < size; a += 1) {
		list [a] = 0;
		result [a] = 0;
	}
	list [0] = 1;
	int n = 0;
	scanf ("%d", &n);
	int max = 1;

	for (int a = 1; a <= n; a += 1) {
		for (int b = 0; b < max; b += 1) {
			list [b] *= a;
		}
		for (int b = 0; b < max; b += 1) {
			if (list [b] >= 10) {
				if (b+1 >= max) {
					max += 1;
				}
				list [b+1] += list [b] / 10;
				list [b] %= 10;
			}
		}
		// 此处代码可更为精简，但处于睡觉需求，暂不做更改
		for (int b = 0; b < max; b += 1) {
			result [b] += list [b];
		}
		for (int b = 0; b < max; b += 1) {
			if (result [b] >= 10) {
				if (b+1 >= max) {
					max += 1;
				}
				result [b+1] += result [b] / 10;
				result [b] %= 10;
			}
		}
	}
	bool flag = false;
	for (int a = max+1; a >= 0; a -= 1) {
		if (!flag && list [a] != 0) {
			flag = true;
		}
		if (flag) {
			printf ("%d", result [a]);
		}
	}

	return 0;
}