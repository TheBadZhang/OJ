#include<iostream>
#include<iomanip>
#include<string>
#include<algorithm>
using namespace std;
const int N=100;
struct Student
{
	string name;
	int x1,x2,x3;
	float ave;
};
bool cmp(Student a,Student b)
{
	if(a.ave!=b.ave)
		return a.ave>b.ave;
	else return a.name<b.name;
}
int main()
{
	Student stu[N];
	int n;
	//input
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
		{
			cin>>stu[i].name>>stu[i].x1>>stu[i].x2>>stu[i].x3;
			stu[i].ave=(stu[i].x1+stu[i].x2+stu[i].x3)/3.0;
		}
	}
	//chuli
	sort(stu,stu+n,cmp);
	//output
	for(int i=0;i<n;i++)
	{
		cout<<stu[i].name<<" "<<stu[i].x1<<" "<<stu[i].x2<<" "<<stu[i].x3<<" ";
		//cout<<fixed<<setprecision(2)<<stu[i].ave<<endl;p
		printf ("%.2f\n", stu[i].ave);
	}
	return 0;
}