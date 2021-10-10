#include <cstdio>

using namespace std;
int gcd(int a, int b) {
	return b ? gcd(b, a%b) : a;
}

int main() {
	int step, mod;
	while (~scanf("%d%d", &step, &mod)) {
		if (gcd(step, mod) == 1) {
			printf("%*d", 10, step);
			printf("%*d    Good Choice\n", 10, mod);
		} else {
			printf("%*d", 10, step);
			printf("%*d    Bad Choice\n", 10, mod);
		}
		printf("\n");
	}
	return 0;
}