#include<stdio.h>
#include<string.h>
int main(){
    int n,f=0;
    scanf("%d",&n);
    char s[n+1];
    scanf("%s",s);
    for(int i=0;i<n-1;i++) if((s[i]=='a' && s[i+1]=='b') || (s[i]=='b' && s[i+1]=='a')) f=1;
    if(f==1) printf("Yes\n");
    else printf("No\n");
}