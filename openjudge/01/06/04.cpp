#include <cstdio>

int main(int argc, char *argv[]) {

	int n;
	scanf("%d", &n);
	int *list = new int [n];

	for (int a = n-1; a >= 0; a -= 1) {
		scanf("%d", &list[a]);
	}

	for (int a = 0; a < n; a += 1) {
		if (a == 0) {
			printf("%d", list[a]);
		} else {
			printf(" %d", list[a]);
		}
	}


	return 0;
}