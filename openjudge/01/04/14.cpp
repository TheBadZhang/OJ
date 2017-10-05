#include <cstdio>
#include <cmath>

int main() {

	int a;
	char b;
	int c = 0;
	scanf("%d %c", &a, &b);
	if (b == 'y') {
		c += 5;
	}
	if (a <= 1000) {
		c += 8;
	} else if (a > 1000) {
		c += 8+4*(int)ceil((a-1000)/500.0);
	}

	printf("%d", c);

	return 0;
}