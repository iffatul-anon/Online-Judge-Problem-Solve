#include<iostream>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,x=0,y=0;
        scanf("%d",&n);
        int a[n];
        map<int ,int>mp;
        vector<pair<int,int> > v;
        for(int i=0;i<n;i++) {
            scanf("%d",&a[i]);
            mp[a[i]]++;
        }
        map<int,int>:: iterator it=mp.begin();
        while(it!=mp.end()){
            v.push_back(make_pair(it->second,it->first));
            it++;
        }
        sort(v.begin(),v.end());
        int l=v.size();
        if(l==1 || v[l-2].first==1) printf("-1\n");
        else{
            for(int i=0;i<n;i++){
                if(a[i]==v[l-1].second && x==0) {
                    printf("2 ");
                    x=1;
                }
                else if(a[i]==v[l-2].second && y==0){
                    printf("3 ");
                    y=1;
                }
                else printf("1 ");
            }
            printf("\n");
        }
    }
}