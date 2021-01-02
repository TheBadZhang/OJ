#include <iostream>

int main () {

	long long int T, sum, t, tmp, msum, mlt, mrt, begin, end;
	bool flag;
	while (~scanf("%lld", &T)) {
		sum = 0;
		msum = LLONG_MIN;
		flag = true;
		if (T == 0) {
			break;
		}
		for (int j = 0; j < T; j++) {
			scanf ("%lld", &tmp);
			if (flag) {
				begin = tmp;
				flag = false;
			}
			if (sum == 0) {
				t = tmp;
			}
			sum += tmp;
			if (sum > msum) {
				msum = sum;
				mrt = tmp;
				mlt = t;
			}
			if (sum < 0) {
				sum = 0;
			}
		}
		if (msum < 0) {
			printf("%lld %lld %lld\n", 0, begin, tmp);
		} else {
			printf("%lld %lld %lld\n", msum, mlt, mrt);
		}
	}
}