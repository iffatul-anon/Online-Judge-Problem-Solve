#include<stdio.h>
#include<string.h>
int main(){
    char s[1000000],s2[11]="UUDDLRLRBA";
    scanf("%s",s);
    int c=0,x=0;
    for(int i=0;i<strlen(s);i++){
        if(s[i]==s2[x]){
            x++;
        }
        else if(x>2) x=0;
        if(x==10){
            x=0;
            c++;
        }
    }
    printf("%d\n",c);
}