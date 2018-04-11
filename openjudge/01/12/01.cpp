#include <cstdio>


int main () {

	int l, r, j;
	char opr;

	scanf ("%d %c %d", &l, &opr, &r);

	switch (opr) {
		case '+': j = l + r; break;
		case '-': j = l - r; break;
		case '*': j = l * r; break;
		case '/': j = l / r; break;
		case '%': j = l % r; break;
		default: break;
	}

	printf ("%d", j);


	return 0;
}