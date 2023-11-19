#include<iostream>
#include<map>
using namespace std;
int main(){
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        long long a[n],count=0;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            scanf("%lld",&a[i]);
            a[i]=a[i]-i;
            mp[a[i]]++;
        }
        for(int i=0;i<n;i++){
            count+=mp[a[i]]-1;
            mp[a[i]]--;
        }
        printf("%lld\n",count);
    }
}