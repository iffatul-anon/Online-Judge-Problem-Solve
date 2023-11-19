#include<stdio.h>
#include<string.h>
int main(){
    int n,flag=0;
    scanf("%d",&n);
    char s[n+1];
    scanf("%s",s);
    for(int i=0;i<n-1;i++) if(s[i]==s[i+1]) flag=1;
    if(flag==1) printf("No\n");
    else printf("Yes\n");
}