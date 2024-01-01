#include<iostream>
#include<map>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,max=0;
        scanf("%d",&n);
        int s[n][60];
        map<int,int>mp;
        map<int,int>:: iterator it,it2;
        for(int i=0;i<n;i++){
            scanf("%d",&s[i][0]);
            for(int j=1;j<=s[i][0];j++){
                scanf("%d",&s[i][j]);
                mp[s[i][j]]++;
            } 
        }
        for(it=mp.begin();it!=mp.end();it++){
            int a[60]={0},c=0;
            for(it2=mp.begin();it2!=mp.end();it2++) a[it2->first]=it2->second;
            for(int i=0;i<n;i++){
                for(int j=1;j<=s[i][0];j++){
                    if(s[i][j]==it->first){
                        for(int k=1;k<=s[i][0];k++) a[s[i][k]]--;
                        break;
                    }
                }
            }
            for(int i=0;i<60;i++) if(a[i]>0) c++;
            if(c>max) max=c;
        }
        printf("%d\n",max);
    }
}