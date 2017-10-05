#include <cstdio>

int main(int argc, char *argv[]) {

	int N;
	scanf("%d", &N);
	int *list = new int [N];

	for (int a = 0; a < N; a += 1) {
		scanf("%d", &list[a]);
	}

	int m;
	int times = 0;
	scanf("%d", &m);

	for (int a = 0; a < N; a += 1) {
		if (list[a] == m) {
			times += 1;
		}
	}

	printf("%d", times);


	return 0;
}