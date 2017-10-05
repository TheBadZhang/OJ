#include <cstdio>

int main () {


	// if n = 0 then C_n = 0
	// if n > 0 then C_n = C*n*x*9(x-1)

	// 当我知道这个样例输入输出是假的之后我才知道自己到底错在了哪里

	// int line;
	// scanf("%d", &line);
	// for (int l = 0; l < line; l += 1) {
		int n;
		scanf("%d", &n);
		for (int a = n; a >= 0; a -= 1) {
			int c;
			scanf("%d", &c);
			int result = c*a;
			if (!(result == 0 && a == 0)) {
				if (a == n) {
					printf("%d", c*a);
				} else {
					printf(" %d", c*a);
				}
			}
		}
		if (n == 0) {
			printf("0");
		}
		// printf("\n");
	// }

	return 0;
}