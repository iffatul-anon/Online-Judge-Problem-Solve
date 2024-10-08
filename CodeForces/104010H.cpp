#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    int n,c=0;
    scanf("%lld",&n);
    char s[n+1];
    int a[n+10];
    for(int i=0;i<=n;i++) a[i]=0;
    scanf("%s",s);
    for(int i=0;i<n;i++){
        if(s[i]=='A') c++;
    }
    int l=0,r=n-1,x=n+1,f=1;
    while(l<=r){
        if(f){
            int f2=0;
            for(int i=l;i<=r;i++){
                if(s[i]=='A'){
                    a[i]=x;
                    x--;
                    l=i+1;
                    f=0;
                    f2=1;
                    break;
                }
            }
            if(f2==0) break;
        }
        else{
            int f2=0;
            for(int i=r;i>=l;i--){
                if(s[i]=='A'){
                    a[i+1]=x;
                    x--;
                    r=i-1;
                    f=1;
                    f2=1;
                    break;
                }
            }
            if(f2==0) break;
        }
    }
    for(int i=0;i<=n;i++){
        if(a[i]==0) a[i]=x--;
    }
    for(int i=0;i<=n;i++){
        printf("%lld ",a[i]);
    }
    printf("\n");
}

