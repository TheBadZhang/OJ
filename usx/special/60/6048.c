#include <stdio.h>

int main () {

	int n;
	while (~scanf ("%d", &n)) {          // 处理多组输入

		int i, j;
		int matrix[100][100];                     // 定义一个矩阵（二维数组）
		for (i = 0; i < n; i ++) {
			for (j = 0; j < n; j ++) {
				scanf ("%d", &matrix[i][j]);    // 向矩阵输入数据
			}
		}

		int mainSum = 0, sideSum = 0;           // 主对角线和副对角线和
		for (i = 0; i < n; i ++) {
			mainSum += matrix [i][i];
			sideSum += matrix [i][n-i-1];
		}
                                                // 输出结果
		printf ("%d %d\n", mainSum, sideSum);
	}


	return 0;
}