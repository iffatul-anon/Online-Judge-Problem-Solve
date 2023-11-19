#include<bits/stdc++.h>
#include<set>
using namespace std;
int main(){
    int n,k;
    scanf("%d",&n);
    multiset<int>s;
    for(int i=0;i<n;i++){
        scanf("%d",&k);
        if(s.upper_bound(k)!=s.end()) s.erase(s.upper_bound(k));
        s.insert(k);
    }
    printf("%lu\n",s.size());
}