#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    char s[]="3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
    for(int i=0;i<n+2;i++) printf("%c",s[i]);
}