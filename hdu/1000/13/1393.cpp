#include <iostream>
using namespace std;

int main() {
	int s, d;
	while (cin >> s >> d) {
		if (s == 0 && d == 0)
			break;

		int vis[60] = { 0 };
		int total = 0;
		while (s != 0 && vis[s] == 0) {
			vis[s] = 1;
			s = (s + s * d) % 60;
			++total;
		}
		if (s == 0)
			cout << total << endl;
		else
			cout << "Impossible" << endl;
	}
	return 0;
}