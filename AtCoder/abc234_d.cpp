#include<iostream>
#include<set>
using namespace std;
int main(){
    int n,k,x,xx;
    scanf("%d %d",&n,&k);
    set<int>s;
    set<int>:: iterator it=s.begin();
    for(int i=1;i<=n;i++){
        scanf("%d",&x);
        if(i<=k) s.insert(x);
        if(i==k) {
            it=s.begin();
            printf("%d\n",*it);
        }
        if(i>k) {
            it=s.begin();
            xx=*it;
            if(xx<x){
                s.erase(it);
                s.insert(x);
            }
            it=s.begin();
            printf("%d\n",*it);
        }
    }
}
