#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    long long n,sum=0;
    scanf("%lld",&n);
    long long a[n];
    for(int i=0;i<n;i++){
        scanf("%lld",&a[i]);
        sum+=a[i];
    }
    sort(a,a+n);
    if(sum%2==0) printf("%lld\n",sum);
    else{
        for(int i=0;i<n;i++){
            if(a[i]%2==1){
                sum-=a[i];
                break;
            }
        }
        printf("%lld\n",sum);
    }
}