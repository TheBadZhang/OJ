//该题就是求在T时间内，各自提交的数目
#include <cstdio>
#include <cstring>
int main() {
	int a, b, t, n;
	scanf("%d", &n);
	while (n--) {
		scanf("%d%d%d", &a, &b, &t);
		a = t / a * a;
		b = t / b * b;
		if (a > b)
			printf("Sempr!\n");
		else if (a == b)
			printf("Both!\n");
		else
			printf("Xiangsanzi!\n");
	}
	return 0;
}