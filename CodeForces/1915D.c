#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        char s[n];
        scanf("%s",s);
        for(int i=0;i<n-1;i++){
            printf("%c",s[i]);
            if((s[i]=='a' || s[i]=='e') && i+2<n && (s[i+2]=='a' || s[i+2]=='e') ) printf(".");
            if((s[i]=='b' || s[i]=='c' || s[i]=='d') && (s[i+1]=='b' || s[i+1]=='c' || s[i+1]=='d')) printf(".");
        }
        printf("%c\n",s[n-1]);
    }
}