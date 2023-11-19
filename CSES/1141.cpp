#include<bits/stdc++.h>
#include<map>
using namespace std;
int main(){
    int n,max=0,x=0,y=0,j;
    scanf("%d",&n);
    int a[n+1];
    map<int,int>mp;
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    for(int i=1;i<=n;i++){
        if(mp[a[i]]>y) {
            x=mp[a[i]];
            y=x;
            for(j=i+1;j<n;j++) {
                if(mp[a[j]]>=x) {
                    if(a[j]==a[i]) y=i;
                    else y=mp[a[j]];
                    break;
                }
                mp[a[j]]=j;
                if(j-x>max) max=j-x;
            }
            j--;
            if(j-x>max) max=j-x;
            mp[a[i]]=i;
            i=j;
        }
        else {
            mp[a[i]]=i;
            if(i-y>max) max=i-y;
        }
    }
    printf("%d\n",max);
}