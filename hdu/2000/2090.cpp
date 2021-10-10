#include <cstdio>

#define N 32
char s[N];

int main(void) {
	double x, y, sum = 0;
	while (~scanf("%s%lf%lf", s, &x, &y))
		sum += x * y;
	printf("%.1f\n", sum);

	return 0;
}
