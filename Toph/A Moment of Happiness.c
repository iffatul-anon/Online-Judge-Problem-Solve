#include<stdio.h>
#include<string.h>
int main(){
    int n,count=0;
    scanf("%d",&n);
    char s[n+1];
    scanf("%s",s);
    for(int i=0;i<n;i++){
        if(s[i]=='0' && s[i+1]=='0'){
            count++;
            i++;
        }
        else if(s[i]=='0') count++;
    }
    printf("%d\n",count);
}