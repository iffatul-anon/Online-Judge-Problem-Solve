#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n,k,x=0,sum=0;
    cin>>n>>k;
    int a[n];
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        int y=a[i],c=0;
        while(y){
            mp[c++]+=y%2;
            y/=2;
        }
    }
    int k2=k,c=0,c2=1,f=0,arr[100];
    while(k2){
        arr[c++]=k2%2;
        c2*=2;
        k2/=2;
    }
    c2/=2;
    for(int i=c-1;i>=0;i--){
        if(arr[i] || f){
            if(mp[i]<=n/2) x+=c2;
            else f=1;
        }
        c2/=2;
    }
    for(int i=0;i<n;i++) sum+=a[i]^x;
    cout<<sum<<endl;
}
