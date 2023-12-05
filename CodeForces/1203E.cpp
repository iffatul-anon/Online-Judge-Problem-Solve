#include<iostream>
#include<map>
using namespace std;
int main(){
    int n,a,x,y,z;
    scanf("%d",&n);
    map<int,int>mp;
    map<int,int>:: iterator it=mp.begin();
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        mp[a]++;
    }
    it=mp.end();
    it--;
    while(it!=mp.begin()){
        x=it->first;
        y=x+1;
        z=x-1;
        a=it->second;
        it--;
        if(a>2){
            mp[y]++;
            mp[z]++;
        }
        else if(a==2){
            if(!mp[y]) mp[y]++;
            else mp[z]++;
        }
        else if(a==1){
            if(!mp[y]){
                mp[y]++;
                mp.erase(x);
            }
        }
    }
    x=it->first;
    y=x+1;
    z=x-1;
    a=it->second;
    if(a>2){
        mp[y]++;
        if(z>0) mp[z]++;
    }
    else if(a==2){
        if(!mp[y]) mp[y]++;
        else if(z>0) mp[z]++;
    }
    printf("%d\n",mp.size());
}