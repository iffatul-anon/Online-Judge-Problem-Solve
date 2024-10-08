#include<iostream>
#include<map>
using namespace std;
int main(){
    int n,q,a,f=0;
    scanf("%d",&n);
    map<int,int>mp;
    for(int i=0;i<n;i++) {
        scanf("%d",&a);
        mp[a]++;
    }
    scanf("%d",&q);
    for(int i=0;i<q;i++) {
        scanf("%d",&a);
        if(mp[a]) f++;
    }
    printf("%d\n",f);
}