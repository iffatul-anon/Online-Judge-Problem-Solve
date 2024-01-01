#include<iostream>
#include<map>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,a,x,y;
        scanf("%d",&n);
        map<int ,int>mp;
        map<int ,int>:: iterator it;
        for(int i=0;i<n;i++){
            scanf("%d",&a);
            mp[a]++;
        }
        if(mp.size()>2) printf("NO\n");
        else if(mp.size()==1) printf("YES\n");
        else{
            it=mp.begin();
            x=it->second;
            it++;
            y=it->second;
            if(abs(x-y)<2) printf("YES\n");
            else printf("NO\n");
        }
    }
}