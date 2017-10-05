#include <cstdio>

#define Max(a, b) (a) > (b) ? (a) : (b)

int main() {

	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	printf("%d", Max(a, Max(b, c)));

	return 0;
}