#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,n1,n2,i;
    double sum,sum1=0,sum2=0;
    scanf("%lld %lld %lld",&n,&n1,&n2);
    long long a[n];
    for(int i=0;i<n;i++) scanf("%lld",&a[i]);
    sort(a,a+n);
    if(n1<n2){
        for(i=n-1;i>=n-n1;i--) sum1+=a[i];
        for(i=i;i>=n-n1-n2;i--) sum2+=a[i];
        sum=sum1/n1+sum2/n2;
        printf("%0.8f\n",sum);
    }
    else{
        for(i=n-1;i>=n-n2;i--) sum1+=a[i];
        for(i=i;i>=n-n1-n2;i--) sum2+=a[i];
        float sum=sum1/n2+sum2/n1;
        printf("%0.8f\n",sum);
    }
}