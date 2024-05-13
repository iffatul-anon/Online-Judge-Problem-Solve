#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char s[100],c[2];
        scanf("%s",s);
        int f=0,l=strlen(s);
        for(int i=1;i<l;i++) {
            if(s[i]!=s[0]){
                printf("YES\n");
                c[0]=s[i];
                s[i]=s[0];
                s[0]=c[0];
                printf("%s\n",s);
                f=1;
                break;
            }
        }
        if(f==0) printf("NO\n");
    }
} 