#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,count=0;
        scanf("%d",&n);
        vector<pair<int,int> > v(n);
        for(int i=0;i<n;i++) {
            scanf("%d",&v[i].first);
            v[i].second=i;
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n-1;i++) if(v[i].second>v[i+1].second) count++;
        printf("%d\n",count);
    }
}