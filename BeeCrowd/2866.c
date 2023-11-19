#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        char s[100];
        scanf("%s",&s);
        char s2[100];
        int x=0;
        for(int i=strlen(s)-1;i>=0;i--){
            if(s[i]>='a' && s[i]<='z'){
                s2[x++]=s[i];
            }
        }
        s2[x]='\0';
        printf("%s\n",s2);
    }
}