#include <iostream>
#include <map>
using namespace std;
int main() {
    int n,max=0,a;
    scanf("%d",&n);
    map<int,int>mp;
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        mp[a]++;
        if(mp[a]>max) max=mp[a];
    }
    if(n-max>n/2) {
        if(n%2==0)printf("%d\n",n/2);
        else printf("%d\n",n/2+1);
    }
    else printf("%d\n",max);
}