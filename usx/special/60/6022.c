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

	char ch;

	while (~scanf("%c", &ch)) {
		space = 0; chars = 0; number = 0; other = 0;
		count (ch);
		while ((ch = getchar ()) != '\n' && ch != EOF) {
			count (ch);
		}
		printf ("%d %d %d %d\n", chars, space, number, other);
	}

	return 0;
}