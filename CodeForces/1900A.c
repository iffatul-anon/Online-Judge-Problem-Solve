#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,c=0,f=0;
        scanf("%d",&n);
        char s[n+1];
        scanf("%s",s);
        for(int i=0;i<n;i++) {
            if(s[i]=='.' && s[i+1]=='.' && s[i+2]=='.') f=1;
            if(s[i]=='.') c++;
        }
         if(f==1) printf("2\n");
        else printf("%d\n",c);
    }
}