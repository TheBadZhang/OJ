#include <cstdio>

int main(int argc, char *argv[]) {

	int *list = new int [10];

	for (int a = 0; a < 10; a += 1) {
		scanf("%d", &list[a]);
	}

	int m;
	int times = 0;
	scanf("%d", &m);

	for (int a = 0; a < 10; a += 1) {
		if (list[a] <= 30 + m) {
			times += 1;
		}
	}

	printf("%d", times);


	return 0;
}