#include <cstdio>
// #include <vector>

int
main () {

	int n;
	scanf ("%d", &n);
	int *list = new int [n];
	for (int a = 0; a < n; a += 1) {
		scanf ("%d", &list [a]);
	}
	int fn;
	scanf ("%d", &fn);

	for (int a = 0; a < n; a += 1) {
		if (list [a] == fn) {
			printf ("%d", a+1);
			return 0;
		}
	}
	printf ("-1");
	return 0;
}