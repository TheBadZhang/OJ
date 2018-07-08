#include <cstdio>
#include <iostream>

int main () {
	
	char list [100][100];
	char list2[100][100];
	int n;
	scanf ("%d", &n);
	int d;
	for (int a = 0; a < n; a += 1) {
		scanf ("%c", &d);
		for (int b = 0; b < n; b += 1)
			scanf ("%c", &list [a][b]);
	}
	std::cin >> d;
	for (int f = 0; f < d-1; f += 1) {
		for (int a = 0; a < n; a += 1)
			for (int b = 0; b < n; b += 1)
				if (list [a][b] == '@') {
					if (list [a-1][b] != '#' && a-1 >= 0)   list2 [a-1][b] = '@';
					if (list [a+1][b] != '#' && a+1 <= n-1) list2 [a+1][b] = '@';
					if (list [a][b-1] != '#' && b-1 >= 0)   list2 [a][b-1] = '@';
					if (list [a][b+1] != '#' && b+1 <= n-1) list2 [a][b+1] = '@';
				}
		// 更新状态
				
		for (int a = 0; a < n; a += 1)
			for (int b = 0; b < n; b += 1)
				if (list2 [a][b] == '@')
					list [a][b] = list2 [a][b];
		// 拷贝数组
	}
	int c = 0;
	for (int a = 0; a < n; a += 1)
		for (int b = 0; b < n; b += 1)
			if (list [a][b] == '@')
				c += 1;
	// 统计数量

	printf ("%d", c);
	// 输出结果
	
	
	return 0;
}