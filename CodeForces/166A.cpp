#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool sortbyCond(const pair<int, int>& a,const pair<int, int>& b){
    if (a.first != b.first) return (a.first > b.first);
    else return (a.second < b.second);
}
int main(){
    int n,k,c=0;
    scanf("%d %d",&n,&k);
    vector<pair<int,int> > v(n);
    for(int i=0;i<n;i++) scanf("%d %d",&v[i].first,&v[i].second);
    sort(v.begin(),v.end(),sortbyCond);
    for(int i=0;i<n;i++) if(v[i].first==v[k-1].first && v[i].second==v[k-1].second) c++;
    printf("%d\n",c);
}