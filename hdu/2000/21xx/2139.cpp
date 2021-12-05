#include <iostream>
const int MAX = 2345;

long long db[MAX];
using namespace std;
int main() {
	int n, m, i;
	db[1] = 1;
	for (i = 3; i <= MAX; i += 2) {
		db[i] = db[i - 2] + i * i;
	}
	while (scanf("%d", &n) != EOF) {
		printf("%lld\n", db[n]);
	}
	return 0;
}