#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
#include<string>
using namespace std;
const int N = 1000010;
const int M = 10010;
int a[N], b[M];
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
	while (i < n){
		if (j == -1 || a[i] == b[j])
			++i, ++j;
		else j = ne[j];
		if (j == m)
			return (i - m+1);
	}
	return -1;
}
int main(){
	cin >> t;
	while (t--){
		cin >> n >> m;
		for (int i = 0; i < n; i++)
			scanf ("%d", &a[i]);
		for (int i = 0; i < m; i++)
			scanf ("%d", &a[i]);
		getnext();
		cout << KMP() << endl;
	}
	return 0;
}