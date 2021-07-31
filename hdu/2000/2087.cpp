#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
#include<string>
using namespace std;
const int N = 1000010;
const int M = 10010;
string a, b;
int ne[M];
int n, m,t;
void getnext(){
	int j = 0, k = -1;
	ne[0] = -1;
	while (j < m){
		if (k == -1 || b[j] == b[k])
			ne[++j] = ++k;
		else k = ne[k];
	}
}
int KMP(){
	int i = 0, j = 0;
	int ans = 0;
	while (i < n){
		if (j == -1 || a[i] == b[j])
			++i, ++j;
		else j = ne[j];
		if (j == m) {
			ans ++;
			j = 0;
		}
			// return (i - m+1);
	}
	return ans;
}
int main(){
	while (cin >> a, a[0] != '#'){
		cin >> b;
		n = a.size (); m = b.size ();
		getnext();
		cout << KMP() << endl;
	}
	return 0;
}