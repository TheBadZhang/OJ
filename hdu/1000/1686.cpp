#include<iostream>
#include<string>
using namespace std;
int nt[10005];
string k1, k2;
void take() {
	nt[0] = 0;
	int num = k1.length();
	for (int i = 1, y = 0; i < num; i++) {
		while (y&&k1[i] != k1[y]) {
			y = nt[y - 1];
		}
		if (k1[i] == k1[y]) {
			y++;
		}
		nt[i] = y;
	}
}
int next() {
	take();
	int ans = 0;
	int num1 = k1.length();   //小
	int num2 = k2.length();   //大
	for (int i = 0, j = 0; i < num2; i++) {
		while (j&&k1[j] != k2[i]) {
			j = nt[j - 1];
		}
		if (k1[j] == k2[i]) {
			j++;
		}
		if (j == num1) {
			ans++;
		}
	}
	return ans;
}
int main() {
	int n;
	while (cin >> n) {
		while (n--) {
			cin >> k1 >> k2;
			cout << next() << endl;
		}
	}
	return 0;
}