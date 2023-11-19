#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,x=2;
        scanf("%d",&n);
        char s[n+1];
        while(n%x==0) x++;
        for(int i=0;i<n;i++) s[i]='a'+i%x;
        s[n]=0;
        printf("%s\n",s);
    }
}