#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool sortbyCond(const pair<int, int>& a,const pair<int, int>& b){
    if (a.first != b.first) return (a.first < b.first);
    else return (a.second > b.second);
}
long long a[10005]={0}, p[10005],ind=0;
void sieve(){
    p[ind++]=2;
    for(long long i=3;i<=10005;i+=2){
        if(a[i]==0){
            p[ind++]=i;
            if(i*i>10005) continue;
            for(long long j=i*i;j<=10005;j+=2*i){
                a[j]=1;
            }
        }
    }
}
vector<pair<int,int> > fact(1001);
void factor(){
    int x,c,f;
    fact[0].first=0;
    fact[0].second=0;
    for(int i=1;i<=1000;i++){
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
    sort(fact.begin(),fact.end(),sortbyCond);
    fact[1].first=0;
    fact[1].second=1;
}
int main(){
    sieve();
    factor();
    int t;
    scanf("%d",&t);
    for(int j=1;j<=t;j++){
        int n;
        scanf("%d",&n);
        printf("Case %d: %d %d\n",j,fact[n].second,fact[n].first);
    }
}