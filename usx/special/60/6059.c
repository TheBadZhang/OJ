#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main () {

	char str[100];
	while (gets(str) != NULL) {
		int count [128] = {0};
		char queue [128] = {0};
		int i, j = 0;
		for (i = 0; i < strlen (str); i++) {
			if (isalpha (str[i])) {
				if (count[str[i]] == 0) {
					queue [j++] = str[i];
				}
				count [str[i]] ++;
			}
		}
		for (i = 0; i < j; i ++) {
			if (i%10) printf (" ");
			else if (i!=0) printf ("\n");
			printf ("%c--%d", queue[i], count[queue[i]]);
		}
		printf ("\n");
	}

	return 0;
}