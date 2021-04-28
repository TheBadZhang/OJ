#include <stdio.h>

int main () {

	int n, m;
	while (~scanf ("%d %d", &n, &m)) {          // 处理多组输入

		int i, j;
		int matrix[10][10];                     // 定义一个矩阵（二维数组）
		for (i = 0; i < n; i ++) {
			for (j = 0; j < m; j ++) {
				scanf ("%d", &matrix[i][j]);    // 向矩阵输入数据
			}
		}

		int maxi = 0, maxj = 0, mini = 0, minj = 0;
		                                        // 假定 max 和 min 为 (0,0) 上的元素
		for (i = 0; i < n; i ++) {
			for (j = 0; j < m; j++) {           // 遍历矩阵（二维数组（
				if (matrix[i][j] > matrix[maxi][maxj]) {
					maxi = i;                   // 比较、找出最大值
					maxj = j;
				}
				if (matrix [i][j] < matrix [mini][minj]) {
					mini = i;                   // 比较、找出最小值
					minj = j;
				}
			}
		}
                                                // 输出结果
		printf ("max=%d row=%d col=%d\n", matrix[maxi][maxj], maxi, maxj);
		printf ("min=%d row=%d col=%d\n", matrix[mini][minj], mini, minj);
	}


	return 0;
}