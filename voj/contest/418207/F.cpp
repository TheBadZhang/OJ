#include <iostream>

long long F (long long n) {
	if (n == 0) {
		return 0;
	} else if (n % 10) {
		return n%10;
	} else {
		return F(n/10);
	}
}
long long ans;

void S(long long l, long long r) {
	if (r - 1 < 9) {
		for (int i = 1; i <= r; ++i) {
			ans += F(i);
		}
		return ;
	}
	while (l % 10) {
		ans += F(l);
		++l;
	}
	while (r % 10) {
		ans += F(r);
		--r;
	}
	ans += 45*(r-l)/10;
	S(l/10,r/10);
}


int main () {

	long long p, q;
	while (std::cin >> p >> q) {
		if (p == -1 && q == -1) {
			break;
		}
		ans = 0;
		S(p, q);
		std::cout << ans << std::endl;
	}



	return 0;
}