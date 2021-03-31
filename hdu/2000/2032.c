#include <stdio.h>

unsigned long long int list [600];  // 放在全局变量可以自动初始化为 0

int main () {
	int i, j, k, n, d;

	for (i = 1, j = 2; i < 600; i += j, j++) {
		list [i] = 1; list [i-1] = 1;  // 将杨辉三角的两边的 1 初始化
		for (k = i + 1; k < i+j; k++) {
			list [k] = list[k-j] + list[k-j+1];
			                           // 计算杨辉三角
		}
	}


	bool flag = false;
	while (~scanf("%d", &n)) {
		// 从单列杨辉三角输出成二维杨辉三角
		j = 1; k =0; d = 0;
		for (i = 0; d < n; i++) {
			if (j != 1) printf (" ");
			printf ("%d", list[i]);
			if (j > k) {
				printf ("\n");
				d ++;
				k = j;
				j = 0;
			}
			j ++;
		}
		printf ("\n");
	}


	return 0;
}
