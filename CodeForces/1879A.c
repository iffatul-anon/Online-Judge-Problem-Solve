#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,f=0,max=0,c=0;
        scanf("%lld",&n);
        long long s[n],e[n];
        scanf("%lld %lld",&s[0],&e[0]);
        for(int i=1;i<n;i++){
            scanf("%lld %lld",&s[i],&e[i]);
            if(s[i]>=s[0] && e[i]>=e[0]) f=1;
        }
        if(f==1) printf("-1\n");
        else printf("%lld\n",s[0]);
    }
}