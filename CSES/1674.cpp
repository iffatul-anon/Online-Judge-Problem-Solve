#include<iostream>
#include<algorithm>
#include<vector>
#define int long long
using namespace std;
const int N=2e5+10;
vector<int>tree[N];
int ans[N];
void dfs(int i){
    if(tree[i].size()==0){
        ans[i]=0;
        return;
    }
    for(int j:tree[i]){
        dfs(j);
        ans[i]+=ans[j]+1;
    }
    return;
}
signed main(){
    int n,x;
    scanf("%lld",&n);
    for(int i=2;i<=n;i++){
        scanf("%lld",&x);
        tree[x].push_back(i);
    }
    dfs(1);
    for(int i=1;i<=n;i++) printf("%lld ",ans[i]);
    printf("\n");
}