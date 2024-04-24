#include<stdio.h>
#include<string.h>
int main(){
    char s[1000];
    scanf("%[^\n]%*c", s);
    int l=strlen(s),f=0;
    if((s[0]=='S' && s[1]=='u' && s[2]=='s' && s[3]=='s' && s[4]=='u' && (s[5]==' ' || s[5]=='.' || s[5]==',' || s[5]=='!')) || ((s[l-7]==' ' && s[l-6]=='S' && s[l-5]=='u' && s[l-4]=='s' && s[l-3]=='s' && s[l-2]=='u'))) f=1;
    for(int i=1;i<l-1;i++) if((s[i-1]==' ' && s[i]=='S' && s[i+1]=='u' && s[i+2]=='s' && s[i+3]=='s' && s[i+4]=='u' && (s[i+5]==' ' || s[i+5]=='.' || s[i+5]==',' || s[i+5]=='!'))) f=1;
    if(s[l-1]=='?') printf("7\n");
    else if(f) printf("AI SUSSU!\n");
    else printf("O cara é bom!\n");
}