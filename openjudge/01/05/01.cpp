#include <iostream>

int main() {

	int n;
	scanf("%d", &n);
	int *ages = new int[n];
	double age = 0;

	for (int a = 0; a < n; a++) {
		scanf("%d", &ages[a]);
		age += ages[a];
	}

	printf("%.2f", age/n);



	return 0;
}