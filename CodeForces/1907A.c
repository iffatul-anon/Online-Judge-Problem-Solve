#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char s[3];
        scanf("%s",s);
        int x=s[0]-'a',y=s[1]-'1'+1;
        for(int i=1;i<9;i++){
            if(i==y) continue;
            printf("%c%d\n",s[0],i);
        }
        for(int i=0;i<8;i++){
            if(i==x) continue;
            printf("%c%d\n",i+'a',y);
        }
    }
}