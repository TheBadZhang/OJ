#include <cstdio>

int main() {


	int k;
	scanf("%d", &k);
	int  *list = new int[k];
	list[0] = 0;
	list[1] = 1;
	for (int a = 2; a <= k; a += 1) {
		list[a] = list[a-1] + list[a-2];
	}
	printf("%d", list[k]);

	return 0;
}