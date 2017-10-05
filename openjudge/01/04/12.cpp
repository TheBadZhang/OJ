#include <cstdio>

int main() {

	int a;
	scanf("%d", &a);
	if ((int)(a/1.2) > (int)((a/3.0)+50)) {
		printf("Bike");
	} else if ((int)(a/1.2) == (int)((a/3.0)+50)) {
		printf("All");
	} else if ((int)(a/1.2) < (int)((a/3.0)+50)) {
		printf("Walk");
	}

	return 0;
}