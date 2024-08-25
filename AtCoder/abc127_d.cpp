#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    int n,m,mx=0,sum=0,x;
    scanf("%lld %lld",&n,&m);
    int a[n],b[m],c[m];
    vector<pair<int,int> > v(m);
    for(int i=0;i<n;i++) scanf("%lld",&a[i]);
    sort(a,a+n);
    for(int i=0;i<m;i++) {
        scanf("%lld %lld",&b[i],&c[i]);
        v[i].first=c[i];
        v[i].second=b[i];
    }
    sort(v.begin(),v.end());
    x=m-1;
    for(int i=0;i<n;i++){
        if(a[i]<v[x].first){
            a[i]=v[x].first;
            v[x].second--;
        }
        if(v[x].second==0) x--;
        if(x<0) break;
    }
    for(int i=0;i<n;i++) sum+=a[i];
    printf("%lld\n",sum);
}
