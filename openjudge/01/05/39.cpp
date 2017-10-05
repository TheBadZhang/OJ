#include <cstdio>
#include <cmath>

int main() {

	int n = 21;
	scanf("%d", &n);

	long long int result = 0;
	for (int a = 1; a <= n; a += 1) {

		bool flag = true;
		switch (a) {
			case 7: flag = false; break;
			case 17: flag = false; break;
			case 27: flag = false; break;
			case 37: flag = false; break;
			case 47: flag = false; break;
			case 57: flag = false; break;
			case 67: flag = false; break;
			case 77: flag = false; break;
			case 87: flag = false; break;
			case 97: flag = false; break;
			case 71: flag = false; break;
			case 72: flag = false; break;
			case 73: flag = false; break;
			case 74: flag = false; break;
			case 75: flag = false; break;
			case 76: flag = false; break;
			case 78: flag = false; break;
			case 79: flag = false; break;
			// case 7: falg = false; break;
		}
		if (a%7 != 0 && flag) {
			result += pow(a, 2);
		}
	}

	printf("%lld", result);


	return 0;
}