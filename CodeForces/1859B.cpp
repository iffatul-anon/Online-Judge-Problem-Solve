#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,sum=0,min1=10000000000,min2=10000000000;
        scanf("%lld",&n);
        for(int i=0;i<n;i++){
            long long m,a,x,y;
            scanf("%lld",&m);
            map<int,int>mp;
            map<int,int>:: iterator it;
            for(int j=0;j<m;j++) {
                scanf("%lld",&a);
                mp[a]++;
            }
            it=mp.begin();
            if(it->second>1){
                x=it->first;
                y=it->first;
            }
            else{
                x=it->first;
                it++;
                y=it->first;
            }
            if(min1>x) min1=x;
            if(min2>y) min2=y;
            sum+=y;
        }
        printf("%lld\n",sum-min2+min1);
    }
}