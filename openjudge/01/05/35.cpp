#include <cstdio>

int main() {

	int n = 0;
	scanf("%d", &n);

	double *list = new double[n];
	// 啊哈？？？一定要填double类型？？？
	list[0] = 1;
	list[1] = 1;
	double e = 2.0;
	for (int a = 2; a <= n ;a += 1) {

		list[a] = list[a-1] * a;
		e += 1.0 / list[a];
	}

	printf("%.10lf", e);

	return 0;
}