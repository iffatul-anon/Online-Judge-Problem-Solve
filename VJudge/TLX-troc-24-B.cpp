#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    int n;
    scanf("%lld",&n);
    int a[n],a1[n],a2[n],a3[n],a4[n],sum1=0,sum2=0,sum3=0,sum4=0,sum=0;
    for(int i=0;i<n;i++) {
        scanf("%lld",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(i%2==0) sum1+=a[i];
        else sum2+=a[i];
        a1[i]=sum1;
        a2[i]=sum2;
    }
    for(int i=n-1;i>=0;i--){
        if(i%2==0) sum3+=a[i];
        else sum4+=a[i];
        a3[i]=sum3;
        a4[i]=sum4;
    }
    //for(int i=0;i<n;i++){
        //printf("%lld %lld %lld %lld\n",a1[i],a2[i],a3[i],a4[i]);
    //}
    int x,y,mx=-10000000000;
    for(int i=0;i<n-1;i++){
        if(i%2==0){
            x=a1[i]-a2[i];
            y=a4[i+1]-a3[i+1];
            if(x-y>mx) mx=x-y;
        }
        else{
            x=a2[i]-a1[i];
            y=a3[i+1]-a4[i+1];
            if(llabs(y-x)>mx) mx=llabs(y-x);
        }
    }
    printf("%lld\n",mx);
}

