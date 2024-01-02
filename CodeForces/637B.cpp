#include<iostream>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<string,int>mp;
    vector<pair<int,string> > v;
    string s;
    for(int i=1;i<=n;i++){
        cin>>s;
        mp[s]=i;
    }
    map<string,int>:: iterator it=mp.begin();
    while(it!=mp.end()){
        v.push_back(make_pair(it->second,it->first));
        it++;
    }
    sort(v.begin(),v.end());
    int l=v.size();
    for(int i=l-1;i>=0;i--) cout<<v[i].second<<"\n";
}