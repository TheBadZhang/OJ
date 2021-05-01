#include <iostream>
#include <algorithm>

using namespace std;

int main () {
	int N = 0, milk [10101] = { 0 };
	while (cin >> N && N) {
		for (int i = 0; i < N; i ++) {
			cin >> milk[i];
		}
		sort(milk, milk + N, [](int a, int b) { return a > b; });
		cout << milk[N/2] << endl;
	}

    return 0;
}