#include <cstdio>
#include <cmath>

bool 
IsSuUu (long long int num) {
	if (num % 2 == 0 && num != 2) {
		return 0;
	} else {
		for (int a = 2; a <= sqrt(num); a += 1) {
			if (num % a == 0 && num != 2) {
				return 0;
			}
		}
		return 1;
	}
}


int main () {

	int n;
	scanf("%d", &n);
	int times = 0;
	for (int a = 2;; a += 1) {
		if (IsSuUu(a)) {
			times += 1;
			if (times == n) {
				printf("%d", a);
				return 0;
			}
		}
	}

	return 0;
}