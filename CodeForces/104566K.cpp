#include<iostream>
#include<map>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,x,c=0,max=0;
        scanf("%d",&n);
        map<int,int>mp;
        for(int i=0;i<n;i++){
            scanf("%d",&x);
            c=-1;
            while(x>0){
                c++;
                x=x/2;
            }
            mp[c]++;
            if(mp[c]>max) max=mp[c];
        }
        printf("%d\n",max);
    }
}