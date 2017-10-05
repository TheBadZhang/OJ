#include <cstdio>

int main() {

	long long int a, b;
	scanf("%d%lld", &a, &b);
	if (a > b) {
		printf(">");
	} else if (a == b) {
		printf("=");
	} else if (a < b) {
		printf("<");
	}

	return 0;
}