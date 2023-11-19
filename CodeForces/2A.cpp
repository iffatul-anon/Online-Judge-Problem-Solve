#include<iostream>
#include<string.h>
#include<map>
#include<vector>
using namespace std;
int main(){
    int n,x,max=-1000000,anon;
    scanf("%d",&n);
    anon=n;
    char s[100];
    vector<pair<string,int> >v;
    vector<string> vv;
    map<string,int> mp;
    for(int i=0;i<n;i++){
        scanf("%s %d",s,&x);
        mp[s]+=x;
        v.push_back(make_pair(s,mp[s]));
    }
    map<string,int>:: iterator it;
    for(it=mp.begin();it!=mp.end();it++) if(it->second>max) max=it->second;
    for(it=mp.begin();it!=mp.end();it++) if(it->second==max) vv.push_back(it->first);
    for(int i=0;i<vv.size();i++){
        for(int j=0;j<n;j++) {
            if(j==anon) break;
            if(v[j].first==vv[i] && v[j].second>=max) {
                anon=j;
                break;
            }
        }
    }
    cout<<v[anon].first<<'\n';
}