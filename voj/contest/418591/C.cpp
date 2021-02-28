#include <iostream>
#include <cstdio>
#include <cmath>
int gcd (int a, int b) {
	return b?gcd(b,a%b):a;
}
int main() {
	int a1, a;
	while(~scanf("%d", &a1) && a1) {
		int g = 0;
		while(scanf("%d", &a) == 1 && a) {
			int d = a - a1;
			if(d) {
				if(g) g = gcd(g, d);
				else g = d;
			}
			a1 = a;
		}

		printf("%d\n", abs(g));
	}

	return 0;
}
