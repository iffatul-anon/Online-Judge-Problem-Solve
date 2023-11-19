#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,f=0,c=0;
        scanf("%d",&n);
        int b[n];
        vector<pair<int,int> > v(n);
        for(int i=0;i<n;i++){
            scanf("%d",&v[i].first);
            v[i].second=i;
        }   
        for(int i=0;i<n;i++) {
            scanf("%d",&b[i]);
            if(b[i]==b[0]) c++;
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
            if(i!=v[i].second) {
                f=1;
                break;
            }
        }
        if(f==1 && c==n) printf("No\n");
        else printf("Yes\n");
    }
}