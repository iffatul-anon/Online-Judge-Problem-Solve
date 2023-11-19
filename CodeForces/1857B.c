#include <stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char s[1000000];
        scanf("%s",s);
        int l=strlen(s),a,b;
        a=l;
        for(int i=0;i<strlen(s);i++){
            if(s[i]>'4') {
                a=i;
                break;
            }
        }
        b=a;
        for(int i=a-1;i>=0;i--){
            if(s[i]=='4'){
                b=i;
            }
            else break;
        }
        if(a==l) printf("%s\n",s);
        else if(a==0 || b==0){
            printf("1");
            for(int i=0;i<l;i++) printf("0");
            printf("\n");
        }
        else{
            for(int i=0;i<b-1;i++) printf("%c",s[i]);
            printf("%c",s[b-1]+1);
            for(int i=b;i<l;i++) printf("0");
            printf("\n");
        }
    }
}