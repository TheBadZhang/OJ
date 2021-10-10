
#include <cstdio>
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
char d[1000];

int main() {
	int m, a, b;
	while (~scanf("%d", &m), m) {
		scanf("%d%d", &a, &b);
		itoa(a + b, d, m);
		printf("%s\n", d);
	}
	return 0;
}