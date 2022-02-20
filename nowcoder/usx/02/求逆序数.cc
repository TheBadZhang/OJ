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

int main () {

	int N;
	cin >> N;
	int v[10100];
	for (int i = 0; i < N; ++i) {
		scanf("%d", &v[i]);
	}
	int counts = 0;
	for (int i = 0; i < N; ++i) {
		for (int j = i+1; j < N; ++j) {
			if (v[i] > v[j]) ++counts;
		}
	}

	cout << counts;

	return 0;
}