#include<iostream>

int i,j,k,n,ans=9999999;

int main() {

	std::cin >> n; 

	for(i = 1; i <= n; i ++){
		for(j = 1; j <= n; j ++){
			k = 2 * (n/i+i*j+n/j);
			if(n % (j*i) == 0 && k < ans){
				ans = k;
			}
		}
	}
	std::cout << ans;
}