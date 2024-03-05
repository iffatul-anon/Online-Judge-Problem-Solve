#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
long long a[1000005]={0}, p[1000005],ind=0;
void sieve(){
    p[ind++]=2;
    for(long long i=3;i<=1000005;i+=2){
        if(a[i]==0){
            p[ind++]=i;
            if(i*i>1000005) continue;
            for(long long j=i*i;j<=1000005;j+=2*i){
                a[j]=1;
            }
        }
    }
}
vector<pair<int,int> > fact(1000001);
void factor(){
    int x,c,f;
    for(int i=1;i<=1000000;i++){
        c=0;
        x=i;
        for(int j=0;p[j]*p[j]<=i;j++){
            f=0;
            while(x%p[j]==0){
                f=1;
                x/=p[j];
            }
            if(f) c++;
        }
        if(x>1) c++;
        fact[i].first=c;
        fact[i].second=i;
    }
    sort(fact.begin(),fact.end());
}
int main(){
    sieve();
    factor();
    
}