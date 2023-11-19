#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char s[1000];
        scanf("%s",s);
        int count1=0,count2=0;
        for(int i=0;i<strlen(s);i++){
            if(s[i]=='0' && s[i+1]=='0' && count2==1) count1=1;
            if(s[i]=='1' && s[i+1]=='1') count2=1;
        }
        if(count1==1) printf("NO\n");
        else printf("YES\n");
    }
}