#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        char s[n+1],s2[30],s3[30],s4[n+1];
        int a[30]={0},x=0;
        scanf("%s",s);
        for(int i=0;i<n;i++) a[s[i]-'a']++;
        for(int i=0;i<26;i++) if(a[i]!=0) s2[x++]=i+'a';
        s2[x]=0;
        for(int i=0;i<x;i++) s3[i]=s2[x-i-1];
        s3[x]=0;
        x=0;
        for(int i=0;i<26;i++) if(a[i]>0) a[i]=s3[x++];
        for(int i=0;i<n;i++) s4[i]=a[s[i]-'a'];
        s4[n]=0;
        printf("%s\n",s4);
    }
}