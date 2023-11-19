#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    int n,c=1;
    scanf("%d",&n);
    vector<pair<int,int> >v(n);
    for(int i=0;i<n;i++){
        scanf("%d",&v[i].first);
        v[i].second=i;
    }
    sort(v.begin(),v.end());
    for(int i=1;i<n;i++) if(v[i-1].second>v[i].second) c++;
    printf("%d\n",c);
}