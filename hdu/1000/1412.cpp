#include<iostream>
#include<cstdio>
#include<set>
using namespace std;
int main() {
	int temp,n1,n2;
	while(scanf("%d %d",&n1,&n2)!=EOF) {
		set<int> s;
		n1=n1+n2;
		while(n1--) {
			scanf("%d",&temp);
			s.insert(temp);
		}
		set<int>::const_iterator itor;
		itor=s.begin();
		while(itor!=s.end()) {
			printf("%d",*itor);
			itor++;
			if(itor!=s.end())
			printf(" ");
		}
		printf("\n");
	}

	return 0;
}