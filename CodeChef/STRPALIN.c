#include<stdio.h>
#define int long long
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        char s1[10000],s2[10000];
        scanf("%s %s",s1,s2);
        int a[26]={0},f=0;
        for(int i=0;s1[i];i++) a[s1[i]-'a']++;
        for(int i=0;s2[i];i++) if(a[s2[i]-'a']!=0) f=1;
        if(f) printf("Yes\n");
        else printf("No\n");
    }
}

