#include<stdio.h>
#include<string.h>
int main(){
    char s[1000000],s2[10];
    scanf("%s",s);
    int a[1010]={0},x=0,y=0,max=0;
    for(int i=0;i<strlen(s);i++){
        if(s[i]!=',') s2[y++]=s[i];
        if(s[i]==',' || i+1==strlen(s)){
            if(y==4) x=(s2[0]-'0')*1000+(s2[1]-'0')*100+(s2[2]-'0')*10+(s2[3]-'0');
            if(y==3) x=(s2[0]-'0')*100+(s2[1]-'0')*10+(s2[2]-'0');
            if(y==2) x=(s2[0]-'0')*10+(s2[1]-'0');
            if(y==1) x=s2[0]-'0';
            a[x]=1;
            if(x>max) max=x;
            y=0;
        }
    }
    for(int i=1;i<=1000;i++){
        if(a[i]==1 && a[i+1]==0) printf("%d",i);
        else if(a[i-1]==0 && a[i]==1) printf("%d-",i);
        if(a[i]==1 && a[i+1]==0 && i<max) printf(",");
    }
}