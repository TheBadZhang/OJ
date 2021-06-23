#include <string.h>
#include <stdio.h>
#include <ctype.h>

int main () {

	int n;
	char str[100];
	char sstr [300] = { '\0' };
	while (gets(sstr)) {
		int l = strlen (sstr);
		int i = 0;
		int inWord = 0;
		int words = 0;
		char maxword[100] = {0};
		char word[100] = {0};
		for (n = 0; n <= l; n++) {
			if (isalpha (sstr[n])) {
				word[i++] = sstr[n];
				inWord = 1;
			} else {
				if (inWord) {
					if (strlen (word) > strlen (maxword)) {
						strcpy (maxword, word);
					}
				}
				memset (word, 0, 100*sizeof(char));
				i = 0;
				inWord = 0;
			}
		}
		printf ("%s\n", maxword);
		memset (sstr, 0, 300*sizeof(char));
		memset (maxword, 0, 100*sizeof(char));
	}




	return 0;
}