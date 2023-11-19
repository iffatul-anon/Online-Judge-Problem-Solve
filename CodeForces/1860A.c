#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char s[1000];
        int flag1=0;
        scanf("%s",s);
        int l=strlen(s);
        for(int i=0;i<l-1;i++) if(s[i]==')' && s[i+1]=='(') flag1=1;
        if(s[0]=='(' && s[1]==')' && l==2) printf("NO\n");
        else if(flag1==1){
            printf("YES\n");
            for(int i=0;i<l;i++) printf("(");
            for(int i=0;i<l;i++) printf(")");
            printf("\n");
        }
        else{
            printf("YES\n");
            for(int i=0;i<l;i++) printf("()");
            printf("\n");
        }
    }
}           