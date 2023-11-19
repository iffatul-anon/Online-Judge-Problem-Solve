#include<stdio.h>
#include<string.h>
int main(){
    int n,a[10],flag=0,flag2=0;
    scanf("%d",&n);
    char s[n+1];
    scanf("%s",s);
    for(int i=1;i<10;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
        if((s[i]-48<a[s[i]-48] || (s[i]-48==a[s[i]-48] && flag2==1)) && flag==0 ){ 
            printf("%c",a[s[i]-48]+48);
            flag2=1;
        }
        else{
            if(flag2==1) flag=1;
            printf("%c",s[i]);
        }
    }
}