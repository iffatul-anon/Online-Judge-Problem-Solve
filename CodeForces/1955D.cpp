#include<iostream>
#include<map>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m,k,c=0,anon=0;
        scanf("%d %d %d",&n,&m,&k);
        int a[n],b[m];
        map<int,int>mp,mp2,mp3;
        for(int i=0;i<n;i++) scanf("%d",&a[i]);
        for(int i=0;i<m;i++){
            scanf("%d",&b[i]);
            mp[b[i]]++;
            mp3[b[i]]++;
            mp2[a[i]]++;
        }
        for(int i=0;i<m;i++){
            if(mp3[a[i]]){
                c++;
                mp3[a[i]]--;
            }
        }
        if(c>=k) anon=1;
        for(int i=m;i<n;i++){
            if(a[i]==a[i-m]) {
                if(c>=k) anon++;
                continue;
            }
            mp2[a[i]]++;
            mp2[a[i-m]]--;
            if(mp2[a[i-m]]<mp[a[i-m]]) c--;
            if(mp2[a[i]]<=mp[a[i]]) c++;
            if(c>=k) anon++;
        }
        printf("%d\n",anon);
    }
}