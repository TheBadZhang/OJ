#include <iostream>

#define max 1000
using namespace std;
double x [max],y [max];
int main() {
	int n,i;
	double pos1,pos2;
	while(cin>>n){
		cout<<n;
		for(i=0;i<n;i++){
			cin>>x[i]>>y[i];
		}
		for(i=0;i<n-1;i++){
			pos1 =(x[i]+x[i+1])/2.0;
			pos2 =(y[i]+y[i+1])/2.0;
			printf (" %.6lf %.6lf", pos1, pos2);
		}
		pos1 = (x[n-1]+x[0])/2.0;
		pos2 = (y[n-1]+y[0])/2.0;
		printf (" %.6lf %.6lf\n", pos1, pos2);
	}
	return 0;
}