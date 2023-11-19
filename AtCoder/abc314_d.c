#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    int n,q,a=0,b=-1,c=-1;
    scanf("%d",&n);
    char s[n+1];
    scanf("%s",s);
    scanf("%d",&q);
    int t,x[q];
    char s2[q+1];
    for(int i=0;i<q;i++){
        scanf("%d %d %c",&t,&x[i],&s2[i]);
        s[x[i]-1]=s2[i];
        if(t==2) b=i;
        if(t==3) c=i;
    }
    if(b>c && b>-1) {
        for(int i=0;s[i];i++) s[i]=tolower(s[i]);
        a=b+1;
    }
    else if(c>-1) {
        for(int i=0;s[i];i++) s[i]=toupper(s[i]);
        a=c+1;
    }
    for(int i=a;i<q;i++) s[x[i]-1]=s2[i];
    printf("%s\n",s);
}