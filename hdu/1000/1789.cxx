#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct hw {
	int deadline;
	int score;
	hw (int d = 0, int s = 0) : deadline(d), score(s) {

	}
};

int main () {

	int T;

	cin >> T;

	while (T--) {
		int N;
		cin >> N;
		hw v[1005];
		bool vis[1005] = {0};
		int sum = 0;

		for (int i = 0; i < N; i++) {
			cin >> v[i].deadline;
		}
		for (int i = 0; i < N; i++) {
			cin >> v[i].score;
		}

		sort (v, v+N, [](hw a, hw b) {
			return a.score > b.score;
		});


		for (int i = 0; i < N; i++) {
			while (v[i].deadline >= 1 && vis[v[i].deadline]) v[i].deadline--;
			if (v[i].deadline) vis[v[i].deadline] = true;
			else sum += v[i].score;
		}

		cout << sum << endl;

	}

	return 0;
}


/*

1 2 4 4 3 4 6
3 6 7 5 4 2 1

*/