#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <cstring>
using namespace std;
#define int long long

int n,a,x,y;
double ok(int m){
    if(m==0) return 0;

    double sum;

    sum=x+ok(m/a);

    sum+=((6.0/5.0)*y)+((1.0/5.0)*(ok(m/2)+ok(m/3)+ok(m/4)+ok(m/5)+ok(m/6)));

    return sum;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	cin>>n>>a>>x>>y;

	printf("%0.16lf\n",ok(n));
}