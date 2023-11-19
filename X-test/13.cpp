#include<iostream>
#include<algorithm>
#include<set>
#include<vector>
using namespace std;
int main(){
    int n,q,a,b,c;
    scanf("%d %d",&n,&q);
    vector<set<int> > v(n+1);
    for(int i=1;i<=n;i++){
        scanf("%d",&c);
        set<int>s;
        v[i].insert(c);
    }
    for(int i=0;i<q;i++){
        scanf("%d %d",&a,&b);
        for(int j : v[a]) v[b].insert(j);
        v[a].clear();
        printf("%lu\n",v[b].size());
    }
}