#include <iostream>
#include <bitset>
#include <cmath>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;
using ll = long long;

inline int read(){
    int x = 0, f = 1;
    char ch = getchar();
    while(ch < '0' || ch > '9'){
        if (ch == '-')
            f = -1;
        ch = getchar();
    }
    while(ch >= '0' && ch <= '9'){
        x = (x<<1) + (x<<3) + (ch^48);
        ch = getchar();
    }
    return x * f;
}

int v[5005000];
int main () {

	int T;
	cin >> T;
	while (T--) {
		int n, k;
		cin >> n >> k;
		for (int i = 0; i < n; ++i) {
			v[i] = read();
		}
		sort (v, v+n);
		n = distance(v,unique(v,v+n));
		cout << v[k-1] << endl;
	}


	return 0;
}