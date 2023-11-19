#include<stdio.h>
#include<string.h>
int main(){
    int n,m,count=0;
    char c;
    scanf("%d %d %c",&n,&m,&c);
    char s[n][m+1];
    int a[26]={0};
    a[c-'A']=1;
    for(int i=0;i<n;i++) scanf("%s",s[i]);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(s[i][j]==c){
                if(i-1>=0 && s[i-1][j]!='.') a[s[i-1][j]-'A']=1;
                if(i+1<n && s[i+1][j]!='.') a[s[i+1][j]-'A']=1;
                if(j-1>=0 && s[i][j-1]!='.') a[s[i][j-1]-'A']=1;
                if(j+1<m && s[i][j+1]!='.') a[s[i][j+1]-'A']=1;
            }
        }
    }
    for(int i=0;i<26;i++) if(a[i]==1) count++;
    printf("%d\n",count-1);
}