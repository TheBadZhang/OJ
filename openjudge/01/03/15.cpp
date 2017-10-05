#include <cstdio>

int main() {

	int a, b,c;
	scanf("%d%d%d", &a, &b, &c);
	printf("%d", (int)(a - (c * (1.0/b))));

	return 0;
}