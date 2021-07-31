
#include <stdio.h>

int main() {
	int N;
	long long a,b,c,s;
	scanf("%d",&N);
	while (N--) {
		scanf("%lld %lld %lld",&a,&b,&c);
		s=1;
		while (b--) {
			s=s*a;
			s=s%c;
		}
		printf("%lld\n",s);
	}
	return 0;
}