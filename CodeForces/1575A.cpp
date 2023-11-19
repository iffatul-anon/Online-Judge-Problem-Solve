#include<iostream>
#include<algorithm>
#include<string.h>
#include<vector>
using namespace std;
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    char s1[m+1];
    vector<pair<string,int> > s(n);
    for(int i=0;i<n;i++) {
        scanf("%s",s1);
        for(int j=1;j<m;j=j+2){
            s1[j]=25-(s1[j]-'A')+'A';
        }
        s[i].first=s1;
        s[i].second=i+1;
    }
    sort(s.begin(),s.end());
    for(int i=0;i<n;i++) printf("%d ",s[i].second);
    printf("\n");
}