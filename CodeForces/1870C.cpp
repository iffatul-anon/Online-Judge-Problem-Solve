#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k;
        scanf("%d %d",&n,&k);
        int a[n],b[k+1],c[n+1],x=1,y=n;
        for(int i=0;i<=k;i++) b[i]=0;
        vector<pair<int,int> > v(n);
        c[0]=1;
        for(int i=0;i<n;i++) {
            scanf("%d",&v[i].first);
            v[i].second=i+1;
            c[i+1]=0;
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++) {
            if(v[i].first==v[i-1].first){
                c[v[i].second]=1;
                continue;
            }
            while(c[x]!=0) x++;
            while(c[y]!=0) y--;
            b[v[i].first]=(y-x+1)*2;
            c[v[i].second]=1;
        }
        for(int i=1;i<=k;i++) printf("%d ",b[i]);
        printf("\n");
    }
}