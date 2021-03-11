#include <stdio.h>
#include <ctype.h>

int space, chars, number, other;

void count (char ch) {
	if (isdigit(ch)) {
		number ++;
	} else if (isalpha (ch)) {
		chars ++;
	} else if (ch == ' ') {
		space ++;
	} else {
		other ++;
	}
}

int main () {

	char ch, a[128];
	int i, l;
	// while (~scanf("%c", &ch)) {
	while (gets(a)) {
		space = 0; chars = 0; number = 0; other = 0;
		l = strlen (a);
		// count (ch);
		// while ((ch = getchar ()) != '\n' && ch != EOF) {
			// count (ch);
		// }
		for (i = 0; i < l; ++i) {
			count (a[i]);
		}
		printf ("%d %d %d %d\n", chars, space, number, other);
	}

	return 0;
}