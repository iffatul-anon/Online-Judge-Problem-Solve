#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char s[5];
        int c=0;
        scanf("%s",s);
        if(s[0]!='a') c++;
        if(s[1]!='b') c++;
        if(s[2]!='c') c++;
        if(c==3) printf("NO\n");
        else printf("YES\n");
    }
}