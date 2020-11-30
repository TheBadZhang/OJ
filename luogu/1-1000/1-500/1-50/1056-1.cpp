#include <iostream>
#include <algorithm>
using namespace std;
int M,N,K,L,D;
int x,y,p,q;
typedef struct tagINT
{
    int ID;
    int entity;
}INT;
INT l[1020],t[1020],temp;
void save(int x,int y,int p,int q)
{
    if(x==p)
    {
        l[min(y,q)].entity++;
        return ;
    }
    else
    {
        t[min(x,p)].entity++;
        return ;
    }
}
int main()
{
    cin >> M >> N >> K >> L >> D;
    for(int i=0;i<D;i++)
    {
        cin >> x >> y >> p >> q;
        save(x,y,p,q);
    }
    for(int i=1;i<=M;i++)l[i].ID = i;
    for(int i=1;i<=N;i++)t[i].ID = i;
    for(int i=1;i<=M;i++)
    {
        for(int j=i+1;j<=M;j++)
        {
            if(t[i].entity < t[j].entity)swap(t[i],t[j]);
        }
    }
    for(int i=1;i<=N;i++)
    {
        for(int j=i+1;j<=N;j++)
        {
            if(l[i].entity < l[j].entity)swap(l[i],l[j]);
        }
    }
    for(int i=1;i<=K;i++)
    {
        for(int j=i+1;j<=K;j++)
        {
            if(t[i].ID > t[j].ID)swap(t[i],t[j]);
        }
    }
    for(int i=1;i<=L;i++)
    {
        for(int j=i+1;j<=L;j++)
        {
            if(l[i].ID > l[j].ID)swap(l[i],l[j]);
        }
    }
    for(int i=1;i<=K;i++)
    {
        if(i>1)cout << ' ';
        cout << t[i].ID;
    }
    cout << endl;
    for(int i=1;i<=L;i++)
    {
        if(i>1)cout << ' ';
        cout << l[i].ID;
    }
}