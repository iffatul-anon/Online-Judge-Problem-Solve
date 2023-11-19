#include<iostream>
#include<algorithm>
#include<string.h>
#include<vector>
using namespace std;
int main(){
    long long n,m,max=0,c=0,c2=0;
    scanf("%lld %lld",&n,&m);
    vector<pair<long long,long long> > v(m);
    for(int i=0;i<m;i++){
        scanf("%lld",&v[i].first);
        v[i].second=i;
    }
    char s[n][m+1];
    long long a[n];
    for(int i=0;i<n;i++) {
        scanf("%s",s[i]);
        a[i]=i+1;
        for(int j=0;j<m;j++) if(s[i][j]=='o') a[i]+=v[j].first;
        if(a[i]>max) {
            max=a[i];
            c=0;
        }
        if(a[i]==max) c++;
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        c2=0;
        if(c==1 && a[i]==max) printf("0\n");
        else{
            for(int j=m-1;j>=0;j--){
                if(s[i][v[j].second]=='x') {
                    a[i]+=v[j].first;
                    c2++;
                }
                if(a[i]>max) break;
            }
            printf("%lld\n",c2);
        }
    }
}