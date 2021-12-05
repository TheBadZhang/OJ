#include<stdio.h>
int n,r[32]={1};main(){for(;n++<32;){r[n]=2*(r[n-1]+1);}while(~scanf("%d",&n)){printf("%d\n",r[n-1]);}}
