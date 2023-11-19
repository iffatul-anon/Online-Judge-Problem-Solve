#include<stdio.h>
int main(){
    char s[9];
    scanf("%s",&s);

    printf("%c%c/%c%c/%c%c\n",s[3],s[4],s[0],s[1],s[6],s[7]);
    printf("%c%c/%c%c/%c%c\n",s[6],s[7],s[3],s[4],s[0],s[1]);
    printf("%c%c-%c%c-%c%c\n",s[0],s[1],s[3],s[4],s[6],s[7]);
    return 0;
}