#include<iostream>
#include<map>
using namespace std;
int main(){
    long long t,q,x,y=0;
    scanf("%lld",&t);
    map<long long,long long>mp;
    map<long long,long long>:: iterator it;
    while(t--){
        scanf("%lld",&q);
        if(q==1){
            scanf("%lld",&x);
            mp[x-y]++;
        }
        else if(q==2){
            scanf("%lld",&x);
            y+=x;
        }
        else if(q==3){
            it=mp.begin();
            printf("%lld\n",it->first+y);
            it->second--;
            if(it->second==0) mp.erase(it);
        }
    }
}