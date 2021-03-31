#include <stdio.h>

int main () {
	int score;
	while (~scanf ("%d", &score)) {
		if (score >= 90) {
			printf ("outstanding\n");
		} else if (score >= 60) {
			printf ("satisfactory\n");
		} else {
			printf ("unsatisfactory\n");
		}
	}
}