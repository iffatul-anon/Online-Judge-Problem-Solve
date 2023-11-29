#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>
using namespace std;
int main(){
    int q,c=0;
    scanf("%d",&q);
    vector<pair<string,string> > v(q),v2(q);
    string s1,s2;
    for(int i=0;i<q;i++) cin>>v[i].first>>v[i].second;
    for(int i=0;i<q;i++){
        if(v[i].first==".") continue;
        s1=v[i].first;
        s2=v[i].second;
        for(int j=i+1;j<q;j++){
            if(v[j].first==".") continue;
            if(v[j].first==s2){
                s2=v[j].second;
                v[j].first=".";
            }
        }
        v2[c].first=s1;
        v2[c++].second=s2;
    }
    printf("%d\n",c);
    for(int i=0;i<c;i++) cout<<v2[i].first<<" "<<v2[i].second<<'\n';
}