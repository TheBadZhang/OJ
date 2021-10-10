#include <iostream>
#include <algorithm>

using namespace std;

struct ROOM {
	int start, end;
};

int main () {

	int T;
	cin >> T;
	while (T--) {
		int N;
		cin >> N;
		ROOM v[500];
		bool visited[500] = {0};
		for (int i = 0; i < N; i++) {
			cin >> v[i].start >> v[i].end;
			if (v[i].start > v[i].end) {
				swap (v[i].start, v[i].end);
			}
		}
		sort (v, v+N, [](ROOM a, ROOM b) {
			return a.start < b.start;
		});
		int t = 0;
		for (int i = 0; i < N; i++) {
			if (visited[v[i].start]) {
				visited[v[i].end] = true;
				continue;
			}
			int nowend = v[i].end;
			for (int j = i+1; j < N; j++) {
				if ((v[j].start&1==0 && v[j].start-1<=v[i].end) || v[j].start <= v[i].end) {
					continue;
				} else {
					nowend = v[j].end;
					visited [v[j].start] = true;
				}
			}
			t++;
		}
		cout << 10*t << endl;
	}

	return 0;
}