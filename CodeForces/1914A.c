#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,c=0;
        scanf("%d",&n);
        char s[n+1];
        int a[26]={0};
        scanf("%s",s);
        for(int i=0;i<n;i++) a[s[i]-'A']++;
        for(int i=0;i<26;i++) if(a[i]>i) c++;
        printf("%d\n",c);
    }
}