#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char s[1000];
        scanf("%s",s);
        int l=strlen(s),c=0,f=0;
        for(int i=0;i<l-1;i++){
            if(s[i]!=s[i+1]) {
                c++;
                if(s[i]=='0' && s[i+1]=='1') f=1;
            }
        }
        if(f==0) c++;
        printf("%d\n",c);
    }
} 