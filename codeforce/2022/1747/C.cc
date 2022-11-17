#include <iostream>
using namespace std;
using ll = long long;

int main(){ 
    int t;
	cin >> t;
    while (t--) {
        int n, a;
		cin >> n >> a;
        int mi = a;
        for (int i = 1; i < n; i++) {
            int x;
			cin >> x;
            if (x < mi) mi = x;
        }
        cout << (a<=mi ? "Bob" : "Alice") <<endl;
    }
    
}