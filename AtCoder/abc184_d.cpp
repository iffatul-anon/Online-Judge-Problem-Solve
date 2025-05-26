#include <bits/stdc++.h>
using namespace std;

double dp[110][110][110];
int vis[110][110][110];

double ok(int a,int b,int c){
    if(a==100 || b==100 || c==100) return 0;
    if(dp[a][b][c]) return dp[a][b][c];
    vis[a][b][c]=1;
    double sum,tot=a+b+c;
    sum+=(1+ok(a+1,b,c))*(double)a/tot;
    sum+=(1+ok(a,b+1,c))*(double)b/tot;
    sum+=(1+ok(a,b,c+1))*(double)c/tot;
    return dp[a][b][c]=sum;
}


int main() {
	int a,b,c;
	cin>>a>>b>>c;
	printf("%0.9lf\n",ok(a,b,c));
}
