#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,f=0;
        scanf("%d",&n);
        int a[n],b[n],c[n];
        vector<pair<int,int> > v1(n),v2(n);
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            v1[i].first=a[i];
            v1[i].second=i;
            c[i]=0;
        }
        for(int i=0;i<n;i++){
            scanf("%d",&b[i]);
            v2[i].first=b[i];
            v2[i].second=i;
        }
        sort(v2.begin(),v2.end());
        for(int i=0;i<n;i++){
            if(v2[i].first==a[v2[i].second]){
                c[v2[i].second]=1;
                continue;
            }
            if(v2[i].first<a[v2[i].second]){
                f=1;
                break;
            }
            f=1;
            for(int j=v2[i].second+1;j<n;j++){
                if(a[j]==v2[i].first){
                    f=0;
                    c[v2[i].second]=1;
                    for(int k=j;k>=v2[i].second;k--) a[k]=v2[i].first;
                    break;
                }
                if(a[j]>v2[i].first || c[j]==1) break;
            }
            if(f==1){
                for(int j=v2[i].second-1;j>=0;j--){
                    if(a[j]==v2[i].first){
                        f=0;
                        c[v2[i].second]=1;
                        for(int k=j;k<=v2[i].second;k++) a[k]=v2[i].first;
                        break;
                    }
                    if(a[j]>v2[i].first || c[j]==1) break;
                }
            }
            if(f==1) break;
        }
        if(f==1) printf("NO\n");
        else printf("YES\n");
    }
}