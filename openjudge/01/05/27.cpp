#include <cstdio>

int main() {


	int K;
	scanf("%d", &K);
	double Sn = 0;
	int a;
	for (a = 1;Sn <= K;a += 1) {
		Sn += 1.0/a;
	}
	printf("%d", a-1);

	return 0;
}