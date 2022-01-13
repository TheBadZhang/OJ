#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>

using namespace std;

int main () {

	int M,N;

	while (cin >> M >> N) {
		int ans = 0, point = 0;
		vector<int> ram(M, -1); 
		vector<int> passage(N);
		for (int i = 0; i < N; ++i) {
			cin >> passage[i];
		}

		for (const auto& i : passage) {
			bool flag = false;
			for (int j = 0; j < M; ++j) {
				if (ram[j] == i) {
					flag = true;
					break;
				}
			}
			if (!flag) {
				ans ++;
				ram[point++] = i;
				point %= M;
			}
		}
		cout << ans << endl;
	 } 
	return 0; 
 } 