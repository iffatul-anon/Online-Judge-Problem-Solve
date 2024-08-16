#include<stdio.h>
#include<string.h>
#define int long long
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        char s[100];
        scanf("%s",s);
        int n=strlen(s),f=0;
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                f=i+1;
                break;
            }
        }
        if(s[f]=='a') {
            for(int i=0;i<f;i++) printf("%c",s[i]);
            printf("b",s);
            for(int i=f;i<n;i++) printf("%c",s[i]);
            printf("\n");
        }
        else {
            for(int i=0;i<f;i++) printf("%c",s[i]);
            printf("a",s);
            for(int i=f;i<n;i++) printf("%c",s[i]);
            printf("\n");
        }
    }
}