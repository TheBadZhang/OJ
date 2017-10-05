#include <cstdio>


int main() {


	int n;
	scanf("%d", &n);
	int dg = (n-2)*180;
	int b;
	for (int a = 0; a < n-1; a += 1) {
		scanf("%d", &b);
		dg -= b;
	}

	printf("%d", dg);


	return 0;
}