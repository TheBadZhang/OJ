#include <cstdio>

void
reset (int *list, int a = 1000000) {
	for (int b = 0; b < a; b += 1)
		list [b] = 0;
	list [0] = 1;
	list [1] = 2;
}
void
compute (int *list, int n = 1000000) {
	for (int a = 2; a < n; a += 1) {
		list [a] = 2*list [a-1] + list [a-2];
		list [a] %= 32767;
	}
}
int main () {
	
	
	int result = 0;
	int *list = new int [1000000];
	reset (list);
	compute (list);
	int n;
	scanf ("%d", &n);
	for (int a = 0; a < n; a += 1) {
		int b;
		scanf ("%d", &b);
		printf ("%d\n", list [b-1]);
	}
	
	
	return 0;
}