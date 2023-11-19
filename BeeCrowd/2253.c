#include<stdio.h>
#include<string.h>
int main(){
    char s[1000];
    while(gets(s)){
        int l=strlen(s);
        if(l>32 || l<6){
            printf("Senha invalida.\n");
        }
        else{
            int flag=0,flag1=0,flag2=0,flag3=0;
            for(int i=0;i<l;i++){
                if(s[i]<48 || (s[i]>57 && s[i]<65) || (s[i]>90 && s[i]<97) || s[i]>122){
                    flag=1;
                }
                if(s[i]>='a' && s[i]<='z'){
                    flag1=1;
                }
                if(s[i]>='A' && s[i]<='Z'){
                    flag2=1;
                }
                if(s[i]>='0' && s[i]<='9'){
                    flag3=1;
                }
            }
            if(flag==1){
                printf("Senha invalida.\n");
            }
            else if(flag1==1 && flag2==1 && flag3==1){
                printf("Senha valida.\n");
            }
            else{
                printf("Senha invalida.\n");
            }
        }
    }
    return 0;
}