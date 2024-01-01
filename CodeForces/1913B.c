#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char s[1000000];
        scanf("%s",s);
        int c0=0,c1=0,c=strlen(s);
        for(int i=0;i<strlen(s);i++){
            if(s[i]=='0') c0++;
            else c1++;
        }
        for(int i=0;i<strlen(s);i++){
            if((s[i]=='0' && c1==0) || (s[i]=='1' && c0==0)){
                c=i;
                break;
            }
            if(s[i]=='0') c1--;
            else c0--;
        }
        printf("%d\n",strlen(s)-c);
    }
}