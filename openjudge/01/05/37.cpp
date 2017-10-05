#include <cstdio>


int main () {

	int M , N, X;
	int T;
	scanf("%d%d%d", &M, &N, &X);
	// 当我知道一个能量元素可以补满体力的时候我是一脸***的
	while (--X >= 0) {
		T += N;
		if (T >= M) {
			N += M/N;
			T = 0;
	// 这道题真是瞎几把乱做了，总觉得莫名奇妙……
		}
	}

	printf("%d", N);


	return 0;
}