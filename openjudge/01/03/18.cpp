#include <cstdio>

int main() {

	int a, b, n;
	scanf("%d%d%d", &a, &b, &n);
	printf("%d", ((a-(b-a))+n*(b-a)));


	return 0;
}