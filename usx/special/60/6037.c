#include <stdio.h>

int main () {

	double max, min, t;
	int n, i;
	double list [100];
	while (~scanf ("%d", &n)) {             // 处理多组输入
		for (i = 0; i < n; i ++) {
			scanf ("%lf", &list[i]);        // 输入数据到数组
		}
		
		max = min = list [0];
		for (i = 0; i < n; i ++) {          // 遍历数组
			if (list[i] > max) {
				max = list[i];              // 比较、找出最大值
			}
			if (list[i] < min) {
				min = list[i];              // 比较、找出最小值
			}
		}
		printf ("%.6lf %.6lf\n", max, min); // 输出
	}

	return 0;
}