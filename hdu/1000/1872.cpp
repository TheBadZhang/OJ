#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>
using namespace std;
struct node
{
	string name;
	int score;
	int id;
}stu[500],stu1[500];
bool cmp(node a,node b)
{
	if(a.score!=b.score) return a.score>b.score;
	else return a.id<b.id;
}
int main()
{
	int n;
	while(cin>>n){
		for(int i=0;i<n;i++)
			cin>>stu[i].name>>stu[i].score,stu[i].id=i;
		sort(stu,stu+n,cmp);
		int flag=0;
		for(int i=0;i<n;i++){
			cin>>stu1[i].name>>stu1[i].score;
			if(stu1[i].score!=stu[i].score){
				flag=1;     //  Error;
			}else if(stu1[i].name!=stu[i].name){
				flag=2;     //  Not Stable;
			}
		}
		if(!flag)cout<<"Right"<<endl;
		else if(flag==1){
			cout<<"Error"<<endl;
			for(int i=0;i<n;i++)
				cout<<stu[i].name<<' '<<stu[i].score<<endl;
		}else if(flag==2){
			cout<<"Not Stable"<<endl;
			for(int i=0;i<n;i++)
				cout<<stu[i].name<<' '<<stu[i].score<<endl;
		}
	}
	return 0;
}