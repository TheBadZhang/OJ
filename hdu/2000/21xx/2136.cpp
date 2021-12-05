#include <iostream>
using namespace std;
const int N = 1000000;
int prime[N] = { 0 }, num_prime = 0;
int main() {
	for (int i = 2; i < N; i++) {
		if (!prime[i]) {
			num_prime++;
			for (int j = i; j < N; j += i) {  // 把这个素数的倍数标记为非素数
				prime[j] = num_prime;		  // 标号为该素数的编号
			}
		}
	}
	int n;
	while (scanf("%d", &n) != EOF) {
		printf("%d\n", prime[n]);
	}
	return 0;
}