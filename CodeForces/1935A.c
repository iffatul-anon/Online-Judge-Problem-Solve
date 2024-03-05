#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,i;
        scanf("%d",&n);
        char s[1000];
        scanf("%s",s);
        int l=strlen(s);
        for(i=0;i<l/2;i++){
            if(s[i]!=s[l-i-1]) break;
        }
        if(s[i]<=s[l-i-1]) printf("%s\n",s);
        else{
            for(i=l-1;i>=0;i--) printf("%c",s[i]);
            printf("%s\n",s);
        }
    }
}