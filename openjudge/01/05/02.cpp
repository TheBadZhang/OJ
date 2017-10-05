#include <cstdio>

int main() {

	double list;
	double remain = 0;
	for (int a = 0; a < 12; a++) {
		scanf("%lf", &list);
		remain = remain + list;
	}

	printf("$%.2f", remain/12);


	return 0;
}