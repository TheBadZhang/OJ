#include <iostream>

int main () {

	long long int T, l, r, sum, t, tmp, ml, mr, msum;
	bool flag = false;
	std::cin >> T;
	for (int i = 0; i < T; i ++) {
		sum = 0; l = 0; r = 0;
		msum = -10000000; ml = 0; mr = 0;
		std::cin >> t;
		for (int j = 0; j < t; j++) {
			std::cin >> tmp;
			sum += tmp;
			r = j;
			if (sum > msum) {
				msum = sum;
				ml = l;
				mr = r;
			}
			if (sum < 0) {
				sum = 0;
				l = j + 1;
				r = j + 1;
			}
		}
		if (flag) {
			printf("\nCase %lld:\n%lld %lld %lld\n", i+1, msum, ml+1, mr+1);
		} else {
			printf("Case %lld:\n%lld %lld %lld\n", i+1, msum, ml+1, mr+1);
			flag = true;
		}
	}
}