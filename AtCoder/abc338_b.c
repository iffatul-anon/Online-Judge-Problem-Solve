#include<stdio.h>
#include<string.h>
int main(){
    char s[10000];
    scanf("%s",s);
    int a[26]={0},max=0;
    for(int i=0;i<strlen(s);i++) {
        a[s[i]-'a']++;
        if(a[s[i]-'a']>max) max=a[s[i]-'a'];
    }
    for(int i=0;i<26;i++) {
        if(a[i]==max){
            printf("%c\n",i+'a');
            return 0;
        }
    }
}