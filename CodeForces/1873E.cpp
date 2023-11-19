#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,x;
        scanf("%lld %lld",&n,&x);
        long long a[n];
        for(int i=0;i<n;i++){
            scanf("%lld\n",&a[i]);
        }
        sort(a,a+n);
        long long sum=0,y=0,i,z=0;
        for(i=1;i<n;i++){
            y=(a[i]-a[i-1])*i;
            if(sum+y>x) break;
            else sum+=y;
        }
        z=x-sum;
        z=z/i;
        printf("%lld\n",a[i-1]+z);
    }
}