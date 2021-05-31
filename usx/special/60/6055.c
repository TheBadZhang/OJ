#include <stdio.h>

void strcpy (char* dst, char* src) {
	while (*dst++ = *src++);
}

int main () {

	char str [100];
	char dst_str [100];
	while (gets (str) != NULL) {
		strcpy (dst_str, str);
		printf ("%s\n", dst_str);
	}
}