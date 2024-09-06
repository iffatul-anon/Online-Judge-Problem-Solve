#include<iostream>
#include<algorithm>
#include<vector>
#define int long long
using namespace std;
char s[1001][1001];
int a[1001][1001];
int n,m;
void dfs(int i,int j){
    if(i<0 || i>=n || j<0 || j>=m || a[i][j] || s[i][j]=='#') return;
    a[i][j]=1;
    dfs(i+1,j);
    dfs(i-1,j);
    dfs(i,j+1);
    dfs(i,j-1);
    return;
}
signed main(){
    int c=0;
    scanf("%lld %lld",&n,&m);
    for(int i=0;i<n;i++) scanf("%s",s[i]);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j] || s[i][j]=='#') continue;
            c++;
            dfs(i,j);
        }
    }
    printf("%lld\n",c);
}