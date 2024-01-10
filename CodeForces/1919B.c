#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,c1=0,c2=0;
        scanf("%d",&n);
        char s[n+1];
        scanf("%s",s);
        for(int i=0;i<n;i++){
            if(s[i]=='+') c1++;
            else c2++;
        }
        printf("%d\n",abs(c1-c2));
    }
}