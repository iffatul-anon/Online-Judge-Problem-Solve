#include <iostream>
#include <map>
#include<algorithm>
using namespace std;
int main() {
    int n,w;
    long long count=0;
    scanf("%d %d",&n,&w);
    int a[n];
    map<int,int>mp;
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if(a[i]<=w) mp[a[i]]=1;
        else break;
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]<=w) mp[a[i]+a[j]]=1;
            else break;
            for(int k=j+1;k<n;k++){
                if(a[i]+a[j]+a[k]<=w) mp[a[i]+a[j]+a[k]]=1;
                else break;
            }
        }
    }
    printf("%lu\n",mp.size());
}