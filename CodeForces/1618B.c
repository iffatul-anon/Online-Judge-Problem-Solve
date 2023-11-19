#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        char s[n+10],s1[3],x=0;
        for(int i=0;i<n-2;i++){
            scanf("%s",s1);
            if(i==0){
                s[x++]=s1[0];
                s[x++]=s1[1];
            }
            else if(s1[0]==s[x-1]) s[x++]=s1[1];
            else {
                s[x++]=s1[0];
                s[x++]=s1[1];
            }
        }
        if(x<n) s[x++]=s1[1];
        s[x]=0;
        printf("%s\n",s);
    }
}
