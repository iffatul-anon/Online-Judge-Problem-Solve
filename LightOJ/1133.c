#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        int n,m;
        scanf("%d %d",&n,&m);
        long long a[n];
        for(int j=0;j<n;j++) scanf("%lld",&a[j]);
        for(int j=0;j<m;j++){
            char s[2];
            long long x,y;
            scanf("%s",s);
            if(s[0]=='S'){
                scanf("%lld",&x);
                for(int k=0;k<n;k++) a[k]+=x;
            }
            else if(s[0]=='M'){
                scanf("%lld",&x);
                for(int k=0;k<n;k++) a[k]*=x;
            }
            else if(s[0]=='D'){
                scanf("%lld",&x);
                for(int k=0;k<n;k++) a[k]/=x;
            }
            else if(s[0]=='P'){
                scanf("%lld %lld",&x,&y);
                long long tem=a[x];
                a[x]=a[y];
                a[y]=tem;
            }
            else if(s[0]=='R'){
                for(int k=0;k<n/2;k++){
                    long long tem=a[k];
                    a[k]=a[n-k-1];
                    a[n-k-1]=tem;
                }
            }
        }
        printf("Case %d:\n",i);
        for(int j=0;j<n;j++) printf("%lld ",a[j]);
        printf("\n");
    }
}
