#include<iostream>
#include<string.h>
#include<map>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,l;
        scanf("%d",&n);
        char s[n][10];
        map<string,int>mp;
        for(int i=0;i<n;i++){
            scanf("%s",s[i]);
            mp[s[i]]++;
        }
        for(int i=0;i<n;i++){
            l=strlen(s[i]);
            int flag=0;
            string s2;
            for(int j=0;j<l;j++){
                s2+=s[i][j];
                if(mp[s2]){
                    string s3;
                    for(int k=j+1;k<l;k++) s3+=s[i][k];
                    if(mp[s3]) flag=1;
                }
                if(flag==1) break;
            }
            if(flag==1) printf("1");
            else printf("0");
        }
        printf("\n");
    }
}