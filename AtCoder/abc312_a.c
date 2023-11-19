#include<stdio.h>
#include<string.h>
int main(){
    char s[4];
    scanf("%s",s);
    if(strcmp(s,"ACE")==0 || strcmp(s,"BDF")==0 || strcmp(s,"CEG")==0 || strcmp(s,"DFA")==0 || strcmp(s,"EGB")==0 || strcmp(s,"FAC")==0 || strcmp(s,"GBD")==0) printf("Yes\n");
    else printf("No\n");
}