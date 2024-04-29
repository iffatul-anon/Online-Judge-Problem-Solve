#include<iostream>
#include<map>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,a,z=1,f=0;
        scanf("%d",&n);
        map<int,int>mp;
        map<int,int>:: iterator it;
        for(int i=0;i<n;i++){
            scanf("%d",&a);
            mp[a]++;
        }
        it=mp.begin();
        while(it!=mp.end()){
            if(it->first==z) z++;
            else f=1;
            it++;
        }
        z--;
        z+=f;
        if(z%2) printf("Alice\n");
        else printf("Bob\n");
    }
}