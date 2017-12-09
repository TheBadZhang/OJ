#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
double a[310],sum=0,j,average;
int main() {
	int n;
	cin>>n;
	for(int i=0; i<n; i++) 
		cin>>a[i];
	sort(a,a+n);
	for(int i=1; i<n-1; i++)
		sum+=a[i];
	average=sum/(n-2);

	j=abs(a[1]-average);
	for(int i=2; i<n-1; i++)
		if(abs(a[i]-average)>j)
			j=abs(a[i]-average);
	printf("%.2lf %.2lf",average,j);
	return 0; 
}