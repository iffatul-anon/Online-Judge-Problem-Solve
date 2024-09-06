#include<iostream>
#include<algorithm>
#include<vector>
#define int long long
using namespace std;
const int N =2e5+10;
int a[N],vt[N];
vector<int>ar;
void dfs(int vertex){
    if(vt[vertex]) return;
    vt[vertex] = 1;
    ar.push_back(vertex);
    dfs(a[vertex]);
}
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,x;
        scanf("%lld",&n);
        int ans[n+1];
        char s[n+1];
        for(int i=0;i<=n;i++) vt[i]=0;
        for(int i=1;i<=n;i++){
            scanf("%lld",&a[i]);
        }
        scanf("%s",s);
        for(int i=1;i<=n;i++){
            if(vt[i]) continue;
            ar.clear();
            dfs(i);
            int c=0;
            for(int j:ar) if(s[j-1]=='0') c++;
            for(int j:ar) ans[j]=c;
        }
        for(int i=1;i<=n;i++) printf("%lld ",ans[i]);
        printf("\n");
    }
}