#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        vector<pair<int,int> > v1(n);
        for(int i=0;i<n;i++) scanf("%d",&v1[i].first);
        for(int i=0;i<n;i++) scanf("%d",&v1[i].second);
        sort(v1.begin(),v1.end());
        for(int i=0;i<n;i++) printf("%d ",v1[i].first);
        printf("\n");
        for(int i=0;i<n;i++) printf("%d ",v1[i].second);
        printf("\n");
    }
}