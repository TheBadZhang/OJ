#include <iostream>

void
Hanoi (int n, char a, char b, char c) {
	if (n == 0) {
		return ;
	} else {
		Hanoi (n-1, a, c, b);
		printf ("%c->%d->%c\n", a, n, c);
		Hanoi (n-1, b, a, c);
	}
}


int main () {
	
	int n;
	std::cin >> n;
	char a, b, c;
	std::cin >> a >> b >> c;
	Hanoi (n, a, c, b);
	
	return 0;
}