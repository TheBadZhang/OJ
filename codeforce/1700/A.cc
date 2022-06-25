#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
long long maps[4][10010];

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 10010; j++) {
			maps[i][j] = INT_MAX;
		}
	}
	while (t--) {
		int m, n;
		cin >> m >> n;
		int c = 1;
		maps[1][1] = c++;
		for (int j = 2; j <= n; j++) {
			maps[1][j] = c++ + maps[1][j-1];
		}
		for (int i = 2; i <= m; i++) {
			for (int j = 1; j <= n; j++) {
				maps[2][j] = c++;
				maps[2][j] = maps[2][j] + min(maps[2][j-1], maps[1][j]);
				maps[1][j] = maps[2][j];
			}
		}
		cout << maps[1][n] << endl;
	}
	return 0;
}