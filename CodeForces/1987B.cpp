#include<iostream>
#include<algorithm>
#include<map>
#define int long long
using namespace std;
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,sum=0;
        scanf("%lld",&n);
        int a[n],b[n],x=0,y=0;
        for(int i=0;i<n;i++) scanf("%lld",&a[i]);
        for(int i=1;i<n;i++){
            if(a[i]<a[i-1]) {
                b[x++]=a[i-1]-a[i];
                a[i]=a[i-1];
            }
        }
        sort(b,b+x);
        for(int i=0;i<x;i++){
            y=b[i]-y;
            sum+=y*(x-i+1);
            y=b[i];
        }
        printf("%lld\n",sum);
    }
}