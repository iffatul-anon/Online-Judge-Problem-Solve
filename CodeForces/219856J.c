#include<stdio.h>
char s[10000001];
int main(){
    scanf("%s",s);
    int a[26]={0};
    for(int i=0;s[i];i++) a[s[i]-'a']++;
    for(int i=0;i<26;i++) if(a[i]>0) printf("%c : %d\n",i+'a',a[i]);
}