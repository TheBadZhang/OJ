#include <cstdio>
#include <cmath>

int main() {

	double h;
	scanf("%lf", &h);
	double lenth = h;
	for (int a = 0; a < 10; a += 1) {
		h *= 0.5;
		lenth += 2*h;
	}
	printf("%g\n%g", lenth-2*h, h);
	// 第十次落地没有弹跳，需减去

	return 0;
}