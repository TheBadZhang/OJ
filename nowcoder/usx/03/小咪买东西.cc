#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;

struct SB {
	int c, v;
	double rate;
	SB () {
		scanf ("%d %d", &c, &v);
		rate = (double)v/c;
	}
};


int main () {

    int t;
    cin >> t;

    while(t--) {
		int n, k;
		cin >> n >> k;
		vector<SB> sb(n);
		sort (sb.begin(), sb.end(), [](auto a, auto b){
			return a.v * b.c > a.c * b.v;
		});
		sort (sb.begin(), sb.end(), [sb](auto a, auto b){
			return (sb[0].v + a.v) * (sb[0].c + b.c) > (sb[0].v + b.v) * (sb[0].c + a.c);
		});
		ll value = 0, cost = 0;
		for (int i = 0; i < k; ++i) {
			value += sb[i].v;
			cost  += sb[i].c;
		}
		// printf ("%lld %lld", value, cost);
		cout << value/cost << endl;
    }
    
    return 0;
}