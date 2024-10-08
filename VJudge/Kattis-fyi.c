#include <stdio.h>
#include<string.h>
int main() {
    char s[1000];
    scanf("%s",&s);
    if(s[0]=='5' && s[1]=='5' && s[2]=='5') printf("1\n");
    else printf("0\n");
    return 0;
}