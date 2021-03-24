#include <stdio.h>

int main () {

	int a;
	while (~scanf ("%d", &a)) {
		if (a%400==0 || a%100!=0&&a%4==0) {
			printf ("Yes\n");
		} else {
			printf ("No\n");
		}
	}


	return 0;
}