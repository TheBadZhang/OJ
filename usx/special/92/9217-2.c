#include <stdio.h>
#include <string.h>

int main () {
	char str[1024];
	while (~scanf ("%s", str)) {
		printf ("%d\n", strlen(str));
	}
}