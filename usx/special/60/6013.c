#include <stdio.h>

int main () {

	int year;
	while (~scanf("%d", &year)) {
		if (year % 100 == 0 && year % 400 == 0 ||
		    year % 100 != 0 && year % 4 == 0) {
			printf ("is LEAP!\n");
		} else {
			printf ("is NOT LEAP!\n");
		}
	}

	return 0;
}