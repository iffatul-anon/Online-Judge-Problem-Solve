#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,count1=1,count2=1;
        scanf("%d",&n);
        char s[n+1];
        scanf("%s",s);
        if(s[0]=='<' && s[n-1]=='>'){
            for(int i=0;i<n;i++){
                if(s[i]==s[i+1]) count1++;
                else break;
            }
            for(int i=n-1;i>=0;i--){
                if(s[i]==s[i-1]) count2++;
                else break;
            }
            if(count1<count2) printf("%d\n",count1);
            else printf("%d\n",count2);
        }
        else printf("0\n");
    }
}