#include <string.h>
#include <stdio.h>
#include <ctype.h>

int main () {

	int n;
	char str[100];
	char sstr [300] = { '\0' };
	while (gets(str)) {
		strcat (sstr, str);
		gets(str);
		strcat (sstr, str);
		gets(str);
		strcat (sstr, str);
		int l = strlen (sstr);
		int inWord = 0;
		int space = 0;
		int word = 0;
		for (n = 0; n < l; n++) {
			if (isalpha (sstr[n])) {
				inWord = 1;
			} else {
				if (inWord) {
					word++;
				}
				inWord = 0;
			}
			if (sstr[n] == ' ') {
				space ++;
			}
		}
		printf ("%d %d\n", word, space);
		memset (sstr, 0, 300*sizeof(char));
	}




	return 0;
}