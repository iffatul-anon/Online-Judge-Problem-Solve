#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
    char s[100];
    scanf("%s",s);
    if(s[0]=='1') printf("13\n");
    else if(s[0]=='2') printf("23\n");
    else if(s[0]=='3') printf("31\n");
    else if(s[0]=='4') printf("41\n");
    else if(s[0]=='5') printf("53\n");
    else if(s[0]=='6') printf("61\n");
    else if(s[0]=='7') printf("71\n");
    else if(s[0]=='8') printf("83\n");
    else if(s[0]=='9') printf("97\n");
    else printf("-1\n");
    }
}