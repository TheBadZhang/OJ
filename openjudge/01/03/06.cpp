#include <cstdio>

int main() {

	int a, b;
	scanf("%d%d", &a, &b);
	printf("%.3lf%%", ((double)b/(double)a)*100);
	//哈？？？输出百分号只能用%%？？

	return 0;
}