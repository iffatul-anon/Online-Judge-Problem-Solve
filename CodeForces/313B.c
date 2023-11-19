#include<stdio.h>
#include<string.h>
int main(){
    char s[1000000];
    scanf("%s",s);
    int n=strlen(s),a[1000000],c=0,m,l,r;
    for(int i=1;i<n;i++){
        if(s[i-1]==s[i]) c++;
        a[i]=c;
    }
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        scanf("%d %d",&l,&r);
        printf("%d\n",a[r-1]-a[l-1]);
    }
}