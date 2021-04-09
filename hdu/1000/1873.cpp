#include<stdio.h>
#include<algorithm>
#include<queue>
#include<string>
#include<string.h>
#include<iostream>
using namespace std;
struct Node{
    int sssss;
    int id;
    bool operator <(const Node& tttt)const{
        if(sssss!=tttt.sssss) return sssss<tttt.sssss;
        return id>tttt.id;
    }
    
};
int main(){
    int n;
    while((scanf("%d",&n))!=EOF){
        priority_queue<Node>doc[4];
        int id=1;
        Node tmp;
        for(int i=0;i<n;i++){
           string op; 
           cin>>op; 
           if(op=="IN"){
                int a,b;
                scanf("%d%d",&a,&b);
                tmp.sssss=b;
                tmp.id=id;
                id++;
                doc[a].push(tmp);
            }else if(op=="OUT"){
                int a;
                scanf("%d",&a);
                if(doc[a].empty()){
                    printf("EMPTY\n");
                }else{

                    printf("%d\n",doc[a].top().id);
                    doc[a].pop();
                }
            }
        }
    }
    return 0;
}
