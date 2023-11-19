#include<stdio.h>
#include<string.h>
int main(){
    int n,a[26]={0},c=0;
    scanf("%d",&n);
    char s[n+1];
    scanf("%s",s);
    for(int i=0;i<n-1;i++){
        c++;
        if(s[i]!=s[i+1]){
            if(a[s[i]-'a']<c) a[s[i]-'a']=c;
            c=0;
        }
    }
    c++;
    if(a[s[n-1]-'a']<c) a[s[n-1]-'a']=c;
    c=0;
    for(int i=0;i<26;i++) c+=a[i];
    printf("%d\n",c);
}