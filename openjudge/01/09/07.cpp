#include <cstdio>

int main () {

	int n;
	scanf ("%d", &n);
	int num;
	int max = 0;
	int maxnum = 1;
	long long int result = 0;
	for (int a = 0; a < n; a += 1) {
		scanf ("%d", &num);
		result += num;
		// 此处应注意同时出现两个最大值时如何计算
		if (max == num) {
			maxnum += 1;
		}
		if (num > max) {
			max = num;
			maxnum = 1;
		}
	}

	printf ("%d", result - max*maxnum);


	return 0;
}