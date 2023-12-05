#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,a[26]={0},max=0,m;
        scanf("%d",&n);
        char s[n+1];
        scanf("%s",s);
        for(int i=0;i<n;i++) a[s[i]-'a']++;
        for(int i=0;i<26;i++) if(a[i]>max) max=a[i];
        m=n-max;
        if(max>=m) printf("%d\n",max-m);
        else if(n%2==1) printf("1\n");
        else printf("0\n");
    }
}