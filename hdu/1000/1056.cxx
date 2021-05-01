#include<cstdio>

int main() {
	float n;
	while(~scanf ("%f",&n)) {
		float sum = 0;
		float i = 0;
		int count = 0;
		if (n == 0.00)
			break;
		for (i = 2.00; sum < n; i++) {
			sum = sum + 1/i;
			count++;
		}
		printf ("%d card(s)\n",count);
	}
	return 0;
}