#include <stdio.h>

int main () {

	int i = 0;
	while (i++, !(i%2==1 && i%3==2 && i%5==4 && i%6==5 && i%7==0));

	printf ("%d", i);


	return 0;
}