#include <cstdio> 
#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <cmath>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;
int a[3] = {150, 200, 350};
int dp[10005], t, n;

int main(){
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(int i = 0; i < 3; i++){
			for(int j = a[i]; j <= n; j++){
				dp[j] = max(dp[j], dp[j-a[i]]+a[i]);
			}
		}
		printf("%d\n",n-dp[n]);
	}
	return 0;
}