#include <stdio.h>

int main () {

	int w, h, i, j, f = 0;
	char c;
	while (~scanf ("%d %d", &w, &h)) {
		c = 'a';
		if (f) printf ("\n\n");
		f = 1;
		for (i = 0; i < h; i++) {
			if (i>0) printf ("\n");
			for (j = 0; j < w; j++) {
				printf ("%c", c++);
			}
		}
	}


	return 0;
}