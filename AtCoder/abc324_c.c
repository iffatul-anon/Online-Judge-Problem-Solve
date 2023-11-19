#include<stdio.h>
#include<string.h>
int main(){
    int n,l,l2,c=0,c1=0;
    scanf("%d",&n);
    int a[n],x=0;
    char s[1000000],s2[1000000];
    scanf("%s",s);
    l=strlen(s);
    for(int i=0;i<n;i++){
        c=0;
        c1=0;
        scanf("%s",s2);
        l2=strlen(s2);
        if(l==l2){
            for(int j=0;j<l2;j++) if(s[j]!=s2[j]) c++;
            if(c<2) a[x++]=i+1;
        }
        else if(l==l2+1){
            for(int j=0;j<l2;j++){
                if(s[j]!=s2[j] && c1==0) c1=1;
                if(s[j+c1]==s2[j]) c++;
            }
            if(c==l2) a[x++]=i+1;
        }
        else if(l==l2-1){
            for(int j=0;j<l;j++){
                if(s[j]!=s2[j] && c1==0) c1=1;
                if(s[j]==s2[j+c1]) c++;
            }
            if(c==l) a[x++]=i+1;
        }
    }
    printf("%d\n",x);
    for(int i=0;i<x;i++) printf("%d ",a[i]);
    printf("\n");
}