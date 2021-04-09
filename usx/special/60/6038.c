#include <stdio.h>

int list [400];  // 放在全局变量可以自动初始化为 0

int main () {
	int i, j, k;

	for (i = 1, j = 2; i < 250; i += j, j++) {
		list [i] = 1; list [i-1] = 1;  // 将杨辉三角的两边的 1 初始化
		for (k = i + 1; k < i+j; k++) {
			list [k] = list[k-j] + list[k-j+1];
			                           // 计算杨辉三角
		}
	}

	while (~scanf("%d", &i)) {
		for (j = 0; j < i; j ++) {
			if (j) printf (" ");
			printf ("%d", list [j]);   // 输出单行杨辉三角
		}
		printf ("\n");
	}

	return 0;
}
