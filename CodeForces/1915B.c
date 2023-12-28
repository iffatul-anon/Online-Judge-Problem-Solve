#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char s[3][4];
        int a[3]={0};
        for(int i=0;i<3;i++) scanf("%s",s[i]);
        for(int i=0;i<3;i++) {
            for(int j=0;j<3;j++) {
                if(s[i][j]=='?') continue;
                a[s[i][j]-'A']++;
            }
        }
        if(a[0]==a[1]) printf("C\n");
        else if(a[0]==a[2]) printf("B\n");
        else printf("A\n");
    }
}