#include<stdio.h>
#include<string.h>
#define int long long
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,a[26]={0},f=1;
        scanf("%lld",&n);
        char s[n+1];
        scanf("%s",s);
        for(int i=0;i<n;i++) a[s[i]-'a']++;
        while(f){
            f=0;
            for(int i=0;i<26;i++){
                if(a[i]>0) {
                    f=1;
                    printf("%c",i+'a');
                    a[i]--;
                }
            }
        }
        printf("\n");
    }
}