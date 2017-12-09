#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;
int main() {
	double a[310],sum=0,j,average;
	int n,i;
	cin>>n;
	for(i=0;i<n;i++) 
		cin>>a[i];
	sort(a,a+n); 
	for(i=1;i<n-1;i++)
		sum+=a[i];
	average=sum/(n-2);
	j=abs(a[1]-average); 
	for(i=2;i<n-1;i++) {
		if(abs(a[i]-average)>j)
			j=abs(a[i]-average);
	}
	printf("%.2lf %.2lf",average,j);
return 0; 
}