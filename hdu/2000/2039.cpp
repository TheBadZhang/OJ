#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	int m;
	double a, b, c;

	scanf("%d", &m);
	while (m--) {
		scanf("%lf%lf%lf", &a, &b, &c);

		printf("%s\n", (a + b > c && a + c > b && b + c > a) ? "YES" : "NO");
	}

	return 0;
}
