#include<iostream>
#include<map>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,sum=0,f1=0,f2=0,f3=0,f4=0;
        scanf("%lld",&n);
        long long a[n];
        map<long long,long long>mp;
        map<long long,long long>:: iterator it;
        for(int i=0;i<n;i++) {
            scanf("%lld",&a[i]);
            mp[a[i]]++;
        }
        it=mp.end();
        it--;
        while(it!=mp.begin()){
            f1+=it->second;
            f2=it->second;
            if(f2>2){
                f3=f2*(f2-1)*(f2-2);
                f4=(f2*(f2-1))/2;
                sum+=(f4*(n-f1))+(f3/6);
            }
            else if(f2==2) sum+=(n-f1);
            it--;
        }
        f1+=it->second;
        f2=it->second;
        if(f2>2){
            f3=f2*(f2-1)*(f2-2);
            sum+=(f3/6);
        } 
        printf("%lld\n",sum);
    }
}