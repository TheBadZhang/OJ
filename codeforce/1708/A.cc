#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <stack>
#include <string>
#include <queue>
#include <map>
#include <numeric>
#include <set>

using namespace std;
using ll = long long;
#define FOR(x, b, e) for (int x = b; x <= e; ++x)
#define ROF(x, b, e) for (int x = b; x >= e; --x)
#define FOR0(x, b, e) for (int x = b; x < e; ++x)
#define ROF0(x, b, e) for (int x = b; x > e; --x)
inline ll read(){
	ll s = 0, w = 1; char ch = getchar();
	while (ch < 48 || ch > 57) { if (ch == '-') w = -1; ch = getchar(); }
	while (ch >= 48 && ch <= 57) s = (s << 1) + (s << 3) + (ch ^ 48), ch = getchar();
	return s * w;
}
long long mypow(int base, int a) {
	long long i = 1;
	while (a--) i*=base;
	return i;
}
int c;
int prime[200000];
bool isVisit[1000010000];
void EulerSevie(int n) {
	for(int i = 2;i <= n; ++i) {
		if(isVisit[i] == false) prime[++c] = i;     //将素数保存在素数数组里面，计数+1
		//下面for循环及里面的语句才是这个算法的精髓，我们下面细讲
		for(int j = 1;j <= c && i * prime[j] <= n; ++j) {
			isVisit[i * prime[j] ] = true;
			if (i % prime[j] == 0) 	break;
		}
	}
}




int a[100100];

int main () {

	int T;
	cin >> T;
	while (T--) {
		int n;
		bool flag = true;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		if (a[0] == 0) {
			flag = false;
		} else {
			for (int i = 1; i < n; i++) {
				if (a[i] % a[0] != 0){
					flag = false;
				}
				// printf ("%d,", a[i]);
			}
		}
		if (flag) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

	return 0;
}