#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define int long long
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,x,y,c1=0,c2=0,c=0;
        scanf("%lld",&n);
        int a[n+1],b[n+1];
        for(int i=0;i<=n;i++) a[i]=b[i]=0;
        for(int i=0;i<n;i++) {
            scanf("%lld %lld",&x,&y);
            if(y==1) a[x]++;
            else b[x]++;
        }
        for(int i=0;i<=n;i++){
            if(a[i]!=0) c1++;
            if(b[i]!=0) c2++;
        }
        for(int i=0;i<=n;i++){
            if(a[i]==1 && b[i]==1){
                c+=(c1-1)+(c2-1);
            }
        }
        for(int i=1;i<n;i++){
            if(a[i]!=0 && b[i-1]!=0 && b[i+1]!=0) c++;
            if(b[i]!=0 && a[i-1]!=0 && a[i+1]!=0) c++;
        }
        printf("%lld\n",c);

    }
}