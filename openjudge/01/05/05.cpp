#include <cstdio>


int main() {


	int n;
	scanf("%d", &n);
	int *list = new int[n];
	int x = 0;
	for (int a = 0; a < n; a += 1) {
		scanf("%d", &list[a]);
		if (list[a] > x) {
			x = list[a];
		}
	}

	printf("%d", x);


	return 0;
}