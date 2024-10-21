#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n;
    cin>>n;
    int a[n],b[n],c[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int l=1,r=n-2,sum1=a[0],sum2=a[n-1];
    b[0]=a[0];
    for(int i=1;i<n;i++) b[i]=b[i-1]+a[i];
    c[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--) c[i]=c[i+1]+a[i];
    int mn=llabs(b[0]-c[1]);
    for(int i=1;i<n-1;i++) if(llabs(b[i]-c[i+1])<mn) mn=llabs(b[i]-c[i+1]);
    cout<<mn<<endl;
}
