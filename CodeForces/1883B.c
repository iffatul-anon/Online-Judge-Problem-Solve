#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k;
        scanf("%d %d",&n,&k);
        char s[n+1];
        scanf("%s",s);
        int a[26]={0};
        for(int i=0;i<n;i++) a[s[i]-'a']++;
        for(int i=0;i<26;i++) if(a[i]%2==1) k--;
        if(k<-1) printf("NO\n");
        else printf("YES\n");
    }
}