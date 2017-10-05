#include <cstdio>


int main() {

	int K, m;
	scanf("%d%d", &K, &m);
	int num3 = 0;
	bool flag = false;
	if (K%19==0) {
		flag = true;
	}
	while (K >= 10) {
		if (K%10 == 3) {
			num3 += 1;
		}
		K /= 10;
	}
	if (K%10 == 3) {
		num3 += 1;
	}
	if (num3 == m && flag) {
		printf("YES");
	} else {
		printf("NO");
	}


	return 0;
}