#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    int n;
    double x,y,mx1=0,my1=0,mx2=10000000000,my2=10000000000;
    scanf("%lld",&n);
    for(int i=0;i<n;i++){
        scanf("%lf %lf",&x,&y);
        if(x>mx1) mx1=x;
        if(x<mx2) mx2=x;
        if(y>my1) my1=y;
        if(y<my2) my2=y;
    }
    x=mx1-mx2;
    y=my1-my2;
    printf("%lf\n",x*y);

}
