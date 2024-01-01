#include<iostream>
#include<map>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,sum=0;
        scanf("%d",&n);
        char s[n+1];
        scanf("%s",s);
        map<char ,int>mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
            sum+=mp.size();
        }
        printf("%d\n",sum);
    }
}