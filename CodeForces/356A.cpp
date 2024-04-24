#include <iostream>
#include <set>
using namespace std;
int main(){
    int n,m,l,r,x;
    scanf("%d %d",&n,&m);
    int a[n+1];
    set<int>s;
    set<int>:: iterator it,it2;
    for(int i=1;i<=n;i++) s.insert(i);
    for(int i=0;i<m;i++){
        scanf("%d %d %d",&l,&r,&x);
        it=s.lower_bound(l);
        while(it!=s.end()){
            if(*it>r) break;
            if(*it!=x) a[*it]=x;
            it++;
        }
        it=s.lower_bound(l);
        it2=s.upper_bound(r);
        s.erase(it,it2);
        s.insert(x);
    }
    a[x]=0;
    for(int i=1;i<=n;i++) printf("%d ",a[i]);
    printf("\n");
}