#include<iostream>
#include<map>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k,f=0;
        scanf("%d %d",&n,&k);
        int a[n];
        map<int,int>mp;
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            mp[a[i]]++;
            if(mp[a[i]]==k) f=1;
        }
        if(f) printf("%d\n",k-1);
        else printf("%d\n",n);

    }
}
