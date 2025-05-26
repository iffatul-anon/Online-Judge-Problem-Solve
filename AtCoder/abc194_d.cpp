#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
double dp[N];
int vis[N];
int n;
double ok(int i){
    if(i==n) return 0;
    if(vis[i]) return dp[i];
    vis[i]=1;
    double sum = ((double)n/(double)(n-i))+ok(i+1);
    return dp[i]=sum;
}


int main() {
	cin>>n;
	printf("%0.11lf\n",ok(1));
}
