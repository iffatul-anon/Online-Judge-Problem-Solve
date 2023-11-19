#include<bits/stdc++.h>
#include<map>
using namespace std;
int main(){
    int n,m,c=0;
    char s[1000];
    scanf("%d %d",&n,&m);
    map<string,int>mp;
    for(int i=0;i<n;i++) {
        scanf("%s",s);
        mp[s]++;
    }
    for(int i=0;i<n;i++) {
        scanf("%s",s);
        if(mp[s]) c++;
    }
    if(n>m || (n==m && c%2==1)) printf("YES\n");
    else printf("NO\n");
}