#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,count=0,b,i;
        scanf("%lld",&n);
        vector<int>a;
        for(i=1;i<=n;i++) {
            scanf("%lld",&b);
            if(b<i){
                count+=(lower_bound(a.begin(),a.end(),b))-a.begin();
                a.push_back(i);
            }
        }
        printf("%lld\n",count);
    }
}