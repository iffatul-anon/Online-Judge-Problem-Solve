#include <iostream>
#include <map>
using namespace std;
int main() {
    int n,a,max=0;
    scanf("%d",&n);
    map<string,int>mp;
    for(int i=0;i<n;i++){
        char s[100];
        int t;
        scanf("%s %d",s,&t);
        if(mp[s]) continue;
        mp[s]=t;
        if(t>max){
            max=t;
            a=i+1;
        }
    }
    printf("%d\n",a);
}