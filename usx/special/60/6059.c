#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main () {

	char str[100];
	while (gets(str) != NULL) {
		int count [128] = {0};
		int i, j = 0;
		for (i = 0; i < strlen (str); i++) {
			if (isalpha (str[i])) {
				count [str[i]] ++;
			}
		}
		int counts = 0;
		for (i = 0; i < 128; i ++) {
			if (count[i] != 0) {
				if (counts%10) printf (" ");
				else if (counts!=0) printf ("\n");
				printf ("%c--%d", i, count[i]);
				counts ++;
			}
		}
		printf ("\n");
	}

	return 0;
}