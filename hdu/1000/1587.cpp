
#include <cstdio>


int main() {
	int n, m, min, flag, t;
	while (~scanf("%d%d", &n, &m)) {
		flag = 1;
		while (n--) {
			scanf("%d", &t);
			if (flag) {
				min = t;
				flag = 0;
			}
			if (min > t)
				min = t;
		}
		printf("%d\n", m / min);
	}
	return 0;
}