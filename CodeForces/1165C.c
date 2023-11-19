#include<stdio.h>
#include<string.h>
int main(){
    int n,l=0;
    scanf("%d",&n);
    char s[n+1],a[n+1];
    scanf("%s",s);
    for(int i=0;i<n;i++) if(l%2==0 || s[i]!=a[l-1]) a[l++]=s[i];
    if(l%2!=0) l--;
    a[l]=0;
    printf("%d\n%s\n",n-l,a);
}