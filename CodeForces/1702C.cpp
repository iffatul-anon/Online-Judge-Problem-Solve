#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k,u,a,b;
        scanf("%d %d",&n,&k);
        map<int,int>mp1,mp2;
        for(int i=0;i<n;i++){
            scanf("%d",&u);
            if(mp2[u]) mp2[u]=i+1;
            else{
                mp1[u]=i+1;
                mp2[u]=i+1;
            }
        }
        for(int i=0;i<k;i++){
            scanf("%d %d",&a,&b);
            if(mp1[a] && mp1[b]){
                if(mp1[a]<=mp2[b]) printf("YES\n");
                else printf("NO\n");
            }
            else printf("NO\n");
        }
    }
}