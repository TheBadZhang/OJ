#include <cstdio>


int main() {


	int n;
	scanf("%d", &n);
	int j = 0, 
		y = 0, 
		t = 0;
	int b, c, d;
	for (int a = 0; a < n; a += 1) {
		scanf("%d%d%d", &b, &c, &d);
		j += b;
		y += c;
		t += d;
	}

	printf("%d %d %d %d", j, y, t, j+y+t);


	return 0;
}