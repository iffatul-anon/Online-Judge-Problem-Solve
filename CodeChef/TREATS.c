#include<stdio.h>
#define int long long
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,m;
        scanf("%lld %lld",&n,&m);
        int a[100]={0},b[100]={0},x;
        for(int i=0;i<n;i++){
            scanf("%lld",&x);
            a[x%m]++;
        }
        for(int i=0;i<n;i++){
            scanf("%lld",&x);
            b[x%m]++;
        }
        x=0;
        for(int i=0;i<m;i++){
            if(a[i]){
                for(int j=0;j<m;j++){
                    if(b[j]){
                        if((i+j)%m==0) {
                            x+=a[i]*b[j];
                        }
                    }
                }
            }
        }
        printf("%lld\n",x);
    }
}
