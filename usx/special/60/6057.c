#include <stdio.h>
#include <string.h>

int isAEIOU (char ch) {
	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
	    ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
		return 1;
	else
		return 0;
}

int main () {

	char src [100];
	char dst [100];
	while (gets (src) != NULL) {
		int i, j = 0, size = strlen (src);
		for (i = 0; i < size; i++) {
			if (isAEIOU (src[i])) {
				dst[j++] = src [i];
			}
		}
		dst[j] = '\0';
		puts (dst);
	}
}