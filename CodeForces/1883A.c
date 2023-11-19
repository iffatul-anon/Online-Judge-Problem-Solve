#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char s[5];
        scanf("%s",s);
        int sum=4;
        if(s[0]=='0') sum+=9;
        else sum+=s[0]-'1';
        for(int i=1;i<4;i++){
            if(s[i]==s[i-1]) continue;
            if(s[i]=='0') sum+=10-(s[i-1]-'0');
            else if(s[i-1]=='0') sum+=10-(s[i]-'0');
            else if(s[i]>s[i-1]) sum+=s[i]-s[i-1];
            else if(s[i]<s[i-1]) sum+=s[i-1]-s[i];
        }
        printf("%d\n",sum);
    }
}