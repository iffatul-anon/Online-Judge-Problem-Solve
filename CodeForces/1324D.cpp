#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    long long n,count=0;
    scanf("%lld",&n);
    int a[n],b;
    vector<int>v(n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++) {
        scanf("%d",&b);
        v[i]=a[i]-b;
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        if(v[i]<=0) continue;
        count+=i-(lower_bound(v.begin(),v.end(),1-v[i])-v.begin());
    }
    printf("%lld\n",count);
}