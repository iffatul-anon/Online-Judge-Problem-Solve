#include<iostream>
#include<algorithm>
#include<string.h>
#include<vector>
using namespace std;
bool sortbyCond(const pair<int, int>& a,const pair<int, int>& b){
    if (a.first != b.first)
        return (a.first > b.first);
    else
       return (a.second < b.second);
}
int main(){
    int n,c=0;
    scanf("%d",&n);
    char s[n+1];
    vector<pair<int,int> > v(n);
    for(int i=0;i<n;i++){
        scanf("%s",s);
        c=0;
        for(int i=0;i<n;i++) if(s[i]=='o') c++;
        v[i].first=c;
        v[i].second=i+1;
    }
    sort(v.begin(),v.end(),sortbyCond);
    for(int i=0;i<n;i++) printf("%d ",v[i].second);
    printf("\n");
}