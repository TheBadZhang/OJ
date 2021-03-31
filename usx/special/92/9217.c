#include <stdio.h>

int main () {
	char str[1024];
	int i;
	while (~scanf ("%s", str)) {
		i = 0;
		while (str[i++]);
		printf ("%d\n", i-1);
	}
}