#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;

	while (T--) {
		int n;
		cin >> n;
		int count[204] = {0}, temp, s, e;
		for (int i = 0; i < n; i++) {
			cin >> s >> e;
			if (s > e) swap (s, e);
			for (int j = (s+1) / 2; j <= (e+1) / 2; j++) count[j]++;
		}
		int max = 0;
		for (int i = 0; i < 201; i++) {
			if (max < count[i])
			max = count[i];
		}
		printf("%d\n", max * 10);
	}
	return 0;
}