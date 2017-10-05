#include <cstdio>


int main() {

	int K;
	scanf("%d", &K);
	bool flag = false;
	if (K < 0) {
		K = -K;
		printf("-");
	}
	while (K >= 10) {
		if (K%10!=0 && !flag) {
			flag = true;
		}
		if (flag) {
			printf("%d", K%10);
		}
		K /= 10;
	}
	printf("%d", K%10);
	// printf("%d", -380%10);



	return 0;
}