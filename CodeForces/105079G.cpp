#include<iostream>
#include<map>
using namespace std;
int main(){
    long long n,sum=0,a;
    scanf("%lld",&n);
    map<long long,long long>mp;
    map<long long,long long>:: iterator it;
    for(int i=0;i<n;i++){
        scanf("%lld",&a);
        mp[a]++;
    }
    for(int i=0;i<n;i++){
        scanf("%lld",&a);
        sum+=a;
        it=mp.end();
        it--;
        a=it->first+sum;
        it->second--;
        if(it->second==0) mp.erase(it);
        a=a-(a/2);
        mp[a-sum]++;
    }
    it=mp.begin();
    a=0;
    while(it!=mp.end()){
        a+=(it->first+sum)*it->second;
        it++;
    }
    printf("%lld\n",a);
}