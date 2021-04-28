#include <stdio.h>
#include <string.h>
#include <ctype.h>

int hex2oct (char ch) {
	int number;
	if (isdigit (ch)) {
		number = ch - '0';
	} else {
		number = ch - 'A' + 10;
	}
	return number;
}

int main () {

	char str[10];
	
	while (~scanf ("%s", str)) {
		int number = 0;
		int negtive = 1;
		int i, s = 0, size = strlen (str);
		if (str[0] == '-') {
			negtive = -1;
			s = 1;
		}
		for (i = s; i < size; i++) {
			number *= 16;
			number += hex2oct (str[i]);
		}
		printf ("%d\n", number * negtive);
	}

	return 0;
}