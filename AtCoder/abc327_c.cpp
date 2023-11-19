#include<iostream>
#include<map>
using namespace std;
int main(){
    int a[9][9],f=0;
    for(int i=0;i<9;i++) for(int j=0;j<9;j++) scanf("%d",&a[i][j]);
    map<int ,int> mp;
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++) mp[a[i][j]]++;
        if(mp.size()<9) f=1;
        mp.clear();
    }
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++) mp[a[j][i]]++;
        if(mp.size()<9) f=1;
        mp.clear();
    }
    for(int i=0;i<3;i++) for(int j=0;j<3;j++) mp[a[i][j]]++;
    if(mp.size()<9) f=1;
    mp.clear();
    for(int i=3;i<6;i++) for(int j=0;j<3;j++) mp[a[i][j]]++;
    if(mp.size()<9) f=1;
    mp.clear();
    for(int i=6;i<9;i++) for(int j=0;j<3;j++) mp[a[i][j]]++;
    if(mp.size()<9) f=1;
    mp.clear();
    for(int i=0;i<3;i++) for(int j=3;j<6;j++) mp[a[i][j]]++;
    if(mp.size()<9) f=1;
    mp.clear();
    for(int i=3;i<6;i++) for(int j=3;j<6;j++) mp[a[i][j]]++;
    if(mp.size()<9) f=1;
    mp.clear();
    for(int i=6;i<9;i++) for(int j=3;j<6;j++) mp[a[i][j]]++;
    if(mp.size()<9) f=1;
    mp.clear();
    for(int i=0;i<3;i++) for(int j=6;j<9;j++) mp[a[i][j]]++;
    if(mp.size()<9) f=1;
    mp.clear();
    for(int i=3;i<6;i++) for(int j=6;j<9;j++) mp[a[i][j]]++;
    if(mp.size()<9) f=1;
    mp.clear();
    for(int i=6;i<9;i++) for(int j=6;j<9;j++) mp[a[i][j]]++;
    if(mp.size()<9) f=1;
    mp.clear();
    if(f==0) printf("Yes\n");
    else printf("No\n");
}