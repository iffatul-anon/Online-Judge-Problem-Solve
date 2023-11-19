#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        char s[n+1];
        scanf("%s",s);
        printf("%c\n",s[n-1]);
    }
}