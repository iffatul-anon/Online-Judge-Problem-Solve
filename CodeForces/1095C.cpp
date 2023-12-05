#include<iostream>
#include<map>
using namespace std;
int main(){
    int n,k,x,y=0,z=0;
    map<int,int>mp;
    map<int,int>:: iterator it;
    scanf("%d %d",&n,&k);
    int a[32],b[32]={0};
    a[0]=1;
    for(int i=1;i<32;i++) a[i]=a[i-1]*2;
    x=n;
    while(x>0){
        b[z]=x%2;
        x/=2;
        if(b[z]==1) {
            y++;
            mp[a[z]]++;
        }
        z++;
    }
    if(n<k || y>k) printf("NO\n");
    else {
        while(y<k){
            it=mp.end();
            it--;
            x=it->first;
            mp[x]--;
            if(mp[x]==0) mp.erase(x);
            mp[x/2]+=2;
            y++;
        }
        printf("YES\n");
        for(it=mp.begin();it!=mp.end();it++) for(int i=0;i<it->second;i++) printf("%d ",it->first);
        printf("\n");
    }
}