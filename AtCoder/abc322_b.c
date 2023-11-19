#include<stdio.h>
#include<string.h>
int main(){
    int n,m,f1=0,f2=0;
    scanf("%d %d",&n,&m);
    char s[n+1],t[m+1];
    scanf("%s %s",s,t);
    for(int i=0;i<n;i++) if(s[i]!=t[i]) f1=1;
    for(int i=m-n;i<m;i++) if(s[i-(m-n)]!=t[i]) f2=1;
    if(f1==0  && f2==0) printf("0\n");
    else if(f1==0) printf("1\n");
    else if(f2==0) printf("2\n");
    else printf("3\n");
}