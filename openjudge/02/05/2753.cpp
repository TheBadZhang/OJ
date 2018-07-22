#include <iostream>

int R, C;
int minnums = 90;
char map [40][40];

void search (int x, int y, int n) {

	if (map [x] [y] == '#') return ;
	// 判断墙壁
	if (x >= R || y >= C || x < 0 || y < 0) return ;
	// 判断边界
	if (map [x][y] < 0) {
	// 判断是否走过
		if (map [x][y] < -n) goto s;
		// 判断路径长度
		else return ;
	} else {
s:
		map [x][y] = -n;
		// 保存新的路径
		search (x + 1, y, n + 1);
		search (x, y + 1, n + 1);
		search (x - 1, y, n + 1);
		search (x, y - 1, n + 1);
		// 进行下面的搜索
	}
	if (n < minnums && x == R - 1 && y == C - 1) minnums = n;
	// 判断是否到达终点，保存最小值
}

int main () {

	std::cin >> R >> C;

	for (int r = 0; r < R; r ++) {
		for (int c = 0; c < C; c ++) {
			std::cin >> map [r][c];
			// 数据输入
		}
	}

	search (0, 0, 1);
	// 深度搜索

	std::cout << minnums;
	// 结果输出

	return 0;
}