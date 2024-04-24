#include <iostream>
#include <map>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,c=0;
        scanf("%d",&n);
        int a[n];
        map<int,int>mp;
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            mp[a[i]]++;
            if(mp[a[i]]==2) c++;
        }
        printf("%d\n",c);
    }
}
