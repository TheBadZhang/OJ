#include <stdio.h>
#include <ctype.h>
#include <string.h>


int main () {

	int n;
	char str [100];
	while (~scanf ("%d\n", &n)) {
		int i, j;
		int lowercase = 0, capital = 0, space = 0, sign = 0;
		for (i = 0; i < n; i++) {
			gets (str);
			for (j = 0; j < strlen(str); j++) {
				if (isspace (str[j])) space ++;
				else if (islower (str[j])) lowercase ++;
				else if (isupper (str[j])) capital ++;
				else if (ispunct (str[j])) sign ++;
			}
		}
		printf ("lowercase=%d capital=%d space=%d sign=%d\n", lowercase, capital, space, sign);
	}




	return 0;
}