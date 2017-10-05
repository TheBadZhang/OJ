#include <cstdio>

int main() {

	int n;
	scanf("%d", &n);

	int MaxHours = 0;
	int hours = 0;

	for (int a = 0; a < n; a += 1) {

		int ubso, uuvh;
		scanf("%d%d", &ubso, &uuvh);

		if (90 <= ubso && ubso <= 140 &&
		    60 <= uuvh && uuvh <= 90) {

			hours += 1;

			if (MaxHours < hours) {

				MaxHours = hours;

			}
		} else hours = 0;
	}

	printf("%d", MaxHours);



	return 0;
}