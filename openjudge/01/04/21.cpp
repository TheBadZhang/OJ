#include <cstdio>
#include <cmath>

int main() {

	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	int r = a-(int)ceil(1.0/b*c);
	if (r >= 0) {
		printf("%d", r);
	} else printf("0");

	return 0;
}