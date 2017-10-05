#include <cstdio>

int main(int argc, char *argv[]) {

	int n;
	scanf("%d", &n);
	int *list = new int [n];
	int p[4]={0};

	for (int a = 0; a < n; a += 1) {
		scanf("%d", &list[a]);
		if (list[a] <= 18) {
			p[0] += 1;
		} else if (list[a] >= 19 && list[a] <= 35) {
			p[1] += 1;
		} else if (list[a] >= 36 && list[a] <= 60) {
			p[2] += 1;
		} else if (list[a] >= 61) {
			p[3] += 1;
		}
	}

	for (int a = 0; a < 4; a += 1) {
		printf ("%.2f%%\n", p[a]/(double)n * 100.0);
	}


	return 0;
}