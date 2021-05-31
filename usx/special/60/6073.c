#include <stdio.h>

int josephus (int n, int m) {
	if (n == 1) {
		return 0;
	} else {
		return (josephus (n-1,m) + m)%n;
	}
}

int main () {
	int n, m, i, s = 0;
	while(~scanf ("%d %d", &n, &m)) {
		printf ("%d\n", josephus (n,m)+1);
	}

}