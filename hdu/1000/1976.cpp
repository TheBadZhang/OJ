
//利用if和else if执行顺序
#include <cstdio>
#include <cstring>
int main() {
	int a[3], b[3], t;
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d%d", &a[0], &a[1], &a[2]);
		scanf("%d%d%d", &b[0], &b[1], &b[2]);
		if (a[0] > b[0])
			printf("First\n");
		else if (a[0] < b[0])
			printf("Second\n");
		else if (a[1] > b[1])
			printf("First\n");
		else if (a[1] < b[1])
			printf("Second\n");
		else if (a[2] > b[2])
			printf("First\n");
		else if (a[2] < b[2])
			printf("Second\n");
		else
			printf("Same\n");
	}
	return 0;
}