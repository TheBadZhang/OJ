#include <iostream>
#include <cstring>
#include <string>

int main() {
	int n;
	int submit, time, firstsub, firsttime, use_time, t;
	std::string team, firstteam;
	std::cin >> n;
	firstsub = 0;
	firsttime = 0; //可视具体情况而定// firsttime = INT_MAX;
	while (n--) {
		std::cin >> team;
		use_time = t = 0;
		for (int number = 0; number < 4; number++) {
			std::cin >> submit >> time;
			if (time > 0) {
				use_time += time + 20 * (submit - 1);
				t++;
			}
		}
		//解题数量多||解题数量一致但用时少
		if ((t > firstsub) || (t == firstsub && use_time < firsttime)) {
			firstteam = team;
			firstsub = t;
			firsttime = use_time;
		}
	}
	std::cout << firstteam << " " << firstsub << " " << firsttime << std::endl;
	return 0;
}
