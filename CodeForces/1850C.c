#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char s[8][9],s2[10],x=0;
        for(int i=0;i<8;i++) scanf("%s",s[i]);
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if(s[i][j]!='.') s2[x++]=s[i][j];
            }
        }
        s2[x]=0;
        printf("%s\n",s2);
    }
}