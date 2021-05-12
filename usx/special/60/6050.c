#include <stdio.h>
#include <string.h>
int main () {

	char str[100];
	while (gets(str)) {
		int i, l = strlen (str);
		char ch;
		scanf ("%c\n", &ch);
		for (i = 0; i < l; i++) {
			if (str[i] != ch)
				printf ("%c", str[i]);
		}
		printf ("\n");
	}



	return 0;
}