#include<cstdio>

int gcd(int a,int b){
	return b?gcd(b,a%b):a;
}
int main() {
	int n = 0, a = 0, tmp = 0, result = 0, c=0;
	while (~scanf("%d", &n)) {
		scanf("%d", &a);
		for (int i = 0; i <= n - 2; i++) {
			scanf("%d", &tmp);
			c = gcd(a, tmp);
			a = a / c * tmp;
		}
		printf("%d\n", a);
	}
	return 0;
}