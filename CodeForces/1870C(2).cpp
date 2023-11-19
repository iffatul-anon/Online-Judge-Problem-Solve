#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k;
        scanf("%d %d",&n,&k);
        int a[n],b[k+1],c[k+1];
        for(int i=0;i<=k;i++){
            b[i]=0;
            c[i]=0;
        }
        vector<pair<int,int> > v(n);
        set<int> s;
        for(int i=0;i<n;i++) {
            scanf("%d",&v[i].first);
            v[i].second=i+1;
            s.insert(i+1);
        }
        sort(v.begin(),v.end());
        set<int>:: iterator it;
        for(int i=0;i<n;i++) {
            int x,y;
            if(i>0 && v[i].first==v[i-1].first){
                s.erase(v[i].second);
                continue;
            }
            it=s.begin();
            x=*it;
            it=s.end();
            it--;
            y=*it;
            b[v[i].first]=(y-x+1)*2;
            s.erase(v[i].second);
        }
        for(int i=1;i<=k;i++) printf("%d ",b[i]);
        printf("\n");
    }
}