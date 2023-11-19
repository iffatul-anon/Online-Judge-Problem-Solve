#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    int n,m,c=1,a,b,x,y,f1,f2,f3,f4,f5,f6,ff1,ff2,ff3,ff4,ff5,ff6;
    scanf("%d %d",&n,&m);
    vector<pair<int,int> >v(n+2);
    vector<int>vv(n+2);
    vv[0]=0;
    v[0].first=0;
    v[0].second=0;
    v[n+1].first=n+1;
    v[n+1].second=n+1;
    for(int i=1;i<=n;i++){
        scanf("%d",&vv[i]);
        v[i].first=vv[i];
        v[i].second=i;
    }
    sort(v.begin(),v.end());
    for(int i=1;i<=n;i++) if(v[i-1].second>v[i].second) c++;
    for(int i=0;i<m;i++){
        scanf("%d %d",&a,&b);
        x=vv[a];
        y=vv[b];
        vv[a]=y;
        vv[b]=x;
        if(x>y){
            int tem=x;
            x=y;
            y=tem;
        }

        f1=v[x-1].second;
        f2=v[x].second;
        f3=v[x+1].second;

        f4=v[y-1].second;
        f5=v[y].second;
        f6=v[y+1].second;

        v[x].second=f5;
        v[y].second=f2;

        ff1=v[x-1].second;
        ff2=v[x].second;
        ff3=v[x+1].second;

        ff4=v[y-1].second;
        ff5=v[y].second;
        ff6=v[y+1].second;

        if(f1<f2 && ff1>ff2) c++;
        else if(f1>f2 && ff1<ff2) c--;
        if(f2<f3 && ff2>ff3) c++;
        else if(f2>f3 && ff2<ff3) c--;

        if(y-x>1 && f4<f5 && ff4>ff5) c++;
        else if(y-x>1 && f4>f5 && ff4<ff5) c--;
        if(f5<f6 && ff5>ff6) c++;
        else if(f5>f6 && ff5<ff6) c--;
        
        printf("%d\n",c);
    }
}