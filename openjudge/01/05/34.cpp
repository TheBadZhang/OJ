#include <cstdio>
// 注意，使用递归求解阶乘时间复杂度比较大
int JxIf(int a) {
	if (a == 0 || a == 1) {
		return 1;
	} else if (a < 0) {
		return 0;
	}
	return a * JxIf(a - 1);
}

int QqHe(int a) {
	if (a == 0) {
		return 0;
	}
	return JxIf(a) + QqHe(a-1);
}


int main() {

	int n;
	scanf("%d", &n);
	
	printf("%d", QqHe(n));


	return 0;
}