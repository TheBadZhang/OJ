#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<math.h>
#include<iostream>
using namespace std;

#define N 1000000

int a[N];

int main() {
	int n;
	while(scanf("%d", &n)!=EOF) {
		for(int i=0; i<n; i++)
			scanf("%d", &a[i]);
		sort(a, a+n);
		printf("%d\n", a[(n+1)/2]);
	}
	return 0;
}