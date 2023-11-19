#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n;
        scanf("%lld",&n);
        long long a[n],b[n+1],gcd,flag=0;
        for(int i=0;i<n;i++) scanf("%lld",&a[i]);
        for(int i=0;i<n;i++){
            gcd= __gcd(a[i],a[i+1]);
            b[i+1]=(a[i]*a[i+1])/gcd;
        }
        for(int i=1;i<n-1;i++){
            gcd= __gcd(b[i],b[i+1]);
            if(gcd!=a[i]){
                flag=1;
                break;
            }
        }
        if(flag==0) printf("YES\n");
        else printf("NO\n");
    }
}