#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N=110;
int a[N],n;
int dp[N][N*N];
vector<int> v,bob;
bool ok=false;

bool func(int i,int sum){
    if(sum==0){
        if(ok==false) for(int it:v) bob.push_back(it);
        ok=true;
        return true;
    }
    if(i<0) return false;
    if(dp[i][sum]!=-1) return dp[i][sum];
    int isP=func(i-1,sum);
    if(sum-a[i]>=0){
        v.push_back(a[i]);
        isP |= func(i-1,sum-a[i]);
        v.pop_back();
    }
    return dp[i][sum]=isP;
}



signed main(){
    memset(dp,-1,sizeof(dp));
    int sum=0;
    map<int,int>mp;
    vector<int> alex;
    scanf("%lld",&n);
    int ans[n+10];
    for(int i=0;i<n;i++) {
        scanf("%lld",&a[i]);
        sum+=a[i];
        mp[a[i]]++;
    }
    //for(pair<int,int> it:mp) printf("%lld %lld\n",it.first,it.second);
    if(sum%2) printf("-1\n");
    else{
        sum=sum/2;
        if(func(n-1,sum)){
            for(int it:bob) mp[it]--;
            for(pair<int,int> it:mp){
                while(it.second){
                    alex.push_back(it.first);
                    it.second--;
                }
            }
            //for(int it:bob) printf("%lld ",it);
            //printf("\n");
            //for(int it:alex) printf("%lld ",it);
            //printf("\n");
            int sum1=0,sum2=0,x=0,i=0,j=0;
            while(x<n){
                if(sum1<=sum2){
                    sum1+=alex[i];
                    ans[x++]=alex[i++];
                }
                else{
                    sum2+=bob[j];
                    ans[x++]=bob[j++];
                }
            }
            for(int i=0;i<n;i++) printf("%lld ",ans[i]);
            printf("\n");
        }
        else printf("-1\n");
    }

}
