#include <cstdio>

int main() {

	int a, b, r=1;
	scanf("%d%d", &a, &b);
	for (int c = 0; c < b; c += 1) {
		r *= a;
		r %= 1000;
	}
	printf("%03d", r);


	return 0;
}