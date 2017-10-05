#include <cstdio>

int main() {

	int n;
	scanf("%d", &n);
	int days = 0;
	long long money = 0;
	for (int a = 1; a <= n; a += 1) {
		for (int b = 1; b <= a; b += 1) {
			money += a;
			days += 1;
			if (days == n) {
				printf("%lld", money);
				return 0;
			}
		}
	}


	return 0;
}