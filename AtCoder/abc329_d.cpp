#include<iostream>
#include<map>
using namespace std;
int main(){
    int n,m,x,y,max=0;
    scanf("%d %d",&n,&m);
    map<int,int> mp;
    for(int i=0;i<m;i++){
        scanf("%d",&x);
        mp[x]++;
        if(mp[x]>max){
            max=mp[x];
            y=x;
        }
        else if(mp[x]==max && x<y) y=x;
        printf("%d\n",y);
    }
}