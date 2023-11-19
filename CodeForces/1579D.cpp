#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while (t--){
        int n,x,f,f2;
        scanf("%d",&n);
        vector<pair<int,int> > a;
        multiset<pair<int,int> > m;
        for (int i=0;i<n;i++){
            scanf("%d",&x);
            if (x!=0) m.insert(make_pair(x, i + 1));
        }
        multiset<pair<int,int> >::iterator it1, it2;
        while (m.size()>1){
            it1 = m.begin();
            it2 = m.end();
            it2--;
            a.push_back(make_pair(it1->second, it2->second));
            f = it1->first - 1;
            f2 = it1->second;
            m.erase(it1);
            if(f>0) m.insert(make_pair(f,f2));
            f = it2->first - 1;
            f2 = it2->second;
            m.erase(it2);
            if (f > 0) m.insert(make_pair(f,f2));
        }
        printf("%lu\n",a.size());
        for (int i=0;i<a.size();i++) printf("%d %d\n",a[i].first,a[i].second);
    }
}