#include <cstdio>

#define F2C(a) 5*((a)-32)/9
int main() {

	double a;
	scanf("%lf", &a);
	printf("%.5lf", F2C(a));


	return 0;
}