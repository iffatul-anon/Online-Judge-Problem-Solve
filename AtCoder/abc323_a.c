#include<stdio.h>
#include<string.h>
int main(){
    int f=0;
    char s[100];
    scanf("%s",s);
    for(int i=1;i<16;i=i+2) if(s[i]!='0') f=1;
    if(f==1) printf("No\n");
    else printf("Yes\n");
}