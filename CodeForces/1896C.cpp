#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,x,count=0;
        scanf("%d %d",&n,&x);
        int a[n],b[n],c[n];
        vector<pair<int,int> > v1(n),v2(n);
        for(int i=0;i<n;i++) {
            scanf("%d",&a[i]);
            v1[i].first=a[i];
            v1[i].second=i;
        }
        for(int i=0;i<n;i++) {
            scanf("%d",&b[i]);
            v2[i].first=b[i];
            v2[i].second=i;
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        int i=n-x,j=0;
        for(j=0;j<n-x;j++){
            if(v1[j].first>v2[j+x].first) count++;
            c[v1[j].second]=v2[j+x].first;
        }
        for(j=0;j<x;j++){
            if(v1[j+i].first>v2[j].first) count++;
            c[v1[j+i].second]=v2[j].first;
        }
        if(count!=x) printf("NO\n");
        else{
            printf("YES\n");
            for(int i=0;i<n;i++) printf("%d ",c[i]);
            printf("\n");
        }
    }
}