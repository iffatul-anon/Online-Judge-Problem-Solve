#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,k,q,d,x,y,anon;
        scanf("%lld %lld %lld",&n,&k,&q);
        double a[k+1],b[k+1],z;
        a[0]=b[0]=0;
        for(int i=1;i<=k;i++) scanf("%lf",&a[i]);
        for(int i=1;i<=k;i++) scanf("%lf",&b[i]);
        for(int i=0;i<q;i++){
            scanf("%lld",&d);
            x=lower_bound(a,a+k+1,d)-a;
            if(a[x]==d) {
                anon=b[x];
                printf("%lld ",anon);
            }
            else{
                y=x-1;
                z=((b[x]-b[y])*(d-a[y]))/(a[x]-a[y]);
                anon=b[y]+z;
                printf("%lld ",anon);
            }
        }
        printf("\n");
    }
} 