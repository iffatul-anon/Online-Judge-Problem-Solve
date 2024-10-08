#include<iostream>
#include<algorithm>
#include<vector>
#define int long long
using namespace std;
const int N=1e5+10;
vector<int>graph[N];
int vis[N];
vector<int> cur;
vector<vector<int> >ans;
void dfs(int i,int p){
    cur.push_back(i);
    if(vis[i]) {
        if(ans.size()==0) ans.push_back(cur);
        return;
    }
    vis[i]=1;
    for(int j:graph[i]){
        if(vis[j] && j==p) continue;
        dfs(j,i);
        cur.pop_back();
    }
    return;
}
signed main(){
    int n,m,a,b,f=0,c=0;
    scanf("%lld %lld",&n,&m);
    for(int i=0;i<m;i++) {
        scanf("%lld %lld",&a,&b);
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    for(int i=1;i<=n;i++){
        if(vis[i]) continue;
        cur.clear();
        dfs(i,0);
    }
    if(ans.size()==0) printf("IMPOSSIBLE\n");
    else {
        for(int i:ans[0]) {
            if(i==ans[0].back()) f=1;
            if(f) c++;
        }
        printf("%lld\n",c);
        f=0;
        for(int i:ans[0]) {
            if(i==ans[0].back()) f=1;
            if(f) printf("%lld ",i);
        }
        printf("\n");
    }
}