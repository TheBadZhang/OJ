#include <iostream>
#include <cstring>

using namespace std;

int main() {
	int a[9], b[9] = {1, 2, 1, 3, 0, 3, 1, 2, 1};
	// b 中不同代表能相互连接，相同代表不能相互连接
	string c;
	while (cin >> c) {
		bool flag = true;
		memset(a, 0, sizeof(a));
		for (int i = 0; i < c.size() - 1; i++) {
			int a1 = c[i] - '0';
			int a2 = c[i+1] - '0';
			if (a1 == a2 || a[a1-1] == 1 || a[a2-1] == 1) {
				// 前后两个密码不能相同，且不能被使用过
				flag = false;
				break;
			}
			a[a1-1] = 1;  // 标记
			if (b[a1-1] == b[a2-1] && !a[(a1+a2)/2 - 1]) {
				// 前后两个密码不能相连且中间的数字没有被使用过
				flag = false;
				break;
			}
		}
		if (flag) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
}