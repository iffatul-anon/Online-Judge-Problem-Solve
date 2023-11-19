#include<stdio.h>
#include<string.h>
int main(){
    int n,m=0;
    scanf("%d",&n);
    char s[n+1],s2[n+1];
    scanf("%s",s);
    for(int i=0;i<n;i++){
        s2[m++]=s[i];
        if(m>2 && s2[m-3]=='f' && s2[m-2]=='o' && s2[m-1]=='x') m-=3;
    }
    printf("%d\n",m);
}