#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,m,k,sum1=0;
        scanf("%lld %lld %lld",&n,&m,&k);
        long long a[n],b[m],c,d;
        for(int i=0;i<n;i++) {
            scanf("%lld",&a[i]);
            sum1+=a[i];
        }
        for(int i=0;i<m;i++) scanf("%lld",&b[i]);
        sort(a,a+n);
        sort(b,b+m);
        if(k%2==1 && a[0]>=b[m-1]) printf("%lld\n",sum1);
        else if(k%2==1) printf("%lld\n",sum1-a[0]+b[m-1]);
        else if(a[0]>=b[m-1]) printf("%lld\n",sum1-a[n-1]+b[0]);
        else {
            if(a[0]<b[0]) c=a[0];
            else c=b[0];
            if(a[n-1]>b[m-1]) d=a[n-1];
            else d=b[m-1];
            printf("%lld\n",sum1-a[0]+b[m-1]-d+c);
        }
    }
}