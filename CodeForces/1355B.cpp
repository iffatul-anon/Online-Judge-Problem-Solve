#include<iostream>
#include<map>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,a,count=0,x,y,z=0;
        scanf("%d",&n);
        map<int,int>mp;
        for(int i=0;i<n;i++){
            scanf("%d",&a);
            mp[a]++;
        }
        map<int,int>:: iterator it;
        for(it=mp.begin();it!=mp.end();it++){
            x=it->first;
            y=it->second;
            count+=y/x;
            y=y%x;
            z+=y;
            count+=z/x;
            z=z%x;
        } 
        printf("%d\n",count);
    }
}