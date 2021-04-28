#include <stdio.h>

int main () {

	int n;
	while (~scanf ("%d", &n)) {          // 处理多组输入

		int i, j, num;
		int mainSum = 0, sideSum = 0;           // 主对角线和副对角线和
		for (i = 0; i < n; i ++) {
			for (j = 0; j < n; j ++) {
				scanf ("%d", &num);             // 输入数据
				if (j == i) mainSum += num;
				if (j == (n-i-1)) sideSum += num;
			}
		}
		printf ("%d %d\n", mainSum, sideSum);   // 输出结果
	}


	return 0;
}