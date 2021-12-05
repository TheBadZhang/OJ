#include <iostream>


using namespace std;
using ll = long long;



#include <iostream>
#include <stdio.h>

using namespace std;


ll C(int n, int m) {
    long long c;

    if(n < m)
        c=0;
    else if (n == m || m == 0)
        c=1;
    else {
        c = 1;
        n = n - m + 1;
        for (int i=1; i<=m; i++) {
            c *= n++;
            c /= i;
        }
    }

    return c;
}


int main () {

	int T;
	cin >> T;
	while (T--) {
		int m, n;
		cin >> n >> m;
		cout << C(n,m) << endl;
	}

}