#include<stdio.h>
#include<string.h>
int main(){
    int n;
    char s[25];
    scanf("%d %s",&n,&s);
    int k=strlen(s);
    int x=1;
    while(n/k>0){
        x=x*n;
        n=n-k;
    }
    if(n%k==0){
        printf("%d\n",x);
    }
    else{
        printf("%d\n",x*n); 
    }
    return 0;
}