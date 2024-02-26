#include<iostream>
#include<map>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m,k,c=0,c1=0,c2=0,a;
        scanf("%d %d %d",&n,&m,&k);
        map<int,int>mp1,mp2,mp3;
        for(int i=0;i<n;i++) {
            scanf("%d",&a);
            if(a<=k) {
                mp1[a]++;
                mp3[a]=1;
            }
        }
        for(int i=0;i<m;i++) {
            scanf("%d",&a);
            if(a<=k) {
                mp2[a]++;
                if(mp3[a] && mp2[a]==1) c++;
                else mp3[a]=1;
            }
        }
        c1=mp1.size()-c;
        c2=mp2.size()-c;
        if(c1+c<k/2 || c2+c<k/2 || mp3.size()<k) printf("NO\n");
        else printf("YES\n");
    }
}