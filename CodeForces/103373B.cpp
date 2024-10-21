#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,sum=1;
        cin>>n;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                sum+=(i+(n/i));
                if(i==n/i) sum-=i;
            }
        }
        if(n==1) sum=0;
        if(sum<n) cout<<"deficient"<<endl;
        else if(sum>n) cout<<"abundant"<<endl;
        else cout<<"perfect"<<endl;
    }
}
