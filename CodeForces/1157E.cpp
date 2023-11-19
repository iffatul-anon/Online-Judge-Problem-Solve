#include<iostream>
#include<map>
using namespace std;
int main() {
    int n;
    scanf("%d",&n);
    int a[n],b;
    map<int,int>mp;
    map<int,int>:: iterator it;
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++){ 
        scanf("%d",&b);
        mp[b]++;
    }
    for(int i=0;i<n;i++){
        b=n-a[i];
        it=mp.end();
        it--;
        if(it->first<b){
            it=mp.begin();
            printf("%d ",(a[i]+it->first)%n);
        }
        else if(mp.find(b)!=mp.end()){
            it=mp.find(b);
            printf("%d ",(a[i]+it->first)%n);
        }
        else{
            it=mp.upper_bound(b);
            printf("%d ",(a[i]+it->first)%n);
        }
        it->second--;
        if(it->second==0) mp.erase(it);
    }
}