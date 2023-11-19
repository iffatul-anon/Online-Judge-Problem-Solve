#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    char s[n+1];
    scanf("%s",s);
    int a[n],c[m+1];
    for(int i=0;i<=m;i++) c[i]=-1;
    vector<string> v(m+1);
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]);
        v[a[i]]+=s[i];
    }
    for(int i=0;i<n;i++){
        if(c[a[i]]==-1) {
            cout<<v[a[i]][v[a[i]].size()-1];
            c[a[i]]++;
        }
        else cout<<v[a[i]][c[a[i]]++];
    }
}