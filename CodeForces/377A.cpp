#include<iostream>
#include<algorithm>
#include<vector>
#define int long long
using namespace std;
const int N=1e3+10;
char s[N][N];
int n,m,k,c=0,ans=0;
void dfs(int i,int j){
    if(i<0 || i>=n || j<0 || j>=m || s[i][j]=='#' || s[i][j]=='.') return;
    if(ans==c-k) return;
    s[i][j]='.';
    ans++;
    dfs(i+1,j);
    dfs(i-1,j);
    dfs(i,j+1);
    dfs(i,j-1);
    return;
}
signed main(){
    scanf("%lld %lld %lld",&n,&m,&k);
    for(int i=0;i<n;i++) {
        scanf("%s",s[i]);
        for(int j=0;j<m;j++) {
            if(s[i][j]=='.') {
                s[i][j]='X';
                c++;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(s[i][j]=='X') {
                dfs(i,j);
                break;
            }
        }
    }
    for(int i=0;i<n;i++) printf("%s\n",s[i]);
}