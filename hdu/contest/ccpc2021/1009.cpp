#include <iostream>
#include <string>
#include <iostream>


using namespace std;

int indexs [501000] = {0};

int main () {

	int t;
	string str;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		cin >> str;
		long long int count = 0;
		fill (indexs, indexs+501000, 0);
		for (int len = 2; len <= n; len += 2) {      // 遍历长度
			int u = 0, l = 0, d = 0, r = 0;
			for (int i = 0; i < len; i ++) {    // 遍历元素
				if (str[i] == 'U') {
					u++;
				} else if (str[i] == 'L') {
					l++;
				} else if (str[i] == 'D') {
					d++;
				} else if (str[i] == 'R') {
					r++;
				}
			}
			if (u == d && l == r) {
				count ++;

			}
			// printf ("len:%d u:%d d:%d l:%d r:%d\n", len, u, d, l, r);
			for (int i = len; i < n; i++) {
				if (indexs[i]) {
					i = indexs[i];
					continue;
				}
				if (str[i] == 'U') {
					u++;
				} else if (str[i] == 'L') {
					l++;
				} else if (str[i] == 'D') {
					d++;
				} else if (str[i] == 'R') {
					r++;
				}
				if (str[i-len] == 'U') {
					u--;
				} else if (str[i-len] == 'L') {
					l--;
				} else if (str[i-len] == 'D') {
					d--;
				} else if (str[i-len] == 'R') {
					r--;
				}
				if (u == d && l == r) {
					count ++;
				}
			// printf ("len:%d u:%d d:%d l:%d r:%d\n", len, u, d, l, r);
			}
		}
		cout << count << endl;
	}



	return 0;
}