#include <iostream>
#include <vector>
#include <algorithm>

struct STU {
	long long int i, s, p;
};

int main () {
	long long int n, R, L;
	// std::vector <STU> stu (n);
	STU stu [110] { 0 };
	std::cin >> n >> R >> L;
	int stusize = n;
	for (int i = 0; i < n; i ++) {
		// std::cin >> stu[i].i;
		scanf ("%lld", &stu[i].i);
	}
	for (int i = 0; i < n; i ++) {
		// std::cin >> stu[i].s;
		scanf ("%lld", &stu[i].s);
	}
	for (int i = 0; i < n; i ++) {
		// std::cin >> stu[i].p;
		scanf ("%lld", &stu[i].p);
	}
	
	while (stusize > 1) {
		for (auto a:stu) {
			a.s += a.p;
		}
		std::sort (stu, stu+stusize, [](STU a, STU b) ->bool { return a.s==b.s?a.i<b.i:a.s > b.s; });
		for (int i = 0; i < stusize && i < 10; ++i) {
			stu [i].s += R;
		}
		if (stusize >= 6) {
			stu [0].s -= L;
			stu [1].s -= L;
			stu [2].s -= L;
		}
		// printf ("sss  %d\n", stusize);
		stusize -= stusize/2;
	}
	std::cout << stu[0].i << " " << stu[0].s << std::endl;
	
	
	return 0;
}